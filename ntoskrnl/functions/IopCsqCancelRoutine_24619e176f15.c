__int64 __fastcall IopCsqCancelRoutine(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, char *); // rax
  __int64 v7; // rdx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  v3 = *(_QWORD *)(a2 + 144);
  if ( *(_DWORD *)v3 == 1 )
  {
    v5 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)v3 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    v5 = *(_QWORD *)(a2 + 144);
  }
  v6 = *(void (__fastcall **)(__int64, char *))(v5 + 32);
  *(_QWORD *)(v5 + 56) = 0LL;
  v6(v5, &v8);
  (*(void (__fastcall **)(__int64, __int64))(v5 + 16))(v5, a2);
  if ( v3 != v5 )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(a2 + 144) = 0LL;
  }
  LOBYTE(v7) = v8;
  (*(void (__fastcall **)(__int64, __int64))(v5 + 40))(v5, v7);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 48))(v5, a2);
}
