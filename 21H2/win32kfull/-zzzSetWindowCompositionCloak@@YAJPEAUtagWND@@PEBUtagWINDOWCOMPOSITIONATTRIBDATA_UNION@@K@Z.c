/*
 * XREFs of ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC
 * Callers:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0080F68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00F4EEC (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C0239924 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     WindowHasShadow @ 0x1C001F374 (WindowHasShadow.c)
 *     FVisCountable @ 0x1C00201C0 (FVisCountable.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080C74 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     NextOwnedWindow @ 0x1C0082124 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0082174 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00821E0 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z @ 0x1C0082214 (-OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0238D64 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C0239924 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(
        struct tagWND *this,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2,
        unsigned int a3)
{
  int v6; // ebx
  unsigned int v7; // esi
  int v8; // r9d
  unsigned int CloakFlags; // r15d
  __int64 v10; // r15
  struct tagWND *j; // rcx
  struct tagWND *v12; // rax
  struct tagWND *v13; // rsi
  struct tagWND *v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  BOOL v20; // eax
  int v21; // edx
  struct tagWND *v22; // rdx
  _QWORD *v23; // r14
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  const struct tagWND *v28; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v30; // r8
  struct tagWND *v31; // rdx
  struct tagWND *i; // rcx
  struct tagWND *v33; // rdx
  struct tagWND *OwnedWindow; // rax
  struct tagWND *v35; // r14
  _DWORD v36[16]; // [rsp+50h] [rbp-29h] BYREF

  v6 = -1073741816;
  memset(v36, 0, sizeof(v36));
  v7 = 0;
  if ( a2 )
    LOBYTE(v7) = *(_DWORD *)a2 != 0;
  else
    LOBYTE(v7) = a3 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(this, (struct WINDOWCOMPOSITIONINFO *)v36) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v36);
    if ( (v7 || !a2) && a3 == CloakFlags )
    {
      v6 = 0;
      v10 = v7;
      goto LABEL_8;
    }
    v16 = v8 & a3;
    if ( a2 )
    {
      v17 = v36[0];
      if ( v16 )
      {
        v17 = (v7 << 10) | v36[0] & 0xFFFFFBFF;
        v36[0] = v17;
      }
      if ( (a3 & 2) == 0 )
        goto LABEL_24;
      v18 = v17 & 0xFFFFF7FF;
      v19 = v7 << 11;
    }
    else
    {
      v18 = ((v16 & 0xFFFFFFFD) << 10) | ((a3 & 2) << 10);
      v19 = v36[0] & 0xFFFFF3FF;
    }
    v17 = v19 | v18;
    v36[0] = v17;
LABEL_24:
    if ( !__CFSHR__(v17, 12) )
      *((_DWORD *)this + 80) |= 0x800u;
    if ( !(unsigned int)SetWindowCompositionInfo(this, (const struct WINDOWCOMPOSITIONINFO *)v36) )
    {
      v6 = -1073741801;
LABEL_11:
      zzzEndDeferWinEventNotify();
      return (unsigned int)v6;
    }
    v20 = (v17 & 0x400) != 0 || __CFSHR__(v17, 12);
    if ( (CloakFlags == 0) == v20 )
    {
      v6 = _DwmAsyncSetCompositionAttribute((__int64)this);
      if ( (unsigned int)WindowHasShadow(this) )
        zzzCloakShadow(this, v7);
      if ( FVisCountable((__int64)this) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0 )
      {
        v23 = *(_QWORD **)(*((_QWORD *)this + 2) + 424LL);
        v24 = *((_DWORD *)v23 + 257);
        v25 = *((_DWORD *)v23 + 256);
        if ( v7 )
        {
          v26 = v24 + 1;
          *((_DWORD *)v23 + 257) = v26;
          if ( v25 <= v26 && _bittest((const signed __int32 *)v23 + 205, 0xEu) )
          {
            PsUpdateComponentPower(*v23, 5LL);
            GreDxgkSetProcessStatus(v23, 2LL);
            *((_DWORD *)v23 + 205) &= ~0x4000u;
          }
        }
        else
        {
          v27 = v24 - 1;
          *((_DWORD *)v23 + 257) = v27;
          if ( v25 > v27 && (*((_DWORD *)v23 + 205) & 0x4000) == 0 )
          {
            GreDxgkSetProcessStatus(v23, 2LL);
            PsUpdateComponentPower(*v23, 5LL);
            *((_DWORD *)v23 + 205) |= 0x4000u;
          }
        }
      }
      v21 = 3;
      if ( !gdwDeferWinEvent )
        v21 = 1;
      xxxWindowEvent((v7 ^ 1) + 32791, this, 0, 0, v21);
      if ( !v7 )
        DesktopRecalc::OnWindowUncloak(this, v22);
    }
    else
    {
      v6 = 0;
    }
    v10 = v7;
    if ( v6 < 0 )
      goto LABEL_11;
LABEL_8:
    if ( !(unsigned int)CoreWindowProp::IsHost(this) )
      goto LABEL_9;
    v28 = 0LL;
    while ( 1 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(this, v28);
      v28 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      v30 = *((_QWORD *)NextComponentWindow + 13);
      v31 = NextComponentWindow;
      for ( i = 0LL; ; i = v35 )
      {
        OwnedWindow = (struct tagWND *)NextOwnedWindow(i, v31, v30);
        v35 = OwnedWindow;
        if ( !OwnedWindow )
          break;
        v6 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
        if ( v6 < 0 )
          break;
        if ( !v10 )
          DesktopRecalc::OnWindowUncloak(this, v33);
        v30 = *((_QWORD *)this + 13);
        v31 = this;
      }
    }
    if ( v6 >= 0 )
    {
LABEL_9:
      for ( j = 0LL; ; j = v13 )
      {
        v12 = (struct tagWND *)NextOwnedWindow(j, this, *((_QWORD *)this + 13));
        v13 = v12;
        if ( !v12 )
          break;
        v6 = zzzSetWindowCompositionCloak(v12, a2, a3);
        if ( v6 < 0 )
          break;
        if ( !v10 )
          DesktopRecalc::OnWindowUncloak(this, v15);
      }
    }
    goto LABEL_11;
  }
  return (unsigned int)v6;
}
