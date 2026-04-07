/*
 * XREFs of ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800ACAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800AC840 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800ACF54 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD2AC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnAnimationComplete(CScreenRotation *this, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  void *v6; // rdx
  CScreenRotation *v7; // rcx
  int v8; // eax
  int v9; // eax
  void *v10; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v13[16]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 != *((_DWORD *)this + 19) )
  {
    if ( a2 != *((_DWORD *)this + 20) )
      goto LABEL_22;
    if ( *((_BYTE *)this + 100) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v10 = &UdwmHardwareExpression_PostDelayAnimation_Stop;
LABEL_20:
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v10,
          v5,
          1LL,
          (__int64)v13);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = &UdwmScreenRotation_PostDelayAnimation_Stop;
      goto LABEL_20;
    }
    CScreenRotation::Stop((CScreenRotation *)((char *)this - 280), 0);
    goto LABEL_22;
  }
  *((_DWORD *)this + 19) = -1;
  if ( *((_BYTE *)this + 100) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v6 = &UdwmHardwareExpression_PreDelayAnimation_Stop;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v6 = &UdwmScreenRotation_PreDelayAnimation_Stop;
  }
  McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, (__int64)v6, v5, 1LL, (__int64)v13);
LABEL_8:
  v7 = (CScreenRotation *)((char *)this - 280);
  if ( *((_BYTE *)this + 49) )
  {
    v8 = CScreenRotation::MidDelayExpired(v7);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x139u);
  }
  else
  {
    v9 = CScreenRotation::SetupTimeline(v7, 2LL);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x13Du);
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v4;
}
