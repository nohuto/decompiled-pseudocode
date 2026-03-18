/*
 * XREFs of SnapshotWindowRects @ 0x1C01D31E8
 * Callers:
 *     SnapShotMonitorsAndWindowsRects @ 0x1C01D3060 (SnapShotMonitorsAndWindowsRects.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     DesktopWindowFromDesktop @ 0x1C011812C (DesktopWindowFromDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddsdddd @ 0x1C01D3780 (WPP_RECORDER_AND_TRACE_SF_qddddsdddd.c)
 */

__int64 __fastcall SnapshotWindowRects(__int64 a1, int *a2)
{
  int v2; // edi
  char v3; // r12
  __int64 v4; // rax
  char v5; // bl
  struct tagBWL *v6; // rax
  int v7; // r8d
  int v8; // r9d
  struct tagBWL *v9; // r13
  int v10; // edx
  _QWORD *v11; // r15
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r12
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 TargetInfoAsUlong_low; // rdx
  __int128 *Prop; // rax
  int v23; // edx
  __int128 v24; // xmm0
  bool v25; // zf
  const char *v26; // r9
  int v27; // edx
  int v29; // edx
  int v30; // edx
  int v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+28h] [rbp-90h]
  int v33; // [rsp+30h] [rbp-88h]
  int v34; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+D0h] [rbp+18h]

  v2 = 0;
  v3 = a1;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = 1;
  v6 = BuildHwndList(*(ShellWindowManagement **)(v4 + 112), (const struct tagWND *)2, 0LL, 1);
  v9 = v6;
  if ( !v6 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 29;
      LOBYTE(v10) = v5;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v7,
        v8,
        2,
        23,
        29,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
    }
    return 0LL;
  }
  v11 = (_QWORD *)((char *)v6 + 32);
  v12 = v11;
  if ( *v11 == 1LL )
    goto LABEL_61;
  do
  {
    ++v2;
    ++v12;
  }
  while ( *v12 != 1LL );
  if ( !v2 )
  {
LABEL_61:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 31;
      LOBYTE(v30) = v5;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v7,
        v8,
        4,
        23,
        31,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
        v3);
    }
    goto LABEL_66;
  }
  v36 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL);
  v15 = v36;
  if ( !v36 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 30;
      LOBYTE(v16) = v5;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v13,
        v14,
        2,
        23,
        30,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
    }
LABEL_66:
    FreeHwndList(v9);
    return 0LL;
  }
  v17 = *v11;
  if ( *v11 != 1LL )
  {
    v18 = v36 + 32;
    do
    {
      v19 = HMValidateHandleNoSecure(v17, 1);
      v20 = v19;
      if ( v19
        && *(char *)(*(_QWORD *)(v19 + 40) + 24LL) >= 0
        && IsNonImmersiveBand(v19)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 424LL) + 820LL) & 0x30) != 0x10 )
      {
        TargetInfoAsUlong_low = LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
        *(_QWORD *)(v18 + 8) = *v11;
        *(_OWORD *)(v18 - 32) = *(_OWORD *)(*(_QWORD *)(v20 + 40) + 88LL);
        Prop = (__int128 *)GetProp(v20, TargetInfoAsUlong_low, 1u);
        if ( Prop )
        {
          v24 = *Prop;
          *(_DWORD *)v18 |= 1u;
          *(_OWORD *)(v18 - 16) = v24;
        }
        else
        {
          *(_DWORD *)v18 &= ~1u;
        }
        v14 = *(_DWORD *)v18;
        LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = (v14 & 1) == 0;
          v26 = "has checkpoint";
          if ( v25 )
            v26 = "no checkpoint";
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qddddsdddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v23,
            v13,
            (_DWORD)v26,
            v31,
            v32,
            v33,
            v34,
            v20,
            *(_DWORD *)(v18 - 32),
            *(_DWORD *)(v18 - 28),
            *(_DWORD *)(v18 - 24),
            *(_DWORD *)(v18 - 20),
            (__int64)v26,
            *(_DWORD *)(v18 - 16),
            *(_DWORD *)(v18 - 12),
            *(_DWORD *)(v18 - 8),
            *(_DWORD *)(v18 - 4));
        }
        ++*a2;
        v18 += 48LL;
      }
      v17 = *++v11;
    }
    while ( *v11 != 1LL );
    v15 = v36;
  }
  v27 = *a2;
  if ( !*a2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = 34;
      LOBYTE(v29) = v5;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v29,
        v13,
        v14,
        4,
        23,
        34,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
    }
    Win32FreePool(v15);
    return 0LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = v5;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v13,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      33,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
      *a2);
  }
  return v15;
}
