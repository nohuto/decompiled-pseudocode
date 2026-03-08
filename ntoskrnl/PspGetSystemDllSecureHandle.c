/*
 * XREFs of PspGetSystemDllSecureHandle @ 0x140B9391C
 * Callers:
 *     PspInitPhase3 @ 0x140B726D0 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x140727C90 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x140A40B7C (MmGetSectionStrongImageReference.c)
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
