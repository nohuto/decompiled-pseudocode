/*
 * XREFs of WheaAddErrorSourceDeviceDriverV1 @ 0x1403BAE40
 * Callers:
 *     <none>
 * Callees:
 *     WheaAddErrorSourceDeviceDriver @ 0x1407AF2F0 (WheaAddErrorSourceDeviceDriver.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriverV1(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  int v9; // [rsp+48h] [rbp-40h]
  int v10; // [rsp+4Ch] [rbp-3Ch]
  int v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+54h] [rbp-34h]
  __int128 v13; // [rsp+64h] [rbp-24h]

  if ( *(_DWORD *)a2 != 1 )
    return 3221225712LL;
  v4 = *a2;
  v5 = a2[1];
  v9 = *((_DWORD *)a2 + 10);
  v7[0] = v4;
  v8 = *((_QWORD *)a2 + 4);
  v10 = a4;
  v7[1] = v5;
  v11 = 1;
  v12 = DEFAULT_DEVICE_DRIVER_CREATOR_GUID;
  LODWORD(v7[0]) = 2;
  v13 = CPER_EMPTY_GUID;
  return WheaAddErrorSourceDeviceDriver(a1, v7);
}
