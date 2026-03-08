/*
 * XREFs of ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00FC970
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00FAA8C (DesktopWindowFromDesktop.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage @ 0x1C012F280 (Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DesktopRecalc::xxxProcessRecalcForThread(DesktopRecalc *this)
{
  ShellWindowManagement *v1; // r9
  bool v2; // al
  char v3; // bl
  ShellWindowManagement *v4; // r10
  __int64 v5; // r11
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagBWL *v11; // rsi
  int v12; // edx
  HWND *i; // rdi
  int IsEnabledDeviceUsage; // eax
  char v15; // cl
  _BYTE v16[4]; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+44h] [rbp-3Ch]
  int v18; // [rsp+48h] [rbp-38h]
  char v19; // [rsp+4Ch] [rbp-34h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+64h] [rbp-1Ch]
  char v23; // [rsp+68h] [rbp-18h]

  DesktopWindowFromDesktop(*(_QWORD *)(gptiCurrent + 456LL));
  v2 = ShellWindowManagement::BehaviorEnabled(v1, (const struct tagDESKTOP *)0x20);
  v3 = 1;
  v6 = BuildHwndList(v4, 32 * v2 + 2, v5, 1);
  v11 = v6;
  if ( v6 )
  {
    for ( i = (HWND *)((char *)v6 + 32); *i != (HWND)1; ++i )
    {
      v17 = 0;
      v18 = 0;
      v21 = 0;
      v22 = 0;
      v20 = 0LL;
      v16[0] = 0;
      v19 = 0;
      v23 = 0;
      IsEnabledDeviceUsage = Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage(v8, v7, v9, v10);
      v15 = v23;
      if ( IsEnabledDeviceUsage )
        v15 = 1;
      v23 = v15;
      CRecalcProp::s_xxxProcessTopologyChange(*i, (struct CRecalcContext *)v16);
    }
    FreeHwndList(v11);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 88;
      LOBYTE(v12) = v3;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v9,
        v10,
        2,
        23,
        88,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    }
  }
}
