/*
 * XREFs of ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010
 * Callers:
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0025464 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C0065CE8 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00EC2A0 (NtUserSetWindowCompositionAttribute.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     xxxAddShadow @ 0x1C0221654 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C0221AA0 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     NextOwnedWindow @ 0x1C00952AC (NextOwnedWindow.c)
 *     FVisCountable @ 0x1C00A1A50 (FVisCountable.c)
 *     WindowHasShadow @ 0x1C00A3870 (WindowHasShadow.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00C2A50 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00C2A80 (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00C609C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00CCCF4 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00F0FD8 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0220294 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C0221AA0 (zzzCloakShadow.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C02265BC (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2,
        unsigned int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  const struct tagWND *v8; // rbp
  __int64 v9; // rsi
  int CloakFlags; // r15d
  int v11; // r14d
  __int64 Prop; // rax
  struct tagWND *OwnedWindow; // rbx
  struct tagWND *v14; // rcx
  struct tagWND *v15; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  BOOL v21; // eax
  struct CRecalcProp *v22; // rax
  __int64 v23; // r9
  int v24; // edx
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v26; // r9
  _QWORD *v27; // rbx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  char v32; // dl
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *i; // rbx
  struct CRecalcProp *v35; // rax
  __int64 v36; // r9
  char v37; // dl
  char v38; // dl
  _DWORD v39[16]; // [rsp+70h] [rbp-88h] BYREF

  memset_0(v39, 0, sizeof(v39));
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( a2 )
    LOBYTE(v9) = *(_DWORD *)a2 != 0;
  else
    LOBYTE(v9) = a3 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v39, v6, v7) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v39);
    if ( ((_DWORD)v9 || !a2) && a3 == CloakFlags )
    {
      v11 = 0;
      v9 = (unsigned int)v9;
      goto LABEL_8;
    }
    if ( a2 )
    {
      v18 = v39[0];
      if ( (a3 & 1) != 0 )
      {
        v18 = ((_DWORD)v9 << 10) | v39[0] & 0xFFFFFBFF;
        v39[0] = v18;
      }
      if ( (a3 & 2) == 0 )
        goto LABEL_25;
      v19 = v18 & 0xFFFFF7FF;
      v20 = (_DWORD)v9 << 11;
    }
    else
    {
      v19 = ((a3 & 1) << 10) | ((a3 & 2) << 10);
      v20 = v39[0] & 0xFFFFF3FF;
    }
    v18 = v20 | v19;
    v39[0] = v18;
LABEL_25:
    if ( (v18 & 0x800) == 0 )
      *((_DWORD *)a1 + 80) |= 0x800u;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v39) )
    {
      v11 = -1073741801;
LABEL_15:
      zzzEndDeferWinEventNotify();
      return (unsigned int)v11;
    }
    v21 = (v18 & 0x400) != 0 || (v18 & 0x800) != 0;
    if ( (CloakFlags == 0) == v21 )
    {
      v11 = _DwmAsyncSetCompositionAttribute((__int64)a1);
      if ( (unsigned int)WindowHasShadow(a1) )
        zzzCloakShadow(a1, (unsigned int)v9);
      if ( (unsigned int)FVisCountable((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        v27 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 424LL);
        v28 = *((_DWORD *)v27 + 259);
        v29 = *((_DWORD *)v27 + 258);
        if ( (_DWORD)v9 )
        {
          v30 = v28 + 1;
          *((_DWORD *)v27 + 259) = v30;
          if ( v29 <= v30 && (v27[102] & 0x4000) != 0 )
          {
            PsUpdateComponentPower(*v27, 5LL);
            GreDxgkSetProcessStatus(v27, 2LL);
            *((_DWORD *)v27 + 204) &= ~0x4000u;
          }
        }
        else
        {
          v31 = v28 - 1;
          *((_DWORD *)v27 + 259) = v31;
          if ( v29 > v31 && (v27[102] & 0x4000) == 0 )
          {
            GreDxgkSetProcessStatus(v27, 2LL);
            PsUpdateComponentPower(*v27, 5LL);
            *((_DWORD *)v27 + 204) |= 0x4000u;
          }
        }
      }
      v24 = 1;
      if ( gdwDeferWinEvent )
        v24 = 3;
      xxxWindowEvent((v9 ^ 1) + 32791, a1, 0, 0, v24);
      if ( !(_DWORD)v9 && !CRecalcState::ShouldDeferRecalc((__int64)a1, 2) )
      {
        RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
        if ( RecalcProperty )
        {
          if ( *((_DWORD *)RecalcProperty + 6) == 1 )
          {
            v32 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v32,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                v26,
                4u,
                7u,
                0x48u,
                (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
                *(_QWORD *)a1);
            CRecalcProp::s_PostRecalcForWindow(a1);
          }
        }
      }
    }
    else
    {
      v11 = 0;
    }
    v9 = (unsigned int)v9;
    if ( v11 < 0 )
      goto LABEL_15;
LABEL_8:
    Prop = GetProp(a1, CoreWindowProp::s_atom, 1LL);
    if ( !Prop )
      goto LABEL_9;
    if ( *(_DWORD *)(Prop + 24) )
    {
      while ( 1 )
      {
        NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, v8);
        v8 = NextComponentWindow;
        if ( !NextComponentWindow )
          break;
        for ( i = (struct tagWND *)NextOwnedWindow(0LL, NextComponentWindow, *((_QWORD *)NextComponentWindow + 13));
              i;
              i = (struct tagWND *)NextOwnedWindow(i, a1, *((_QWORD *)a1 + 13)) )
        {
          v11 = zzzSetWindowCompositionCloak(i, a2, a3);
          if ( v11 < 0 )
            break;
          if ( !v9 && !CRecalcState::ShouldDeferRecalc((__int64)a1, 2) )
          {
            v35 = CRecalcProp::GetRecalcProperty(a1);
            if ( v35 )
            {
              if ( *((_DWORD *)v35 + 6) == 1 )
              {
                v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_q(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v37,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    v36,
                    4u,
                    7u,
                    0x48u,
                    (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
                    *(_QWORD *)a1);
                CRecalcProp::s_PostRecalcForWindow(a1);
              }
            }
          }
        }
      }
    }
    if ( v11 >= 0 )
    {
LABEL_9:
      OwnedWindow = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
      if ( OwnedWindow )
      {
        do
        {
          v14 = (struct tagWND *)*((_QWORD *)OwnedWindow + 15);
          v15 = OwnedWindow;
          if ( OwnedWindow != v14 )
          {
            v15 = (struct tagWND *)*((_QWORD *)OwnedWindow + 15);
            if ( v14 )
            {
              do
              {
                v17 = *((_QWORD *)v15 + 13);
                if ( v17 == *((_QWORD *)OwnedWindow + 13) )
                  break;
                v15 = (struct tagWND *)*((_QWORD *)v15 + 13);
              }
              while ( v17 );
            }
          }
          if ( a1 == v15 )
            break;
          OwnedWindow = (struct tagWND *)*((_QWORD *)OwnedWindow + 11);
        }
        while ( OwnedWindow );
        for ( ; OwnedWindow; OwnedWindow = (struct tagWND *)NextOwnedWindow(OwnedWindow, a1, *((_QWORD *)a1 + 13)) )
        {
          v11 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
          if ( v11 < 0 )
            break;
          if ( !v9 && !CRecalcState::ShouldDeferRecalc((__int64)a1, 2) )
          {
            v22 = CRecalcProp::GetRecalcProperty(a1);
            if ( v22 )
            {
              if ( *((_DWORD *)v22 + 6) == 1 )
              {
                v38 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_q(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v38,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    v23,
                    4u,
                    7u,
                    0x48u,
                    (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
                    *(_QWORD *)a1);
                CRecalcProp::s_PostRecalcForWindow(a1);
              }
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  return 3221225480LL;
}
