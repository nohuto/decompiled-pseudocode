/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x1C0190160
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C018C3A8 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  result = 19760LL;
  if ( a3 == 19760 || (result = 7472LL, a3 == 7472) )
  {
    if ( *(_BYTE *)(a1 + 1073) )
      *(_DWORD *)(a2 + 360) |= 0x8000u;
  }
  return result;
}
