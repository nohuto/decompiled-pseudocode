/*
 * XREFs of DpiFdoGetAdapterUniqueGUID @ 0x1C0213CB4
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C02134D0 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetAdapterUniqueGUID(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 4776) )
    return v1 + 4768;
  else
    return 0LL;
}
