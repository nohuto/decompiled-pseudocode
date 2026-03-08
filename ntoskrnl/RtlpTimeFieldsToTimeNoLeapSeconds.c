/*
 * XREFs of RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1402D11E0
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1402D1150 (RtlTimeFieldsToTime.c)
 *     HalSetRealTimeClock @ 0x1404FCC40 (HalSetRealTimeClock.c)
 *     HalEfiGetTime @ 0x14050A9DC (HalEfiGetTime.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140519F14 (HalpCheckWakeupTimeAndAdjust.c)
 *     RtlParseLeapSecondData @ 0x140A714E4 (RtlParseLeapSecondData.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B48710 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B489A0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B48C50 (SeMakeSystemToken.c)
 *     GetBootSystemTime @ 0x140B70018 (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTimeFieldsToTimeNoLeapSeconds(__int16 *a1, _QWORD *a2)
{
  int v2; // eax
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  int v10; // r11d
  unsigned int v11; // r15d
  __int64 v12; // rdi
  unsigned int v13; // r9d
  __int64 v14; // rbx
  int v15; // eax
  int v16; // edx
  __int16 v17; // r8

  v2 = a1[1];
  v4 = a1[2];
  v5 = *a1;
  v6 = a1[3];
  v7 = a1[4];
  v8 = v2 - 1;
  v9 = a1[5];
  v10 = v4 - 1;
  v11 = a1[6];
  v12 = (unsigned int)v2;
  if ( v2 < 1 )
    return 0;
  if ( v4 < 1 )
    return 0;
  v13 = v5 - 1601;
  if ( v5 - 1601 > 0x722A || v8 > 0xB )
    return 0;
  if ( v5 != 400 * (v5 / 0x190) && (v5 == 100 * (v5 / 0x64) || (v5 & 3) != 0) )
  {
    v14 = v8;
    v15 = NormalYearDaysPrecedingMonth[v14];
    v16 = NormalYearDaysPrecedingMonth[v12];
  }
  else
  {
    v14 = v8;
    v16 = LeapYearDaysPrecedingMonth[v2];
    v15 = LeapYearDaysPrecedingMonth[v14];
  }
  if ( (__int16)v10 >= v16 - v15 || v6 > 0x17 || v7 > 0x3B || v9 > 0x3B || v11 > 0x3E7 )
    return 0;
  if ( v5 - 1600 != 400 * ((v5 - 1600) / 0x190) && (v5 - 1600 == 100 * ((v5 - 1600) / 0x64) || (v5 & 3) != 0) )
    v17 = NormalYearDaysPrecedingMonth[v14];
  else
    v17 = LeapYearDaysPrecedingMonth[v14];
  *a2 = 10000
      * (86400000LL * (int)(v10 + v13 / 0x190 + (v13 >> 2) + 365 * v13 - v13 / 0x64 + v17)
       + v11
       + 1000 * (v9 + 60 * (v7 + 60 * v6)));
  return 1;
}
