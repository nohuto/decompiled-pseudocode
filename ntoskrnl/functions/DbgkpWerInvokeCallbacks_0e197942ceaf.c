__int64 __fastcall DbgkpWerInvokeCallbacks(__int64 a1)
{
  const void *v2; // r9
  int v4; // eax
  unsigned int v5; // edi

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerInvokeCallbacks entered, context 0x%p\n", (const void *)a1);
  v2 = *(const void **)(*(_QWORD *)(a1 + 72) + 8LL);
  if ( !v2 )
    return 0LL;
  DbgPrintEx(5u, 3u, "DBGK: Invoking callback at address 0x%p\n", v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int128 *, const void *, unsigned int), _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 72) + 8LL))(
         a1,
         DbgkWerAddSecondaryData,
         *(unsigned int *)(a1 + 32),
         *(_QWORD *)(a1 + 40),
         *(_QWORD *)(a1 + 48),
         *(_QWORD *)(a1 + 56),
         *(_QWORD *)(a1 + 64),
         *(_QWORD *)(*(_QWORD *)(a1 + 72) + 16LL));
  v5 = v4;
  if ( v4 < 0 )
    DbgPrintEx(
      5u,
      0,
      "DBGK: callback at address 0x%p returned status 0x%X\n",
      *(const void **)(*(_QWORD *)(a1 + 72) + 8LL),
      v4);
  return v5;
}
