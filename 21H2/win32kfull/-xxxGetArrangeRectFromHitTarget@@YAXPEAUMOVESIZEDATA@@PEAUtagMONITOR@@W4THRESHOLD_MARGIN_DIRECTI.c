/*
 * XREFs of ?xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020CCA4
 * Callers:
 *     ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334 (-xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtag.c)
 *     ?xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@KAEBUtagRECT@@PEAK@Z @ 0x1C020D59C (-xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUt.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 */

int __fastcall xxxGetArrangeRectFromHitTarget(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // edi
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  int v23; // r8d
  int v24; // eax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  int v28; // ecx
  int v29; // eax
  int v31[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

  if ( a3 == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v32 = 0LL;
  LODWORD(v6) = xxxGetArrangeRectFromShell(a1, a2, a3, &v32);
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        19,
        4,
        1,
        19,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
    }
    v32 = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)&v32, a2, *(const struct tagWND **)(a1 + 16));
    if ( a3 == 1 )
    {
      DWORD2(v32) = v32 + (DWORD2(v32) - (int)v32) / 2;
    }
    else if ( a3 == 2 )
    {
      LODWORD(v32) = DWORD2(v32) - (DWORD2(v32) - (int)v32) / 2;
    }
    v6 = WindowMargins::ExtendRect(v31, *(struct tagWND **)(a1 + 16), &v32);
    v32 = *(_OWORD *)v6;
    if ( a3 )
    {
      v9 = a3 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          goto LABEL_53;
        v10 = *(_DWORD *)(a1 + 112);
        v11 = v10;
        v12 = *(_DWORD *)(a1 + 104);
        if ( v10 >= DWORD2(v32) - (int)v32 )
          v11 = DWORD2(v32) - v32;
        if ( v12 <= v11 )
        {
          v12 = DWORD2(v32) - v32;
          if ( v10 < DWORD2(v32) - (int)v32 )
            v12 = *(_DWORD *)(a1 + 112);
        }
        v13 = *(_DWORD *)(a1 + 116);
        v14 = DWORD2(v32) - v12;
        v15 = v13;
        v16 = *(_DWORD *)(a1 + 108);
        LODWORD(v32) = v14;
        if ( v13 >= HIDWORD(v32) - DWORD1(v32) )
          v15 = HIDWORD(v32) - DWORD1(v32);
        if ( v16 <= v15 )
        {
          v16 = HIDWORD(v32) - DWORD1(v32);
          if ( v13 < HIDWORD(v32) - DWORD1(v32) )
            v16 = v13;
        }
        HIDWORD(v32) = v16 + DWORD1(v32);
        LODWORD(v6) = *(_DWORD *)(a1 + 200) & 0xFFFFFCFF | 0x200;
      }
      else
      {
        v17 = *(_DWORD *)(a1 + 112);
        v18 = v17;
        v19 = *(_DWORD *)(a1 + 104);
        if ( v17 >= DWORD2(v32) - (int)v32 )
          v18 = DWORD2(v32) - v32;
        if ( v19 <= v18 )
        {
          v19 = DWORD2(v32) - v32;
          if ( v17 < DWORD2(v32) - (int)v32 )
            v19 = *(_DWORD *)(a1 + 112);
        }
        v20 = *(_DWORD *)(a1 + 116);
        v21 = *(_DWORD *)(a1 + 108);
        DWORD2(v32) = v19 + v32;
        v22 = v20;
        if ( v20 >= HIDWORD(v32) - DWORD1(v32) )
          v22 = HIDWORD(v32) - DWORD1(v32);
        if ( v21 <= v22 )
        {
          v21 = HIDWORD(v32) - DWORD1(v32);
          if ( v20 < HIDWORD(v32) - DWORD1(v32) )
            v21 = v20;
        }
        HIDWORD(v32) = v21 + DWORD1(v32);
        LODWORD(v6) = *(_DWORD *)(a1 + 200) & 0xFFFFFCFF | 0x100;
      }
      *(_DWORD *)(a1 + 200) = (_DWORD)v6;
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 112);
      v24 = v23;
      v25 = *(_DWORD *)(a1 + 104);
      if ( v23 >= DWORD2(v32) - (int)v32 )
        v24 = DWORD2(v32) - v32;
      if ( v25 <= v24 )
      {
        v25 = DWORD2(v32) - v32;
        if ( v23 < DWORD2(v32) - (int)v32 )
          v25 = *(_DWORD *)(a1 + 112);
      }
      v26 = *(_DWORD *)(a1 + 116);
      v27 = DWORD1(v32);
      v28 = *(_DWORD *)(a1 + 108);
      DWORD2(v32) = v25 + v32;
      v29 = v26;
      if ( v26 >= HIDWORD(v32) - DWORD1(v32) )
        v29 = HIDWORD(v32) - DWORD1(v32);
      if ( v28 <= v29 )
      {
        v28 = HIDWORD(v32) - DWORD1(v32);
        if ( v26 < HIDWORD(v32) - DWORD1(v32) )
          v28 = v26;
      }
      *(_DWORD *)(a1 + 200) &= 0xFFFFFCFF;
      LODWORD(v6) = v28 + v27;
      HIDWORD(v32) = v28 + v27;
    }
  }
LABEL_53:
  if ( (*(_DWORD *)(a1 + 200) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v32;
  else
    *(_OWORD *)(a1 + 40) = v32;
  return (int)v6;
}
