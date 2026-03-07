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
