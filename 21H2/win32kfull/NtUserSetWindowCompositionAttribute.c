/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C0022C50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0004FF0 (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C00231A8 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080BB8 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080C74 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00903C4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010E0F0 (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010F8C4 (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010F9D8 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01106AC (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C011333C (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0113EF0 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C011559C (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C015BFA0 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C015C04C (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C016D7FC (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C02129E4 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212AA4 (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212B64 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212C28 (-SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212CE8 (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212DAC (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212F30 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212FE0 (-SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C02130BC (-SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMargins@@YAJPEAUtagWND@@AEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0235D04 (-SetWindowMargins@@YAJPEAUtagWND@@AEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238D30 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS v3; // edi
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v5; // xmm0_8
  size_t v6; // r8
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  int v11; // ebx
  unsigned int v12; // r15d
  struct tagWND *Host; // rax
  const struct tagWND *v14; // rcx
  NTSTATUS updated; // eax
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  bool v32; // sf
  ULONG v33; // eax
  __int128 v35; // [rsp+20h] [rbp-98h] BYREF
  __int64 v36; // [rsp+30h] [rbp-88h]
  int v37; // [rsp+38h] [rbp-80h]
  __m128i v38; // [rsp+50h] [rbp-68h]
  SIZE_T v39; // [rsp+60h] [rbp-58h]
  __m128i v40; // [rsp+68h] [rbp-50h]
  __m128i v41; // [rsp+80h] [rbp-38h]
  SIZE_T Length; // [rsp+90h] [rbp-28h]

  v3 = -1073741811;
  v37 = -1073741811;
  v38 = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || (unsigned __int64)&a2[1].m128i_u64[1] > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v40 = *a2;
  v41 = v40;
  Length = a2[1].m128i_u64[0];
  v38 = v40;
  v39 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  v5 = (volatile void *)_mm_srli_si128(v40, 8).m128i_u64[0];
  ProbeForRead(v5, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v40.m128i_i32[0] - 1) <= 0x1D )
  {
    v6 = qword_1C02ED3A8[2 * v40.m128i_i32[0]];
    if ( (unsigned int)Length >= v6 )
    {
      memmove(&v35, (const void *)v5, v6);
      v7 = 0LL;
      v3 = 0;
      v37 = 0;
      goto LABEL_9;
    }
    v3 = -1073741789;
    v37 = -1073741789;
  }
  v7 = 0LL;
LABEL_9:
  if ( v3 < 0 )
  {
LABEL_89:
    v33 = RtlNtStatusToDosError(v3);
    UserSetLastError(v33);
    v32 = v3 < 0;
    goto LABEL_90;
  }
  EnterCrit(1LL, 0LL);
  v8 = ValidateHwndIAMComponetUIAware(a1);
  v10 = (struct tagWND *)v8;
  if ( !v8 )
    goto LABEL_87;
  v11 = v38.m128i_i32[0];
  if ( v38.m128i_i32[0] != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v8)
    || *(_DWORD *)(*((_QWORD *)v10 + 5) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v10) || v11 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v10) )
    {
      if ( v11 > 16 )
      {
        if ( v11 > 25 )
        {
          v28 = v11 - 26;
          if ( !v28 )
          {
            updated = SetWindowCompositionDarkModeColors(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            updated = SetWindowMinimizeAnimation(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
            updated = SetWindowMaximizeAnimation(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          v31 = v30 - 1;
          if ( !v31 )
          {
            updated = SetWindowDisableMoveSizeFeedback(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          if ( v31 == 1 )
          {
            updated = SetWindowCompositionSystemBackdropType(
                        v10,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          goto LABEL_49;
        }
        if ( v11 == 25 )
        {
          updated = SetWindowCompositionPassiveUpdateMode(
                      v10,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
          goto LABEL_86;
        }
        v24 = v11 - 19;
        if ( !v24 )
        {
          updated = SetWindowCompositionAccentPolicy(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
          goto LABEL_86;
        }
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 2;
          if ( !v26 )
          {
            updated = SetWindowCompositionVisualOwner(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              updated = SetWindowCompositionExcludedFromDDA(
                          v10,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
            goto LABEL_49;
          }
          if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
          {
            updated = SetWindowCompositionHolographic(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          goto LABEL_47;
        }
        SetWindowCompositionFreezeSWR(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
      }
      else
      {
        if ( v11 == 16 )
        {
          updated = SetWindowCompositionDisallowPeek(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
          goto LABEL_86;
        }
        if ( v11 <= 8 )
        {
          if ( v11 != 8 )
          {
            v16 = v11 - 2;
            if ( !v16 )
            {
              updated = SetWindowCompositionNCRenderPolicy(
                          v10,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
            v17 = v16 - 1;
            if ( !v17 )
            {
              updated = SetWindowCompositionTransitions(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
            v18 = v17 - 1;
            if ( !v18 )
            {
              updated = SetWindowCompositionAllowNCPaint(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
            v19 = v18 - 2;
            if ( !v19 )
            {
              updated = SetWindowCompositionNonClientRTLLayout(
                          v10,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
            if ( v19 == 1 )
            {
              updated = SetWindowCompositionForceIconicSWR(
                          v10,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
LABEL_49:
            v3 = -1073741811;
            goto LABEL_88;
          }
          if ( (unsigned int)IsProcessDwm(**(_QWORD **)(gptiCurrent + 424LL)) )
          {
            if ( (unsigned int)IsTopLevelWindow(v10) )
            {
              updated = SetWindowMargins(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_86;
            }
            goto LABEL_49;
          }
LABEL_47:
          v3 = -1073741790;
          goto LABEL_88;
        }
        v20 = v11 - 9;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            updated = _DwmAsyncSetCompositionAttribute(v10, 10LL, &v35);
            goto LABEL_86;
          }
          v22 = v21 - 1;
          if ( !v22 )
          {
            updated = SetWindowCompositionNCRenderingExiled(
                        v10,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          v23 = v22 - 2;
          if ( !v23 )
          {
            updated = SetWindowCompositionExcludeFromLivePreview(
                        v10,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          if ( v23 == 2 )
          {
            updated = SetWindowCompositionForceActiveWindowAppearance(
                        v10,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_86;
          }
          goto LABEL_49;
        }
      }
      updated = SetWindowCompositionHasIconicBitmap(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
      goto LABEL_86;
    }
LABEL_87:
    v3 = -1073741816;
    goto LABEL_88;
  }
  v12 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v12 = 2;
  }
  else
  {
    v9 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL) == v9
      && ((*(_DWORD *)(v9 + 820) & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v10))
      || (unsigned int)CoreWindowProp::IsComponent(v10)
      && (Host = CoreWindowProp::GetHost(v10)) != 0LL
      && (v9 = *((_QWORD *)Host + 2), *(_QWORD *)(v9 + 424) == *(_QWORD *)(gptiCurrent + 424LL)) )
    {
      v12 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( (_DWORD)v35
      || (v14 = (const struct tagWND *)*((_QWORD *)v10 + 15)) == 0LL
      || (GetWindowCloakState(v14) & v12) == 0 )
    {
      updated = zzzSetWindowCompositionCloak(v10, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35, v12);
LABEL_86:
      v3 = updated;
      goto LABEL_88;
    }
    goto LABEL_49;
  }
LABEL_88:
  UserSessionSwitchLeaveCrit(v9);
  v32 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_89;
LABEL_90:
  LOBYTE(v7) = !v32;
  return v7;
}
