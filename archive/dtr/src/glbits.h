/*
 * glbits.h
 *
 * OpenGL bits
 *
 * (c) 2007 Thomas White <taw27@cam.ac.uk>
 *
 *  dtr - Diffraction Tomography Reconstruction
 *
 */
 
#ifndef GLBITS_H
#define GLBITS_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>

#include "displaywindow.h"

extern void glbits_prepare(DisplayWindow *dw);
extern gint glbits_expose(GtkWidget *widget, GdkEventExpose *event, DisplayWindow *dw);
extern void glbits_set_ortho(DisplayWindow *dw, GLfloat w, GLfloat h);
extern void glbits_set_perspective(DisplayWindow *dw, GLfloat w, GLfloat h);
extern gboolean glbits_configure(GtkWidget *widget, GdkEventConfigure *event, DisplayWindow *dw);
extern void glbits_free_resources(DisplayWindow *dw);
extern void glbits_final_free_resources(DisplayWindow *dw);
extern gint glbits_realise(GtkWidget *widget, DisplayWindow *dw);
extern void glbits_update_slice_back(GtkWidget *widget, DisplayWindow *dw);
extern void glbits_update_slice_front(GtkWidget *widget, DisplayWindow *dw);

#endif	/* GLBITS_H */
