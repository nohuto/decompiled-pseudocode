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
