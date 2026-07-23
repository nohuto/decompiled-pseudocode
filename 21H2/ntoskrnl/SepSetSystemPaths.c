/*
 * XREFs of SepSetSystemPaths @ 0x1407C9558
 * Callers:
 *     SepIsMinTCB @ 0x14069CBD4 (SepIsMinTCB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     SepLoadNgenLocations @ 0x1407C9654 (SepLoadNgenLocations.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetSystemPaths(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *CurrentServerSiloGlobals; // rbp
  size_t v6; // rsi
  char *PoolWithTag; // rax
  signed __int64 v8; // r14
  const WCHAR *v9; // rbx
  wchar_t *v10; // rbx
  void *v11; // rcx

  v2 = 0;
  SepLoadNgenLocations();
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(v4, v3);
  v6 = *((unsigned __int16 *)CurrentServerSiloGlobals + 536) + 30LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2 * v6 + 48, 0x63734943u);
  v8 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = (const WCHAR *)(PoolWithTag + 48);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)PoolWithTag + 24, v6, L"\\??\\%ws\\System32\\", CurrentServerSiloGlobals[135]);
    RtlInitUnicodeString((PUNICODE_STRING)v8, v9);
    v10 = (wchar_t *)&v9[v6 >> 1];
    RtlStringCbPrintfW(v10, v6, L"\\??\\%ws\\SysWOW64\\", CurrentServerSiloGlobals[135]);
    RtlInitUnicodeString((PUNICODE_STRING)(v8 + 16), v10);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)v8;
    *(_WORD *)(v8 + 32) = 12;
    v11 = (void *)(v8 & -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v8, 0LL) != 0));
    if ( v11 )
      ExFreePoolWithTag(v11, 0x63734943u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
