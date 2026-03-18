/*
 * XREFs of ?IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z @ 0x1C011F5B4
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AFC14 (-xxxMigrate@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     IsForegroundWindow @ 0x1C00CE0C8 (IsForegroundWindow.c)
 *     ?Feature_Emrbspi__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015CAD0 (-Feature_Emrbspi__private_IsEnabledPreCheck@@YAHXZ.c)
 *     UPDWORDValue @ 0x1C01CEE74 (UPDWORDValue.c)
 */

char __fastcall CRecalcState::IsWindowEligibleForMinimize(const struct tagWND *a1)
{
  int v2; // edx
  bool v3; // di
  int v4; // r8d
  int v5; // r9d
  char v6; // bl
  void *v7; // r11
  int v8; // r10d
  const char *v9; // rax
  PDEVICE_OBJECT v10; // rcx
  _BYTE *v11; // rcx
  __int16 v12; // ax
  char v13; // dl
  __int16 v15; // [rsp+30h] [rbp-38h]
  void *v16; // [rsp+38h] [rbp-30h]

  Feature_Emrbspi__private_IsEnabledPreCheck();
  v3 = (unsigned int)UPDWORDValue(8234LL) == 0;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v4) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v4) = 0;
  }
  v7 = &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids;
  v8 = 23;
  if ( (_BYTE)v2 || (_BYTE)v4 )
  {
    v9 = "Minimize";
    if ( !v3 )
      v9 = "Migrate";
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      23,
      78,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      (__int64)v9);
    v8 = 23;
    v7 = &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids;
  }
  if ( !v3 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v2 && !v6 )
      return 0;
    v16 = &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids;
    v15 = 23;
LABEL_81:
    LOBYTE(v4) = v6;
    WPP_RECORDER_AND_TRACE_SF_(v10->AttachedDevice, v2, v4, v5, 5, v8, v15, (__int64)v16);
    return 0;
  }
  v11 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v11[30] & 2) == 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v2 && !v6 )
      return 0;
    v12 = 24;
    goto LABEL_80;
  }
  v13 = v11[31];
  if ( (v13 & 8) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v2 && !v6 )
      return 0;
    v12 = 25;
    goto LABEL_80;
  }
  if ( (v13 & 0x10) == 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v2 && !v6 )
      return 0;
    v12 = 26;
    goto LABEL_80;
  }
  if ( (v11[20] & 0x40) != 0 && (v13 & 1) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v2 && !v6 )
      return 0;
    v12 = 27;
    goto LABEL_80;
  }
  if ( IsForegroundWindow((__int64)a1) )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v2 && !v6 )
      return 0;
    v12 = 28;
LABEL_80:
    v16 = v7;
    v15 = v12;
    goto LABEL_81;
  }
  return 1;
}
