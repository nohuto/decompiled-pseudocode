__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS v3; // ebx
  ULONG64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v6; // xmm0_8
  int v7; // r14d
  size_t v8; // r8
  __int64 v9; // rsi
  char v10; // r12
  __int64 v11; // rax
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  struct tagWND *v14; // rdi
  int v15; // edx
  __int64 v16; // r8
  __int64 DesktopWindow; // rax
  bool v18; // sf
  ULONG v19; // eax
  NTSTATUS active; // eax
  unsigned int v22; // r15d
  const struct tagWND *v23; // rcx
  struct tagWND *Host; // rax
  _UNKNOWN **v25; // rdx
  struct tagRECT v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h]
  int v28; // [rsp+78h] [rbp-90h]
  __m128i v29; // [rsp+90h] [rbp-78h]
  SIZE_T v30; // [rsp+A0h] [rbp-68h]
  __m128i v31; // [rsp+A8h] [rbp-60h]
  __m128i v32; // [rsp+B8h] [rbp-50h]
  SIZE_T Length; // [rsp+C8h] [rbp-40h]

  v3 = -1073741811;
  v28 = -1073741811;
  v29 = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v31 = *a2;
  v32 = v31;
  Length = a2[1].m128i_u64[0];
  v29 = v31;
  v30 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v31, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  v7 = v31.m128i_i32[0];
  if ( (unsigned int)(v31.m128i_i32[0] - 1) <= 0x1F )
  {
    v8 = qword_1C03186D8[2 * v32.m128i_i32[0]];
    if ( (unsigned int)Length >= v8 )
    {
      memmove(&v26, (const void *)v6, v8);
      v9 = 0LL;
      v3 = 0;
      v28 = 0;
      goto LABEL_9;
    }
    v3 = -1073741789;
    v28 = -1073741789;
  }
  v9 = 0LL;
LABEL_9:
  if ( v3 < 0 )
  {
LABEL_19:
    v19 = RtlNtStatusToDosError(v3);
    UserSetLastError(v19);
    v18 = v3 < 0;
    goto LABEL_20;
  }
  v10 = 1;
  EnterCrit(1LL, 0LL);
  v11 = ValidateHwndIAMComponetUIAware(a1);
  v14 = (struct tagWND *)v11;
  if ( !v11 )
    goto LABEL_17;
  if ( v7 != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v11)
    || (v12 = (PDEVICE_OBJECT)*((_QWORD *)v14 + 5), HIDWORD(v12->Dpc.DeferredContext) == 15) )
  {
    v15 = 0;
    v16 = *((_QWORD *)v14 + 13);
    if ( v16 )
    {
      DesktopWindow = GetDesktopWindow(v14, 0LL);
      if ( v16 == DesktopWindow )
        v15 = 1;
    }
    if ( v15 || v7 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v14) )
    {
      if ( v7 <= 16 )
      {
        if ( v7 == 16 )
        {
          active = SetWindowCompositionDisallowPeek(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
          goto LABEL_28;
        }
        if ( v7 <= 8 )
        {
          if ( v7 != 8 && v7 != 1 )
          {
            switch ( v7 )
            {
              case 2:
                active = SetWindowCompositionNCRenderPolicy(
                           v14,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
                goto LABEL_28;
              case 3:
                active = SetWindowCompositionTransitions(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
                goto LABEL_28;
              case 4:
                active = SetWindowCompositionAllowNCPaint(
                           v14,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
                goto LABEL_28;
            }
            if ( v7 != 5 )
            {
              if ( v7 == 6 )
              {
                active = SetWindowCompositionNonClientRTLLayout(
                           v14,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
                goto LABEL_28;
              }
              if ( v7 == 7 )
              {
                active = SetWindowCompositionForceIconicSWR(
                           v14,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
                goto LABEL_28;
              }
            }
          }
          goto LABEL_100;
        }
        if ( v7 != 9 )
        {
          if ( v7 == 10 )
          {
            active = _DwmAsyncSetCompositionAttribute((__int64)v14);
            goto LABEL_28;
          }
          if ( v7 == 11 )
          {
            active = SetWindowCompositionNCRenderingExiled(
                       v14,
                       (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          }
          if ( v7 != 12 )
          {
            if ( v7 == 13 )
            {
              active = SetWindowCompositionExcludeFromLivePreview(
                         v14,
                         (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
              goto LABEL_28;
            }
            if ( v7 == 15 )
            {
              active = SetWindowCompositionForceActiveWindowAppearance(
                         v14,
                         (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
              goto LABEL_28;
            }
          }
          goto LABEL_100;
        }
LABEL_54:
        active = SetWindowCompositionHasIconicBitmap(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
        goto LABEL_28;
      }
      if ( v7 > 26 )
      {
        switch ( v7 )
        {
          case 27:
            active = SetWindowMinimizeAnimation(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 28:
            active = SetWindowMaximizeAnimation(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 29:
            active = SetWindowDisableMoveSizeFeedback(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 30:
            active = SetWindowCompositionSystemBackdropType(
                       v14,
                       (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 31:
            active = _DwmAsyncSetTaggedWindowRect(v14, &v26);
            goto LABEL_28;
          case 32:
            active = _DwmAsyncClearTaggedWindowRect(v14);
            goto LABEL_28;
        }
        goto LABEL_100;
      }
      if ( v7 == 26 )
      {
        active = SetWindowCompositionDarkModeColors(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
        goto LABEL_28;
      }
      if ( v7 != 18 )
      {
        switch ( v7 )
        {
          case 19:
            active = SetWindowCompositionAccentPolicy(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 20:
            SetWindowCompositionFreezeSWR(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_54;
          case 22:
            active = SetWindowCompositionVisualOwner(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 23:
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              active = SetWindowCompositionHolographic(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
              goto LABEL_28;
            }
            v3 = -1073741790;
            goto LABEL_18;
          case 24:
            active = SetWindowCompositionExcludedFromDDA(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
          case 25:
            active = SetWindowCompositionPassiveUpdateMode(
                       v14,
                       (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26);
            goto LABEL_28;
        }
      }
LABEL_100:
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v10 = 0;
      }
      v25 = &WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = v10;
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sdq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v25, v16, v13);
      }
      goto LABEL_79;
    }
LABEL_17:
    v3 = -1073741816;
    goto LABEL_18;
  }
  v22 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v22 = 2;
  }
  else
  {
    v12 = *(PDEVICE_OBJECT *)(gptiCurrent + 424LL);
    if ( *(PDEVICE_OBJECT *)(*((_QWORD *)v14 + 2) + 424LL) == v12
      && ((HIDWORD(v12[2].Queue.Wcb.CurrentIrp) & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v14))
      || (unsigned int)CoreWindowProp::IsComponent(v14)
      && (Host = CoreWindowProp::GetHost(v14)) != 0LL
      && (v12 = (PDEVICE_OBJECT)*((_QWORD *)Host + 2),
          v12[1].Queue.ListEntry.Blink == *(struct _LIST_ENTRY **)(gptiCurrent + 424LL)) )
    {
      v22 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !v26.left )
    {
      v23 = (const struct tagWND *)*((_QWORD *)v14 + 15);
      if ( v23 )
      {
        if ( (GetWindowCloakState(v23) & v22) != 0 )
        {
LABEL_79:
          v3 = -1073741811;
          goto LABEL_18;
        }
      }
    }
    active = zzzSetWindowCompositionCloak(v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v26, v22);
LABEL_28:
    v3 = active;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v12);
  v18 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_19;
LABEL_20:
  LOBYTE(v9) = !v18;
  return v9;
}
