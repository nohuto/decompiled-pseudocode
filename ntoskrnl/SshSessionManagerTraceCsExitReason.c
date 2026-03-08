/*
 * XREFs of SshSessionManagerTraceCsExitReason @ 0x14099E7FC
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140879704 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 */

signed __int32 __fastcall SshSessionManagerTraceCsExitReason(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+24h] [rbp-DCh] BYREF
  int v11; // [rsp+28h] [rbp-D8h] BYREF
  int v12; // [rsp+2Ch] [rbp-D4h] BYREF
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[32]; // [rsp+50h] [rbp-B0h] BYREF

  v18[1] = 4LL;
  v18[3] = 4LL;
  v18[0] = a3 + 8;
  v14 = *(unsigned __int8 *)(a1 + 56);
  v18[5] = 4LL;
  v18[2] = &v14;
  v4 = *a3 - 1;
  v18[7] = 8LL;
  v18[9] = 4LL;
  v18[11] = 4LL;
  v18[13] = 4LL;
  v15 = (v4 & 0xFFFFFFFD) == 0;
  v18[4] = &v15;
  v18[6] = a1 + 8;
  v18[8] = 0xFFFFF780000002C4uLL;
  v18[10] = &v9;
  v18[12] = a1 + 40;
  v18[14] = a1 + 44;
  v18[16] = a1 + 48;
  v18[18] = a1 + 52;
  v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v18[15] = 4LL;
  v18[17] = 4LL;
  v18[19] = 4LL;
  v17 = v5 / 0xA;
  v18[20] = &v17;
  v18[21] = 8LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v16 = 0LL;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 40);
    v11 = *(_DWORD *)(a2 + 44);
    v12 = *(_DWORD *)(a2 + 48);
    v7 = *(_DWORD *)(a2 + 52);
    v16 = v6 / 0xA;
    v9 = 1;
    v13 = v7;
  }
  v18[23] = 4LL;
  v18[22] = &v10;
  v18[25] = 4LL;
  v18[24] = &v11;
  v18[27] = 4LL;
  v18[26] = &v12;
  v18[29] = 4LL;
  v18[28] = &v13;
  v18[30] = &v16;
  v18[31] = 8LL;
  return SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT, 0x10u, (__int64)v18);
}
