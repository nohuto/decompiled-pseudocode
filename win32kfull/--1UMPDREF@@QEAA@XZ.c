/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C02C96FC
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C02CFA80 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C029BFDC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker((UMPDOBJ *)*this) )
      Win32FreePool(*this);
  }
}
