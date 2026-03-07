void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  __int64 **v2; // rax
  __int64 **v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140C656C0 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = v2;
  if ( v2 )
  {
    MiRemoveSecureEntry((ULONG_PTR)v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
