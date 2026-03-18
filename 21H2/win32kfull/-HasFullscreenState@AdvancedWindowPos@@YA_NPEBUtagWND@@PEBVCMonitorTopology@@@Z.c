/*
 * XREFs of ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC
 * Callers:
 *     ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C (-FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z @ 0x1C015C600 (--0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 *     _anonymous_namespace_::IsFullscreenRect @ 0x1C00B2774 (_anonymous_namespace_--IsFullscreenRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddddd @ 0x1C024C260 (WPP_RECORDER_AND_TRACE_SF_sdddddddd.c)
 */

char __fastcall AdvancedWindowPos::HasFullscreenState(
        AdvancedWindowPos *this,
        const struct tagWND *a2,
        const struct CMonitorTopology *a3)
{
  __int64 v5; // rcx
  char v7; // bl
  struct tagRECT *Prop; // rax
  int v9; // edx
  bool IsFullscreenRect; // di
  const char *v11; // r9
  unsigned __int64 v12; // r8
  __int128 v13; // [rsp+90h] [rbp-80h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-60h]
  _BYTE v15[72]; // [rsp+F0h] [rbp-20h] BYREF
  struct tagRECT v16; // [rsp+138h] [rbp+28h] BYREF

  v5 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v5 + 20) & 0x40) != 0 )
    return 1;
  if ( (*(_BYTE *)(v5 + 31) & 0x20) == 0 )
    return 0;
  v7 = 1;
  Prop = (struct tagRECT *)GetProp((__int64)this, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  if ( !Prop || (Prop[3].left & 0x18) != 0 )
    return 0;
  v16 = *Prop;
  v14 = *((_OWORD *)anonymous_namespace_::GetPreviousMonitorInfo(v15, this, &v16, (__int64)a2) + 1);
  v13 = v14;
  IsFullscreenRect = anonymous_namespace_::IsFullscreenRect(&v16, &v13);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)v9 || v7 )
  {
    v11 = "yes";
    v12 = DWORD1(v14);
    LOBYTE(v12) = v7;
    if ( !IsFullscreenRect )
      v11 = "no";
    WPP_RECORDER_AND_TRACE_SF_sdddddddd(WPP_GLOBAL_Control->AttachedDevice, v9, v12, (_DWORD)v11);
  }
  return IsFullscreenRect;
}
