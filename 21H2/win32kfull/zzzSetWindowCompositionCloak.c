/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C0036D90
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzImeSetFutureOwner @ 0x1C0034044 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0035BC4 (zzzImeSetOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037AA0 (NtUserSetWindowCompositionAttribute.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C023E210 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0007CCC (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C003714C (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003719C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00371D0 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C0037554 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00379B0 (DwmAsyncSetCompositionAttribute.c)
 *     FVisCountable @ 0x1C004C070 (FVisCountable.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DF44 (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     WindowHasShadow @ 0x1C00BC1B4 (WindowHasShadow.c)
 *     zzzCloakShadow @ 0x1C023E210 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v7; // ebx
  int v8; // r9d
  unsigned int CloakFlags; // r15d
  __int64 j; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  BOOL v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r14
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  const struct tagWND *v28; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v30; // r8
  struct tagWND *v31; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v34; // r14
  _OWORD v35[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+68h] [rbp-8h]

  v3 = 0;
  v36 = 0LL;
  v7 = -1073741816;
  memset(v35, 0, sizeof(v35));
  if ( a2 )
    LOBYTE(v3) = *a2 != 0;
  else
    LOBYTE(v3) = a3 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v35) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v35);
    if ( (v3 || !a2) && a3 == CloakFlags )
    {
      v7 = 0;
LABEL_8:
      if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
      {
        v28 = 0LL;
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v28);
          v28 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          v30 = *((_QWORD *)NextComponentWindow + 13);
          v31 = NextComponentWindow;
          for ( i = 0LL; ; i = v34 )
          {
            OwnedWindow = NextOwnedWindow(i, v31, v30);
            v34 = OwnedWindow;
            if ( !OwnedWindow )
              break;
            v7 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
            if ( v7 < 0 )
              break;
            v30 = *(_QWORD *)(a1 + 104);
            v31 = (struct tagWND *)a1;
          }
        }
      }
      if ( v7 >= 0 )
      {
        for ( j = 0LL; ; j = v12 )
        {
          v11 = NextOwnedWindow(j, a1, *(_QWORD *)(a1 + 104));
          v12 = v11;
          if ( !v11 )
            break;
          v7 = zzzSetWindowCompositionCloak(v11, a2, a3);
          if ( v7 < 0 )
            break;
        }
      }
LABEL_12:
      zzzEndDeferWinEventNotify();
      return (unsigned int)v7;
    }
    v14 = v8 & a3;
    if ( a2 )
    {
      v15 = v35[0];
      if ( v14 )
      {
        v15 = (v3 << 10) | v35[0] & 0xFFFFFBFF;
        LODWORD(v35[0]) = v15;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_20:
        if ( !__CFSHR__(v15, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, v35) )
        {
          v18 = (v15 & 0x400) != 0 || __CFSHR__(v15, 12);
          if ( (CloakFlags == 0) == v18 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v21 = (void *)ReferenceDwmApiPort(v20, v19);
              v7 = DwmAsyncSetCompositionAttribute(v21);
            }
            else
            {
              v7 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v3);
            if ( (unsigned int)FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
              v24 = *(_DWORD *)(v23 + 1028);
              v25 = *(_DWORD *)(v23 + 1024);
              if ( v3 )
              {
                v27 = v24 + 1;
                *(_DWORD *)(v23 + 1028) = v27;
                if ( v25 <= v27 && (*(_DWORD *)(v23 + 820) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v23, 5LL);
                  GreDxgkSetProcessStatus(v23, 2LL);
                  *(_DWORD *)(v23 + 820) &= ~0x4000u;
                }
              }
              else
              {
                v26 = v24 - 1;
                *(_DWORD *)(v23 + 1028) = v26;
                if ( v25 > v26 && (*(_DWORD *)(v23 + 820) & 0x4000) == 0 )
                {
                  GreDxgkSetProcessStatus(v23, 2LL);
                  PsUpdateComponentPower(*(_QWORD *)v23, 5LL);
                  *(_DWORD *)(v23 + 820) |= 0x4000u;
                }
              }
            }
            v22 = 3;
            if ( !gdwDeferWinEvent )
              v22 = 1;
            xxxWindowEvent((v3 ^ 1) + 32791, v22);
          }
          else
          {
            v7 = 0;
          }
        }
        else
        {
          v7 = -1073741801;
        }
        if ( v7 < 0 )
          goto LABEL_12;
        goto LABEL_8;
      }
      v16 = v15 & 0xFFFFF7FF;
      v17 = v3 << 11;
    }
    else
    {
      v16 = ((v14 & 0xFFFFFFFD) << 10) | ((a3 & 2) << 10);
      v17 = v35[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    LODWORD(v35[0]) = v15;
    goto LABEL_20;
  }
  return (unsigned int)v7;
}
