/*
 * XREFs of SshSessionManagerTraceDirtyTransition @ 0x1407FBAD8
 * Callers:
 *     PopDiagTraceDirtyTransition @ 0x140B32210 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshSessionManagerTraceDirtyTransition()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  char v4; // [rsp+20h] [rbp-E0h] BYREF
  char v5; // [rsp+21h] [rbp-DFh] BYREF
  int v6; // [rsp+24h] [rbp-DCh] BYREF
  int v7; // [rsp+28h] [rbp-D8h] BYREF
  int v8; // [rsp+2Ch] [rbp-D4h] BYREF
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[36]; // [rsp+40h] [rbp-C0h] BYREF

  v10[0] = &dword_140D16810;
  v10[12] = qword_140D16840;
  v10[2] = &qword_140D16818;
  v10[4] = &qword_140D16820;
  v10[6] = &qword_140D16828;
  v10[8] = &qword_140D16830;
  v6 = *(unsigned __int8 *)(qword_140D16840 + 8) >> 4;
  v10[10] = &v6;
  v10[14] = &dword_140D16864;
  v10[16] = &byte_140D16850;
  v0 = (*(unsigned __int8 *)(qword_140D16840 + 8) >> 1) & 1;
  v10[1] = 4LL;
  v7 = v0;
  v10[18] = &v7;
  v10[20] = qword_140D16840 + 12;
  v10[22] = qword_140D16848 + 24;
  LOBYTE(v0) = *(_BYTE *)(qword_140D16840 + 14) & 0xF;
  v10[3] = 8LL;
  v4 = v0;
  v10[24] = &v4;
  v1 = (*(unsigned __int8 *)(qword_140D16840 + 14) >> 5) & 1;
  v10[5] = 8LL;
  v8 = v1;
  v10[26] = &v8;
  v2 = (*(unsigned __int8 *)(qword_140D16848 + 1) >> 4) & 1;
  v10[7] = 8LL;
  v9 = v2;
  v10[28] = &v9;
  v10[30] = qword_140D16848 + 3;
  v10[32] = qword_140D16848 + 4;
  v5 = *(_BYTE *)(qword_140D16840 + 11) >> 6;
  v10[34] = &v5;
  v10[9] = 8LL;
  v10[11] = 4LL;
  v10[13] = 8LL;
  v10[15] = 4LL;
  v10[17] = 1LL;
  v10[19] = 4LL;
  v10[21] = 4LL;
  v10[23] = 8LL;
  v10[25] = 1LL;
  v10[27] = 4LL;
  v10[29] = 4LL;
  v10[31] = 1LL;
  v10[33] = 1LL;
  v10[35] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_DIRTY_TRANSITION_CONTROL_EVENT, 18LL, v10);
}
