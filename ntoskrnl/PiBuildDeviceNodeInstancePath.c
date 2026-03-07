__int64 __fastcall PiBuildDeviceNodeInstancePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r15
  wchar_t *Pool2; // rax
  WCHAR *v14; // rsi
  NTSTATUS v15; // edi
  const wchar_t *v16; // rcx

  if ( a2 && a3 && a4 )
  {
    if ( *(_QWORD *)(a1 + 48) && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 42) )
      PnpCleanupDeviceRegistryValues(a1 + 40);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a3 + 2 * v10) );
    v11 = v10 + v9;
    do
      ++v8;
    while ( *(_WORD *)(a4 + 2 * v8) );
    v12 = (unsigned int)(2 * (v8 + v11) + 6);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, v12, 1232105040LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = RtlStringCbPrintfW(Pool2, (unsigned int)v12, L"%s\\%s\\%s", a2, a3, a4);
      if ( v15 >= 0 && ((v16 = *(const wchar_t **)(a1 + 48)) == 0LL || wcsicmp(v16, v14)) )
      {
        PnpFreeDeviceInstancePath(a1);
        RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v14);
      }
      else
      {
        ExFreePoolWithTag(v14, 0x49706E50u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v15;
}
