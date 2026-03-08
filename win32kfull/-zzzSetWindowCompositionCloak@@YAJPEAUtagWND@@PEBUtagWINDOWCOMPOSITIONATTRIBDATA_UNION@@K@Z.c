/*
 * XREFs of ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920
 * Callers:
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0026E94 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C02247B0 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0027E28 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     WindowHasShadow @ 0x1C002A3D0 (WindowHasShadow.c)
 *     NextOwnedWindow @ 0x1C002B764 (NextOwnedWindow.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C002DAB8 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     FVisCountable @ 0x1C002E5C0 (FVisCountable.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C002EEE0 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00FCC9C (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00FCCCC (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0222FA4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C02247B0 (zzzCloakShadow.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C02292BC (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2,
        unsigned int a3)
{
  const struct tagWND *v6; // rbp
  __int64 v7; // rsi
  unsigned int CloakFlags; // r15d
  int v9; // r14d
  __int64 Prop; // rax
  unsigned __int64 v11; // rcx
  struct tagWND *OwnedWindow; // rbx
  struct tagWND *j; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // eax
  struct CRecalcProp *v19; // rax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  struct CRecalcProp *RecalcProperty; // rax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  _QWORD *v28; // rbx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *i; // rbx
  struct CRecalcProp *v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // r9d
  _DWORD v39[16]; // [rsp+70h] [rbp-88h] BYREF

  memset_0(v39, 0, sizeof(v39));
  v6 = 0LL;
  LODWORD(v7) = 0;
  if ( a2 )
    LOBYTE(v7) = *(_DWORD *)a2 != 0;
  else
    LOBYTE(v7) = a3 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v39) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v39);
    if ( ((_DWORD)v7 || !a2) && a3 == CloakFlags )
    {
      v9 = 0;
      v7 = (unsigned int)v7;
      goto LABEL_8;
    }
    if ( a2 )
    {
      v15 = v39[0];
      if ( (a3 & 1) != 0 )
      {
        v15 = ((_DWORD)v7 << 10) | v39[0] & 0xFFFFFBFF;
        v39[0] = v15;
      }
      if ( (a3 & 2) == 0 )
        goto LABEL_25;
      v16 = v15 & 0xFFFFF7FF;
      v17 = (_DWORD)v7 << 11;
    }
    else
    {
      v16 = ((a3 & 1) << 10) | ((a3 & 2) << 10);
      v17 = v39[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    v39[0] = v15;
LABEL_25:
    if ( (v15 & 0x800) == 0 )
      *((_DWORD *)a1 + 80) |= 0x800u;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v39) )
    {
      v9 = -1073741801;
LABEL_15:
      zzzEndDeferWinEventNotify(v11);
      return (unsigned int)v9;
    }
    v11 = CloakFlags == 0;
    v18 = (v15 & 0x400) != 0 || (v15 & 0x800) != 0;
    if ( (_DWORD)v11 == v18 )
    {
      v9 = _DwmAsyncSetCompositionAttribute((__int64)a1);
      if ( (unsigned int)WindowHasShadow(a1) )
        zzzCloakShadow(a1, (unsigned int)v7);
      if ( (unsigned int)FVisCountable((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        v28 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 424LL);
        v29 = *((_DWORD *)v28 + 253);
        v30 = *((_DWORD *)v28 + 252);
        if ( (_DWORD)v7 )
        {
          v31 = v29 + 1;
          *((_DWORD *)v28 + 253) = v31;
          if ( v30 <= v31 && (*((_DWORD *)v28 + 203) & 0x4000) != 0 )
          {
            PsUpdateComponentPower(*v28, 5LL);
            GreDxgkSetProcessStatus(v28, 2LL);
            *((_DWORD *)v28 + 203) &= ~0x4000u;
          }
        }
        else
        {
          v32 = v29 - 1;
          *((_DWORD *)v28 + 253) = v32;
          if ( v30 > v32 && (*((_DWORD *)v28 + 203) & 0x4000) == 0 )
          {
            GreDxgkSetProcessStatus(v28, 2LL);
            PsUpdateComponentPower(*v28, 5LL);
            *((_DWORD *)v28 + 203) |= 0x4000u;
          }
        }
      }
      v23 = 1;
      if ( gdwDeferWinEvent )
        v23 = 3;
      xxxWindowEvent((v7 ^ 1) + 32791, v23);
      if ( !(_DWORD)v7 && !(unsigned __int8)CRecalcState::ShouldDeferRecalc(a1, 2LL) )
      {
        RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
        if ( RecalcProperty )
        {
          if ( *((_DWORD *)RecalcProperty + 6) == 1 )
          {
            LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v25,
                v26,
                v27,
                4,
                23,
                72,
                (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
                *(_QWORD *)a1);
            }
            CRecalcProp::s_PostRecalcForWindow(a1);
          }
        }
      }
    }
    else
    {
      v9 = 0;
    }
    v7 = (unsigned int)v7;
    if ( v9 < 0 )
      goto LABEL_15;
LABEL_8:
    Prop = GetProp(a1, CoreWindowProp::s_atom, 1LL);
    if ( !Prop )
      goto LABEL_9;
    if ( *(_DWORD *)(Prop + 24) )
    {
      while ( 1 )
      {
        NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, v6);
        v6 = NextComponentWindow;
        if ( !NextComponentWindow )
          break;
        for ( i = (struct tagWND *)NextOwnedWindow(0LL, NextComponentWindow, *((_QWORD *)NextComponentWindow + 13));
              i;
              i = (struct tagWND *)NextOwnedWindow(i, a1, *((_QWORD *)a1 + 13)) )
        {
          v9 = zzzSetWindowCompositionCloak(i, a2, a3);
          if ( v9 < 0 )
            break;
          if ( !v7 && !(unsigned __int8)CRecalcState::ShouldDeferRecalc(a1, 2LL) )
          {
            v35 = CRecalcProp::GetRecalcProperty(a1);
            if ( v35 )
            {
              if ( *((_DWORD *)v35 + 6) == 1 )
              {
                LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v36,
                    v37,
                    v38,
                    4,
                    23,
                    72,
                    (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
                    *(_QWORD *)a1);
                }
                CRecalcProp::s_PostRecalcForWindow(a1);
              }
            }
          }
        }
      }
    }
    if ( v9 >= 0 )
    {
LABEL_9:
      OwnedWindow = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
      if ( OwnedWindow )
      {
        do
        {
          v11 = *((_QWORD *)OwnedWindow + 15);
          j = OwnedWindow;
          if ( OwnedWindow != (struct tagWND *)v11 )
          {
            for ( j = (struct tagWND *)*((_QWORD *)OwnedWindow + 15); v11; j = (struct tagWND *)*((_QWORD *)j + 13) )
            {
              v11 = *((_QWORD *)j + 13);
              if ( v11 == *((_QWORD *)OwnedWindow + 13) )
                break;
            }
          }
          if ( a1 == j )
            break;
          OwnedWindow = (struct tagWND *)*((_QWORD *)OwnedWindow + 11);
        }
        while ( OwnedWindow );
        for ( ; OwnedWindow; OwnedWindow = (struct tagWND *)NextOwnedWindow(OwnedWindow, a1, *((_QWORD *)a1 + 13)) )
        {
          v9 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
          if ( v9 < 0 )
            break;
          if ( !v7 && !(unsigned __int8)CRecalcState::ShouldDeferRecalc(a1, 2LL) )
          {
            v19 = CRecalcProp::GetRecalcProperty(a1);
            if ( v19 )
            {
              if ( *((_DWORD *)v19 + 6) == 1 )
              {
                LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v20,
                    v21,
                    v22,
                    4,
                    23,
                    72,
                    (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
                    *(_QWORD *)a1);
                }
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
