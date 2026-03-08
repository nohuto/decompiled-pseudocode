/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     CalcWindowFullScreen @ 0x1C006789C (CalcWindowFullScreen.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0068140 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0097B28 (_anonymous_namespace_--EligibleWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C00CE1A4 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ShouldHaveShadow @ 0x1C00E512C (ShouldHaveShadow.c)
 *     xxxRemoveShadow @ 0x1C00EBAE0 (xxxRemoveShadow.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00EC8F0 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00FA9C0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C02209E0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C0220B74 (_anonymous_namespace_--WindowSizingUpdate.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0224188 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C02246CC (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C022482C (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1)
{
  int v1; // r15d
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rbx
  struct tagSHADOW *j; // rax
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  struct tagWND **Shadow; // rax
  struct tagRECT v22; // xmm0
  __int64 v23; // rcx
  bool v24; // r8
  struct tagRECT v25; // [rsp+50h] [rbp-68h] BYREF
  __int128 i; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+70h] [rbp-48h]
  __int64 v28; // [rsp+C8h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 7) - 1;
  v2 = (_QWORD *)*((_QWORD *)a1 + 5);
  v27 = 0LL;
  for ( i = 0LL; v1 >= 0; --v1 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v4 < *(_QWORD *)(gpsi + 8LL)
        && ((v5 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v4,
             v8 = (__int64 *)HMPkheFromPhe(v5),
             LOWORD(v4) = WORD1(v4) & 0x7FFF,
             (WORD1(v4) & 0x7FFF) == *(_WORD *)(v5 + 26))
         || (_WORD)v4 == 0x7FFF
         || !(_WORD)v4 && PsGetCurrentProcessWow64Process(v7))
        && (*(_BYTE *)(v5 + 25) & 1) == 0
        && *(_BYTE *)(v5 + 24) == 1
        && (v9 = *v8) != 0 )
      {
        v10 = v2[1];
        if ( v10 < 2 || v10 == -2LL || v10 == -1LL || (LOBYTE(v6) = 1, HMValidateHandleNoSecure(v10, v6)) )
        {
          v11 = *((_DWORD *)v2 + 8);
          if ( (v11 & 0x40000) != 0 || (v2[4] & 0x18E7) == 0x1807 )
          {
            if ( (v11 & 0x10000) != 0 && (*(_DWORD *)(v9 + 320) & 0x200) != 0 )
              PostIAMShellHookMessage(31LL, *v2);
          }
          else
          {
            ThreadLockAlways(v9, &i);
            if ( (*((_DWORD *)v2 + 8) & 0x80u) != 0 )
              xxxRemoveShadow(v9);
            v12 = *((_DWORD *)v2 + 8);
            if ( (v12 & 0x40) != 0 )
            {
              if ( (unsigned int)ShouldHaveShadow(v9) )
                xxxAddShadow((struct tagWND *)v9);
              v13 = v9;
            }
            else
            {
              v13 = v9;
              if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x10) != 0 )
              {
                for ( j = gpshadowFirst; j; j = (struct tagSHADOW *)*((_QWORD *)j + 2) )
                {
                  if ( *(_QWORD *)j == v9 )
                  {
                    if ( (v12 & 0x21) == 1 )
                    {
                      if ( (v12 & 2) == 0 )
                        zzzMoveShadow(v9);
                    }
                    else
                    {
                      Shadow = (struct tagWND **)FindShadow((struct tagWND *)v9);
                      if ( Shadow )
                        zzzApplyShadow(*Shadow, Shadow[1]);
                    }
                    if ( (v2[4] & 4) == 0 )
                      xxxUpdateShadowZorder(v9);
                    break;
                  }
                }
              }
            }
            v15 = v2[4] & 0x9820;
            if ( (unsigned int)IsWindowDesktopComposed(v13) && v15 != 6144 )
            {
              DwmChildRectChange((struct tagWND *)v13);
              DirtyVisRgnTrackers(v13);
            }
            if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v13 + 16) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout((struct tagWND *)v13, 0x47u, 0, 0, 0LL, 1, 0);
            }
            else
            {
              if ( !tagQ::IsSingleThreadAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                goto LABEL_51;
              v20 = *(_QWORD *)(gptiCurrent + 1440LL);
              if ( !v20 )
                goto LABEL_51;
              if ( *(_QWORD *)(v20 + 16) == gptiCurrent )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 424LL);
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1440LL) + 16LL) != *(_QWORD *)(v13 + 16) )
              {
LABEL_51:
                v28 = 0LL;
                xxxSendTransformableMessageTimeout((struct tagWND *)v13, 0x47u, 2, 100, (__int64)&v28, 1, 0);
              }
            }
            if ( (*((_DWORD *)v2 + 39) & 0x40) != 0 )
            {
              if ( (v2[4] & 0x80000) != 0 )
                v22 = *(struct tagRECT *)(*(_QWORD *)(v13 + 40) + 88LL);
              else
                v22 = *(struct tagRECT *)(v2 + 17);
              v23 = v2[16];
              v25 = v22;
              ValidateHmonitorNoRip(v23);
              xxxNotifyMonitorChanged((struct tagWND *)v13, &v25, (struct tagBWL *)v2[20]);
            }
            if ( (v2[4] & 0x10000) != 0 && (*(_DWORD *)(v13 + 320) & 0x200) != 0 )
              PostIAMShellHookMessage(31LL, *v2);
            if ( (*((_DWORD *)v2 + 8) & 0x80u) != 0 )
              NotifyShell::CuratedWindowHidden(v13);
            if ( (v2[4] & 0x1100C0) == 0
              && (v2[4] & 3) != 3
              && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0x10) != 0
              && !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v13) )
            {
              v16 = *(_QWORD *)(v13 + 24);
              if ( *(_QWORD *)(v16 + 320)
                && (*(_DWORD *)(v16 + 328) & 0x10) != 0
                && (unsigned __int8)anonymous_namespace_::EligibleWindow((struct tagWND *)v13) )
              {
                NotifyShell::TrackedWindowPosChanged((NotifyShell *)v13, 0LL, v24);
              }
              if ( IsShellParticipatesInSizing((struct tagWND *)v13) )
                anonymous_namespace_::WindowSizingUpdate(v13);
            }
            CalcWindowFullScreen((struct tagWND *)v13);
            if ( v15 != 6144 )
              xxxWindowEvent(0x800Bu, (struct tagWND *)v13, 0, 0, 1);
            ThreadUnlock1(v18, v17, v19);
          }
          goto LABEL_39;
        }
      }
      else
      {
        *((_DWORD *)v2 + 8) = 6159;
      }
      *v2 = 0LL;
    }
LABEL_39:
    v2 += 21;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
