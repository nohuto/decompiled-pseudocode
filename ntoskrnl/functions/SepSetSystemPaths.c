__int64 __fastcall SepSetSystemPaths(__int64 a1)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  size_t v4; // rbp
  __int64 Pool2; // rax
  signed __int64 v6; // rsi
  const WCHAR *v7; // rbx
  wchar_t *v8; // rbx

  v2 = 0;
  SepLoadNgenLocations();
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = LOWORD(CurrentServerSiloGlobals[79].Flink) + 30LL;
  Pool2 = ExAllocatePool2(256LL, 2 * v4 + 48, 1668499779LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = (const WCHAR *)(Pool2 + 48);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(Pool2 + 48), v4, L"\\??\\%ws\\System32\\", CurrentServerSiloGlobals[79].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)v6, v7);
    v8 = (wchar_t *)&v7[v4 >> 1];
    RtlStringCbPrintfW(v8, v4, L"\\??\\%ws\\SysWOW64\\", CurrentServerSiloGlobals[79].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)(v6 + 16), v8);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)v6;
    *(_WORD *)(v6 + 32) = 12;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6, 0LL) )
      ExFreePoolWithTag((PVOID)v6, 0x63734943u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
