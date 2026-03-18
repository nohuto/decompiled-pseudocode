/*
 * XREFs of NtUserShellSetWindowPos @ 0x1C01DE090
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndIAM @ 0x1C00270A4 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C0092F94 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     LeaveEditionCrit @ 0x1C00BE2E0 (LeaveEditionCrit.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1C01E3478 (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C021D598 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 */

__int64 __fastcall NtUserShellSetWindowPos(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4, int a5, int a6)
{
  __int64 v8; // r14
  char v10; // di
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  int v16; // ebx
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  PDEVICE_OBJECT v22; // rcx
  char v23; // r8
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r13
  PDEVICE_OBJECT v28; // rcx
  char v29; // r8
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rax
  unsigned __int8 v37; // r9
  int v38; // edx
  int v39; // r8d
  __int64 v40; // r9
  PDEVICE_OBJECT v41; // rcx
  char v42; // r8
  unsigned __int16 v43; // ax
  int v44; // r9d
  int v45; // edx
  PDEVICE_OBJECT v46; // rcx
  __int16 v47; // ax
  char v48; // al
  PDEVICE_OBJECT v49; // rcx
  __int16 v50; // ax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v56; // [rsp+40h] [rbp-78h]
  _BYTE v57[31]; // [rsp+61h] [rbp-57h] BYREF
  _OWORD v58[3]; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v60; // [rsp+D8h] [rbp+20h]

  v60 = a4;
  v8 = a2;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v57);
  v58[0] = 0LL;
  LOBYTE(v11) = IAMThreadAccessGranted(gptiCurrent);
  v16 = 0;
  if ( v11 )
  {
    if ( (a5 & 0xFFFFFFC0) != 0 )
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v24 = 34;
      v56 = a5;
      goto LABEL_20;
    }
    if ( a4 > 3 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0xCu,
          0x23u,
          (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
          a4);
      goto LABEL_21;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 2 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v18 = 36;
      goto LABEL_9;
    }
    v25 = ValidateHwndIAM(a1);
    v27 = v25;
    if ( !v25 )
    {
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v30 = 37;
      goto LABEL_46;
    }
    if ( !IsTopLevelWindow(v25) )
    {
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v30 = 38;
      goto LABEL_46;
    }
    if ( *(_QWORD *)(v27 + 16) == gptiCurrent )
    {
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v30 = 39;
LABEL_46:
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)v28->AttachedDevice,
        v10,
        v29,
        v26,
        2u,
        0xCu,
        v30,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
        a1);
      goto LABEL_21;
    }
    if ( v8 )
    {
      v31 = ValidateHwndIAM(v8);
      if ( !v31 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v33,
            2u,
            0xCu,
            0x28u,
            (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
            a2);
        goto LABEL_21;
      }
      v34 = *(_QWORD *)(v31 + 40);
      v35 = *(_DWORD *)(v34 + 236);
      v36 = *(_QWORD *)(v27 + 40);
      if ( *(_DWORD *)(v36 + 236) != v35 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v35) = v10;
          LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdqd(WPP_GLOBAL_Control->AttachedDevice, v35, v32, (_DWORD)gFullLog);
        }
        goto LABEL_10;
      }
      v37 = *(_BYTE *)(v36 + 24);
      if ( ((v37 ^ *(_BYTE *)(v34 + 24)) & 8) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = v37 & 8;
          LOBYTE(v38) = v10;
          LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdqd(WPP_GLOBAL_Control->AttachedDevice, v38, v32, (_DWORD)gFullLog);
        }
        goto LABEL_21;
      }
    }
    if ( IsHungWindow((const struct tagTHREADINFO **)v27) )
    {
      v41 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v43 = 43;
LABEL_97:
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)v41->AttachedDevice,
        v10,
        v42,
        v40,
        2u,
        0xCu,
        v43,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
        a1);
LABEL_98:
      v19 = 5023;
      goto LABEL_11;
    }
    if ( **(_WORD **)(*(_QWORD *)(v27 + 136) + 8LL) == *(_WORD *)(gpsi + 900LL) )
    {
      v41 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v43 = 44;
      goto LABEL_97;
    }
    v44 = a5;
    v45 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 && v8 )
    {
      v46 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v47 = 45;
      goto LABEL_116;
    }
    v48 = 0;
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_OWORD *)MmUserProbeAddress;
      v58[0] = *a3;
      v48 = 1;
    }
    if ( v48 )
      goto LABEL_152;
    if ( (a5 & 0xC) != 0 )
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v24 = 47;
      v56 = a5;
LABEL_20:
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)v22->AttachedDevice,
        v10,
        v23,
        (__int64)gFullLog,
        2u,
        0xCu,
        v24,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
        v56);
LABEL_21:
      v19 = 87;
      goto LABEL_11;
    }
    if ( v60 != 3 )
    {
LABEL_152:
      v51 = ShellWindowPos::PositionWindowAsync(v27, v8, v58, v60, v44, a6) - 1;
      if ( !v51 )
      {
        v19 = 14;
        goto LABEL_11;
      }
      if ( v51 != 1 )
      {
        v16 = 1;
        goto LABEL_171;
      }
      goto LABEL_98;
    }
    if ( (a5 & 0x10) != 0 )
    {
      v49 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v45) = 0;
      }
      LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v45 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_149;
      v50 = 48;
    }
    else
    {
      if ( !v8 )
      {
        v46 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v47 = 50;
        goto LABEL_116;
      }
      v49 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v45) = 0;
      }
      LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v45 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_149:
        if ( (*(_BYTE *)(*(_QWORD *)(v27 + 40) + 31LL) & 0x20) != 0 )
        {
          v60 = 0;
LABEL_151:
          v8 = a2;
          goto LABEL_152;
        }
        if ( IsSemiMaximized((const struct tagWND *)v27) )
          goto LABEL_151;
        v46 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v47 = 51;
LABEL_116:
        LOBYTE(v45) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          v46->AttachedDevice,
          v45,
          v39,
          v44,
          2,
          12,
          v47,
          (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
        goto LABEL_21;
      }
      v50 = 49;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v49->AttachedDevice,
      v45,
      v39,
      a5,
      4,
      12,
      v50,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    v44 = a5;
    goto LABEL_149;
  }
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
  v18 = 33;
LABEL_9:
  LOBYTE(v12) = v10;
  WPP_RECORDER_AND_TRACE_SF_(
    v17->AttachedDevice,
    v12,
    v14,
    v15,
    2,
    12,
    v18,
    (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
LABEL_10:
  v19 = 5;
LABEL_11:
  UserSetLastError(v19);
LABEL_171:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v57, v20, v21);
  LeaveEditionCrit((__int64)v57, v52, v53, v54);
  return v16;
}
