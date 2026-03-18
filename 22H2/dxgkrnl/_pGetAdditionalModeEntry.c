/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C02337E4
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01D6970 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(int a1, char a2)
{
  _DWORD *result; // rax

  if ( a1 == -2 )
    WdLogSingleEntry0(1LL);
  for ( result = qword_1C01421E0; result && (a1 != result[2] || a2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
