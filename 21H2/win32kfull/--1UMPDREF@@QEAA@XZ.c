/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C02B1908
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00A1260 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00A15D8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(void **this, __int64 a2)
{
  void *v3; // rcx

  v3 = *this;
  if ( v3 )
  {
    DEC_SHARE_REF_CNT(v3, a2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker((UMPDOBJ *)*this) )
      Win32FreePool(*this);
  }
}
