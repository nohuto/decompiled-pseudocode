/*
 * XREFs of ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C01853AC
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vFreeKernelSection(char *a1)
{
  char *v1; // rcx
  void *v2; // rbx

  if ( a1 )
  {
    v1 = a1 - 16;
    v2 = *(void **)v1;
    if ( !*(_QWORD *)v1 )
      KeBugCheckEx(0x50u, 0LL, 0LL, *((int *)v1 + 2), 0LL);
    if ( MmUnmapViewInSessionSpace(v1) >= 0 )
      ObfDereferenceObject(v2);
  }
}
