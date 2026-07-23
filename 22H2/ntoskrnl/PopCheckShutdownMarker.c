/*
 * XREFs of PopCheckShutdownMarker @ 0x140A447E0
 * Callers:
 *     PopProcessBootstat @ 0x140A4477C (PopProcessBootstat.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406A32F0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopClearSystemSleepCheckpoint @ 0x1407742F0 (PopClearSystemSleepCheckpoint.c)
 *     PopRecordSleepCheckpoint @ 0x1407773E8 (PopRecordSleepCheckpoint.c)
 *     RtlGetSystemBootStatusEx @ 0x14079A820 (RtlGetSystemBootStatusEx.c)
 *     PopRecordSleepCheckpointSource @ 0x1408E1624 (PopRecordSleepCheckpointSource.c)
 *     PopDiagTraceDirtyTransition @ 0x140A93168 (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(__int64 a1)
{
  char v2; // cl
  char v3; // cl
  char result; // al
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  char v7; // bl
  int v8; // r9d
  LOGICAL CheckStamp; // [rsp+30h] [rbp-D0h]
  char v10; // [rsp+50h] [rbp-B0h] BYREF
  char v11; // [rsp+51h] [rbp-AFh] BYREF
  bool v12; // [rsp+52h] [rbp-AEh] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int Buffer; // [rsp+6Ch] [rbp-94h] BYREF
  int v20; // [rsp+70h] [rbp-90h] BYREF
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int128 *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  bool *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int v43; // [rsp+140h] [rbp+40h] BYREF
  __int128 *v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+158h] [rbp+58h]
  __int128 *v47; // [rsp+160h] [rbp+60h]
  int v48; // [rsp+168h] [rbp+68h]
  int v49; // [rsp+170h] [rbp+70h]
  __int128 *v50; // [rsp+178h] [rbp+78h]
  int v51; // [rsp+180h] [rbp+80h]

  v43 = 14;
  v44 = &PopBsdPhysicalPowerButtonInfo;
  v10 = 0;
  v47 = &PopBsdPowerTransition;
  v45 = 48;
  v50 = &PopBsdPowerTransitionExtension;
  v46 = 7;
  v48 = 32;
  v49 = 16;
  v51 = 32;
  RtlGetSystemBootStatusEx((__int64)&v43, 3u, 0LL);
  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 240) + 132LL) & 1;
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  PopLastBootSucceeded = v2;
  xmmword_140C54310 = xmmword_140C50568;
  xmmword_140C54320 = xmmword_140C50578;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && (unsigned int)dword_140C02228 > 5
    && tlgKeywordOn((__int64)&dword_140C02228, 0x200000000000LL) )
  {
    v23 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v14 = v5;
    v13 = WORD2(v5);
    v25 = &v13;
    v27 = &v14;
    v29 = &xmmword_140C54310;
    v15 = WORD6(xmmword_140C54310);
    v31 = &v15;
    v33 = &v16;
    v35 = &v17;
    v18 = BYTE6(v5);
    v37 = &v18;
    v16 = v5;
    v6 = HIBYTE(v5);
    v11 = v6 & 1;
    v17 = HIWORD(*((_QWORD *)&xmmword_140C54310 + 1));
    v39 = &v11;
    v12 = (v6 & 2) != 0;
    v41 = &v12;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 1LL;
    v42 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02228,
      (unsigned __int8 *)byte_140026E0B,
      0LL,
      0LL,
      0xCu,
      &v22);
  }
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_140C54340 = xmmword_140C50758;
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_140C54360 = xmmword_140C50598;
  if ( (qword_140C197B8 & 4) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) &= ~1u;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  v3 = BYTE14(PopBsdPowerTransitionAtBoot) & 0xDF;
  BYTE14(PopBsdPowerTransitionAtBoot) &= ~0x20u;
  if ( DWORD2(PopBsdPhysicalPowerButtonInfoAtBoot) && (HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 4) != 0 )
  {
    BYTE14(PopBsdPowerTransitionAtBoot) = v3 | 0x20;
    *(_QWORD *)&PopBsdPowerTransitionAtBoot = PopBsdPhysicalPowerButtonInfoAtBoot;
  }
  PopAutoChkCausedReboot = (BYTE14(PopBsdPowerTransition) & 0x10) != 0;
  StateName = (WNF_STATE_NAME)WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  Buffer = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData(&StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    *((_QWORD *)&xmmword_140C54340 + 1) = 1LL;
  }
  if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) != 0 )
  {
    v20 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v10,
                (int)&v20,
                0LL) < 0 )
    {
      v7 = BYTE2(PopBsdPowerTransitionExtensionAtBoot);
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2);
    }
    else
    {
      v7 = v10;
      BYTE2(PopBsdPowerTransitionExtensionAtBoot) = v10;
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 4;
      PopRecordSleepCheckpoint(v10);
      PopRecordSleepCheckpointSource(1);
      PopClearSystemSleepCheckpoint(1);
    }
    LOBYTE(v8) = (BYTE8(PopBsdPowerTransitionAtBoot) & 2) != 0;
    return PopDiagTraceDirtyTransition(
             a1,
             BYTE8(PopBsdPowerTransitionAtBoot) >> 4,
             WORD6(PopBsdPowerTransitionAtBoot),
             v8,
             SBYTE8(xmmword_140C50758),
             PopBsdPowerTransitionAtBoot,
             CheckStamp,
             v7,
             BYTE14(PopBsdPowerTransitionAtBoot) & 0xF,
             (BYTE14(PopBsdPowerTransitionAtBoot) & 0x20) != 0);
  }
  return result;
}
