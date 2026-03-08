/*
 * XREFs of PiDrvDbUnloadHive @ 0x14086773C
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwUnloadKey2 @ 0x140415E10 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x140415E30 (ZwUnloadKeyEx.c)
 */

__int64 __fastcall PiDrvDbUnloadHive(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+40h] [rbp-18h]

  v3[2] = a1;
  v3[1] = 0LL;
  v3[0] = 48LL;
  v3[3] = 576LL;
  v4 = 0LL;
  if ( a2 )
    return ZwUnloadKeyEx((__int64)v3, a2);
  else
    return ZwUnloadKey2((__int64)v3, 0LL);
}
