/*
 * XREFs of PspGetSystemDllSecureHandle @ 0x140B533E0
 * Callers:
 *     PspInitPhase3 @ 0x140B313B8 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x140757130 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x14097F148 (MmGetSectionStrongImageReference.c)
 */

__int64 __fastcall PspGetSystemDllSecureHandle(signed __int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  unsigned __int64 v5; // rdi
  unsigned int SectionStrongImageReference; // ebx

  v4 = (void *)PspReferenceSystemDll(a1);
  v5 = (unsigned __int64)v4;
  if ( !v4 )
    return 3221225480LL;
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, 0, v4, a2);
  ObFastDereferenceObject(a1, v5, 0x64537350u);
  return SectionStrongImageReference;
}
