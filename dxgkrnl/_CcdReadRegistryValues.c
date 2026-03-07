__int64 __fastcall CcdReadRegistryValues(HANDLE a1, _WORD *a2, const void *a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  char *v13; // rax
  size_t v14; // r8
  char *v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r15
  char *v18; // rcx
  __int64 v19; // rdx
  _DWORD *v20; // rax
  int RegistryValues; // eax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( a2 && *a2 )
  {
    v9 = CcdOpenRegistrySubkey(&Handle, 131097LL, a1, a2, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry5(2LL, v9, a1, a2, a3, a5);
      return v10;
    }
  }
  else
  {
    Handle = a1;
  }
  v11 = 56 * v5;
  v12 = v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v11 = -1LL;
  v13 = (char *)operator new[](v11, 0x63644356u, 64LL);
  v14 = 56 * v5;
  v15 = v13;
  if ( v13 )
  {
    memmove(v13, a3, v14);
    v16 = v5 - 1;
    v17 = a5;
    if ( v16 )
    {
      v18 = v15 + 40;
      v19 = v16;
      do
      {
        *((_QWORD *)v18 - 2) += v17;
        v20 = (_DWORD *)*((_QWORD *)v18 - 2);
        *((_DWORD *)v18 - 2) = 0x4000000;
        *(_QWORD *)v18 = 0LL;
        *((_DWORD *)v18 + 2) = 0;
        v18 += 56;
        *v20 = 0;
        --v19;
      }
      while ( v19 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v15, 0LL, 0LL);
    v10 = RegistryValues;
    if ( RegistryValues < 0 )
      WdLogSingleEntry5(3LL, RegistryValues, Handle, a3, v12, v17);
    if ( Handle != a1 )
      ZwClose(Handle);
    operator delete(v15);
    return v10;
  }
  WdLogSingleEntry2(6LL, v5, v14);
  return 3221225495LL;
}
