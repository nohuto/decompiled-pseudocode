/*
 * XREFs of UsbhWmiEnumerationFailure @ 0x1C004A2A0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhWmiEnumerationFailure(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // r11
  int v7; // r9d
  unsigned int v8; // r10d
  __int64 result; // rax
  __int64 PortData; // rax

  Log(a1, 64, 1299474532, 0LL, a5);
  *a4 &= v7;
  if ( v8 < 0x18 )
    return 3221225507LL;
  PortData = UsbhGetPortData(v6, *(_WORD *)(a5 + 4));
  if ( !PortData )
    return 3221225485LL;
  *(_DWORD *)(a5 + 12) = *(_DWORD *)(PortData + 424);
  result = 0LL;
  *a4 = 24;
  return result;
}
