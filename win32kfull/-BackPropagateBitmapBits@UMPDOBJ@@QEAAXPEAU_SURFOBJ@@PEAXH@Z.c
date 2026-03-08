/*
 * XREFs of ?BackPropagateBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C02BA054
 * Callers:
 *     ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02BB4C0 (-UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall UMPDOBJ::BackPropagateBitmapBits(char **this, struct _SURFOBJ *a2, void *a3, int a4)
{
  ULONG cjBits; // ebx
  char *KernelPtr; // rax

  if ( a4 )
  {
    cjBits = a2->cjBits;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)a2->pvBits);
    memmove(a3, KernelPtr, cjBits);
  }
}
