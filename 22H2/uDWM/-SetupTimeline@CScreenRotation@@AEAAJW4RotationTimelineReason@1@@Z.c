/*
 * XREFs of ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800ACF54
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800ACAD0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800AD23C (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000C8E8 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025114 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180040C7C (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800AC534 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenRotation::SetupTimeline(__int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // ecx
  _QWORD *v6; // r8
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  char v10; // al
  void *v11; // rdx
  CWindowList *v12; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v15; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-20h] BYREF

  CScreenRotation::CleanupTimeline((CScreenRotation *)a1);
  v15 = (struct _GUID)xmmword_1800CD418;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v4 )
  {
    v5 = 100;
    if ( a2 != 1 )
      v5 = 400;
    CTimelineBase::CTimelineBase(v4, (float)((float)v5 / 1000.0), 0.0, 1.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 296) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFCu);
    return v7;
  }
  *(_DWORD *)(a1 + 304) = a2;
  v8 = CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x100u);
    return v7;
  }
  v10 = *(_BYTE *)(a1 + 380);
  *(_BYTE *)(a1 + 288) = 1;
  if ( a2 == 1 )
  {
    if ( v10 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v11 = &UdwmHardwareExpression_Delay_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v11 = &UdwmScreenRotation_Delay_Start;
    }
  }
  else if ( v10 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_23;
    v11 = &UdwmHardwareExpression_HintDelay_Start;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_23;
    v11 = &UdwmScreenRotation_HintDelay_Start;
  }
  McGenEventWrite_EtwEventWriteTransfer(
    Microsoft_Windows_Dwm_Udwm_Provider_Context,
    (__int64)v11,
    v9,
    1LL,
    (__int64)v16);
LABEL_23:
  QueryPerformanceCounter(&PerformanceCount);
  if ( (int)CWindowList::BeginTelemetryScenario(v12, &v15, PerformanceCount.QuadPart) >= 0 )
    (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                     + 5)
                                                                                   + 16LL)
                                                                     + 216LL))(
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
      &v15,
      a1 | 0xD100000000000000uLL);
  return v7;
}
