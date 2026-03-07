__int64 __fastcall CcdRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, _QWORD *a3)
{
  void *v3; // rdi
  void *v7; // rax
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  ULONG Length; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  do
  {
    operator delete(v3);
    v7 = (void *)operator new[](Length, 0x63644356u, 256LL);
    v3 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(2LL, Length);
      v9 = -1073741801;
      goto LABEL_8;
    }
    v8 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v7, Length, &Length);
    v9 = v8;
  }
  while ( v8 == -2147483643 || v8 == -1073741789 );
  if ( v8 >= 0 )
  {
    *a3 = v3;
    return v9;
  }
LABEL_8:
  operator delete(v3);
  return v9;
}
