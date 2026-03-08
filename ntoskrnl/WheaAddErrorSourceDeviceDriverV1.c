/*
 * XREFs of WheaAddErrorSourceDeviceDriverV1 @ 0x1403AFCC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x14080C280 (WheaAddErrorSourceDeviceDriver.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriverV1(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // eax
  __int128 v9; // xmm1
  _OWORD v11[6]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, 0x54uLL);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225712LL;
  v8 = *(_DWORD *)(a2 + 40);
  v9 = *(_OWORD *)(a2 + 16);
  v11[0] = *(_OWORD *)a2;
  *(_QWORD *)&v11[2] = *(_QWORD *)(a2 + 32);
  *((_QWORD *)&v11[2] + 1) = __PAIR64__(a4, v8);
  v11[1] = v9;
  *(_OWORD *)((char *)&v11[3] + 4) = DEFAULT_DEVICE_DRIVER_CREATOR_GUID;
  LODWORD(v11[3]) = 1;
  *(_OWORD *)((char *)&v11[4] + 4) = CPER_EMPTY_GUID;
  LODWORD(v11[0]) = 2;
  return WheaAddErrorSourceDeviceDriver(a1, v11, a3);
}
