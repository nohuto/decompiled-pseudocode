/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C00C73CC
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C00C71F0 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C00C77B8 (unsafe_cast_fnid_or_class_to_PSBWND.c)
 *     GetWndSBDisableFlags @ 0x1C00C7848 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C00C7878 (CalcSBStuff.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     CalcSBStuff2 @ 0x1C00C7CF4 (CalcSBStuff2.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage @ 0x1C013CAD8 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage.c)
 *     GetScrollbarObjectIdString @ 0x1C013D950 (GetScrollbarObjectIdString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsls @ 0x1C013D98C (WPP_RECORDER_AND_TRACE_SF_qsls.c)
 *     GetFnidString @ 0x1C013DE70 (GetFnidString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r13d
  PDEVICE_OBJECT v9; // rdi
  char v10; // r14
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdi
  int v16; // r15d
  ULONG_PTR v17; // r10
  int v18; // r9d
  int v19; // edx
  int v20; // r11d
  int v21; // r8d
  char v22; // cl
  ULONG_PTR v23; // rdi
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // edx
  _DWORD *v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  __int128 v34; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v35[16]; // [rsp+78h] [rbp-9h] BYREF
  int v36; // [rsp+88h] [rbp+7h]
  int v37; // [rsp+8Ch] [rbp+Bh]
  int v38; // [rsp+90h] [rbp+Fh]
  int v39; // [rsp+94h] [rbp+13h]
  int v40; // [rsp+9Ch] [rbp+1Bh]
  int v41; // [rsp+A0h] [rbp+1Fh]
  int v42; // [rsp+A8h] [rbp+27h]
  int v43; // [rsp+ACh] [rbp+2Bh]

  memset_0(v35, 0, 0x40uLL);
  if ( *(_DWORD *)a3 != 60 )
    goto LABEL_66;
  v8 = 1;
  if ( (unsigned int)Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage() )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      GetFnidString(BugCheckParameter2, v6, v7);
      GetScrollbarObjectIdString(a2);
      LOBYTE(v11) = v10;
      WPP_RECORDER_AND_TRACE_SF_qsls(v9->AttachedDevice, v11, v12, (_DWORD)gFullLog);
    }
    if ( a2 != -4 && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 233LL) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 457LL);
  }
  v13 = unsafe_cast_fnid_or_class_to_PSBWND(BugCheckParameter2);
  v14 = v13;
  if ( a2 == -4 && !v13 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
  }
  *(_OWORD *)(a3 + 36) = 0LL;
  *(_QWORD *)(a3 + 52) = 0LL;
  if ( a2 == -4 )
  {
    v16 = *(_DWORD *)(v13 + 12);
    v8 = *(_DWORD *)(v13 + 8);
    v34 = 0LL;
    GetRect(BugCheckParameter2, &v34, 17LL);
    CalcSBStuff2(v35, &v34, v14 + 16, *(unsigned int *)(v14 + 8));
    v17 = BugCheckParameter2 + 40;
LABEL_18:
    v18 = v38;
    v19 = v39;
    goto LABEL_19;
  }
  if ( a2 == -5 )
  {
    v23 = BugCheckParameter2 + 40;
    v24 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_BYTE *)(v24 + 30) & 0x20) != 0 )
    {
      LOWORD(v25) = 0;
      if ( (*(_BYTE *)(v24 + 16) & 2) == 0 )
      {
        *(_DWORD *)(a3 + 36) = 0x10000;
        LOWORD(v25) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a3 + 36) |= 0x8000u;
      v25 = *(_DWORD *)(a3 + 36);
    }
    goto LABEL_43;
  }
  if ( a2 != -6 )
  {
LABEL_66:
    UserSetLastError(87LL);
    return 0LL;
  }
  v23 = BugCheckParameter2 + 40;
  v8 = 0;
  v26 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v26 + 30) & 0x10) == 0 )
  {
    *(_DWORD *)(a3 + 36) = 0x8000;
    return 1LL;
  }
  LOWORD(v25) = 0;
  if ( (*(_BYTE *)(v26 + 16) & 4) == 0 )
  {
    *(_DWORD *)(a3 + 36) = 0x10000;
    goto LABEL_52;
  }
LABEL_43:
  if ( (v25 & 0x8000) != 0 )
    return 1LL;
LABEL_52:
  LOBYTE(v16) = GetWndSBDisableFlags(BugCheckParameter2, v8);
  v17 = v23;
  if ( (*(_DWORD *)(a3 + 36) & 0x10000) != 0 )
    goto LABEL_18;
  CalcSBStuff(BugCheckParameter2, v35, v8);
  v17 = v23;
  if ( (*(_BYTE *)(*(_QWORD *)v23 + 26LL) & 0x40) == 0 )
    goto LABEL_18;
  v27 = *(_DWORD *)(*(_QWORD *)v23 + 96LL) - *(_DWORD *)(*(_QWORD *)v23 + 88LL);
  if ( !v8 )
  {
    v18 = v38;
    v21 = v27 - v37;
    v20 = v27 - v36;
    v19 = v39;
    goto LABEL_20;
  }
  v18 = v27 - v39;
  v19 = v27 - v38;
LABEL_19:
  v20 = v37;
  v21 = v36;
LABEL_20:
  if ( (v16 & 1) != 0 )
  {
    *(_DWORD *)(a3 + 40) |= 1u;
    *(_DWORD *)(a3 + 44) |= 1u;
  }
  if ( (v16 & 2) != 0 )
  {
    *(_DWORD *)(a3 + 56) |= 1u;
    *(_DWORD *)(a3 + 52) |= 1u;
  }
  if ( (v16 & 3) == 3 )
    *(_DWORD *)(a3 + 36) |= 1u;
  v22 = *(_BYTE *)(*(_QWORD *)v17 + 22LL);
  if ( (v22 & 0x10) != 0 && (a2 != -5 || (v22 & 0x20) != 0) )
  {
    if ( (v22 & 1) != 0 )
      *(_DWORD *)(a3 + 40) |= 8u;
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 22LL) & 2) != 0 )
      *(_DWORD *)(a3 + 44) |= 8u;
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 22LL) & 4) != 0 )
      *(_DWORD *)(a3 + 52) |= 8u;
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 22LL) & 8) != 0 )
      *(_DWORD *)(a3 + 56) |= 8u;
  }
  if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
  {
    if ( v8 )
    {
      *(_DWORD *)(a3 + 4) = v18;
      *(_DWORD *)(a3 + 8) = v21;
      *(_DWORD *)(a3 + 12) = v19;
      *(_DWORD *)(a3 + 16) = v20;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = v18;
      v18 = v21;
      *(_DWORD *)(a3 + 4) = v21;
      *(_DWORD *)(a3 + 12) = v20;
      *(_DWORD *)(a3 + 16) = v19;
    }
    v28 = *(_DWORD **)v17;
    if ( a2 == -4 )
    {
      v29 = v28[27];
      v30 = v28[26];
    }
    else
    {
      v29 = v28[23];
      v30 = v28[22];
    }
    *(_DWORD *)(a3 + 12) += v30;
    v31 = v30 + v18;
    *(_DWORD *)(a3 + 16) += v29;
    *(_DWORD *)(a3 + 8) += v29;
    v32 = v40;
    v33 = v42;
    *(_DWORD *)(a3 + 4) = v31;
    *(_DWORD *)(a3 + 20) = v32 - v21;
    *(_DWORD *)(a3 + 24) = v43 - v21;
    *(_DWORD *)(a3 + 28) = v33 - v21;
    if ( v43 == v32 )
      *(_DWORD *)(a3 + 44) |= 0x8000u;
    if ( v33 == v41 )
      *(_DWORD *)(a3 + 52) |= 0x8000u;
  }
  return 1LL;
}
