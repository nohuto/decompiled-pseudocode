/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00263A4
 * Callers:
 *     DxgkFlipOverlay @ 0x1C03365D0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0336BB0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0337280 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
