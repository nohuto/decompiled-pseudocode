/*
 * XREFs of PopSetDevicesSystemState @ 0x140AA7500
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PopSetDevicesSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _DWORD v6[6]; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+38h] [rbp-20h]
  char v8; // [rsp+39h] [rbp-1Fh]
  char v9; // [rsp+3Ah] [rbp-1Eh]
  char v10; // [rsp+3Bh] [rbp-1Dh]

  v8 = byte_140C3CE3D;
  v7 = byte_140C3CE22;
  v9 = byte_140C3CE3C;
  v6[0] = dword_140C3CE4C;
  v6[1] = dword_140C3CE48;
  v4 = dword_140C3CE40;
  if ( (dword_140C3CE2C & 8) != 0 )
    v4 = 6;
  v6[5] = dword_140C3CE2C;
  v6[2] = v4;
  v6[3] = dword_140C3CE44;
  v6[4] = qword_140C3CE24;
  v10 = 0;
  return PoBroadcastSystemState((__int64)v6, 6LL, a3, a4);
}
