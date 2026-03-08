/*
 * XREFs of Win32CreateSection @ 0x1C002D5F4
 * Callers:
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00DA130 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0184F54 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0185010 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     EngAllocSectionMem @ 0x1C01968D0 (EngAllocSectionMem.c)
 *     InitKernelHandleTable @ 0x1C031E1A8 (InitKernelHandleTable.c)
 *     InitCreateSharedSection @ 0x1C031E224 (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int Section; // ebx

  Section = MmCreateSection(a1, a2, 0LL, a4, 4, a6, 0LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
