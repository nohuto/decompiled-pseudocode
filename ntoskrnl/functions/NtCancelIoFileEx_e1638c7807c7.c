__int64 __fastcall NtCancelIoFileEx(void *a1, __int64 a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  __int64 result; // rax
  PVOID v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h]

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = Object;
    v10 = IopCancelIoFile(Object, a2);
    *(_DWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v8);
    return v10;
  }
  return result;
}
