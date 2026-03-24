/*
 * XREFs of PopSetDevicesSystemState @ 0x140990BF4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140C2345D;
  v3 = byte_140C23442;
  v5 = byte_140C2345C;
  v2[0] = dword_140C2346C;
  v2[1] = dword_140C23468;
  v0 = dword_140C23460;
  if ( (dword_140C2344C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140C2344C;
  v2[2] = v0;
  v2[3] = dword_140C23464;
  v2[4] = qword_140C23444;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}
