/*
 * XREFs of PspGetSystemDllSecureHandle @ 0x140A94648
 * Callers:
 *     PspInitPhase3 @ 0x140A4C0C0 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x1406C1094 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x1408D8088 (MmGetSectionStrongImageReference.c)
 */

__int64 __fastcall PspGetSystemDllSecureHandle(signed __int64 *a1, _QWORD *a2)
{
  struct _DMA_ADAPTER *v4; // rax
  struct _DMA_ADAPTER *v5; // rdi
  unsigned int SectionStrongImageReference; // ebx

  v4 = (struct _DMA_ADAPTER *)PspReferenceSystemDll(a1);
  v5 = v4;
  if ( !v4 )
    return 3221225480LL;
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, 0, v4, a2);
  ObFastDereferenceObject(a1, v5);
  return SectionStrongImageReference;
}
