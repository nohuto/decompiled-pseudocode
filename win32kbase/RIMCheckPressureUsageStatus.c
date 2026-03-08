/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x1C01B3FBC
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C01AF510 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  result = 19760LL;
  if ( a3 == 19760 || (result = 7472LL, a3 == 7472) )
  {
    if ( *(_BYTE *)(a1 + 1041) )
      *(_DWORD *)(a2 + 360) |= 0x8000u;
  }
  return result;
}
