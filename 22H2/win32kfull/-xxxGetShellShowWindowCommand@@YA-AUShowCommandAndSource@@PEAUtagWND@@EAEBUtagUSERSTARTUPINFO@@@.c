/*
 * XREFs of ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0026FA0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00AE74C (_anonymous_namespace_--EligibleWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00C0F08 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C021E20C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1C0224CF8 (-ComputeShowCommandSource@@YA-AW4ShowCommandSource@@H@Z.c)
 */

__int64 __fastcall xxxGetShellShowWindowCommand(__int64 a1, struct tagWND *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebp
  char v9; // di
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // r15
  __int128 v14; // xmm6
  int v15; // edx
  int v16; // r8d
  int v17; // r13d
  __int64 v18; // rax
  void *v19; // rdx
  PDEVICE_OBJECT v20; // r10
  __int16 v21; // ax
  char v22; // r14
  char v23; // al
  int v24; // edx
  char v25; // [rsp+40h] [rbp-D8h]
  __int64 v26; // [rsp+60h] [rbp-B8h] BYREF
  int v27; // [rsp+68h] [rbp-B0h]
  unsigned int v28; // [rsp+70h] [rbp-A8h]
  int v29; // [rsp+74h] [rbp-A4h]
  __int128 v30; // [rsp+78h] [rbp-A0h]

  v4 = *((_QWORD *)a2 + 3);
  v6 = a3;
  if ( !*(_QWORD *)(v4 + 328)
    || (v9 = 1, (*(_DWORD *)(v4 + 336) & 1) == 0)
    || !(unsigned __int8)anonymous_namespace_::EligibleWindow(a2) )
  {
    if ( (_BYTE)v6 == 21 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 396LL);
    *(_DWORD *)a1 = 0;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a4 + 20) & 0x20000) != 0 )
  {
    v13 = *(_BYTE *)(a4 + 24);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)gFullLog,
        4,
        12,
        21,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        *(_QWORD *)a2,
        *(_WORD *)(a4 + 24));
    if ( ((v13 - 1) & 0xFD) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (_DWORD)gFullLog,
          4,
          12,
          22,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          v13);
      }
      *((_DWORD *)a2 + 80) |= 2u;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 4) = v13;
      goto LABEL_7;
    }
  }
  v14 = 0LL;
  v17 = ComputeShowCommandSource(v6, v11, v12, &WPP_GLOBAL_Control);
  if ( v17 != 4 )
  {
    if ( !v17 )
    {
LABEL_96:
      *(_DWORD *)a1 = v17;
      *(_BYTE *)(a1 + 4) = v6;
      *(_WORD *)(a1 + 5) = 0;
      *(_BYTE *)(a1 + 7) = 0;
      *(_OWORD *)(a1 + 8) = v14;
      return a1;
    }
LABEL_88:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = 29;
      LOBYTE(v24) = v9;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v24,
        v16,
        0,
        4,
        12,
        29,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        *(_QWORD *)a2);
    }
    *((_DWORD *)a2 + 80) |= 2u;
    goto LABEL_96;
  }
  LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      (_DWORD)gFullLog,
      4,
      12,
      23,
      (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
      v6);
  }
  memset_0(&v26, 0, 0x68uLL);
  v18 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 80) |= 0x200u;
  v26 = v18;
  v27 = 1;
  v28 = v6;
  if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v26, 0LL) )
  {
    v22 = v29;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v19,
        v16,
        (_DWORD)gFullLog,
        4,
        12,
        25,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        v29);
    }
    if ( (v22 & 0xF) != 0 )
    {
      switch ( v22 & 0xF )
      {
        case 1:
          LOBYTE(v6) = -1;
          break;
        case 2:
          v23 = 17;
          if ( (_BYTE)v6 != 8 )
            v23 = 3;
          LOBYTE(v6) = v23;
          break;
        case 3:
          v14 = v30;
          LOBYTE(v6) = 21;
          break;
        default:
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v9 = 0;
          }
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_46;
          v19 = &WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids;
          v25 = v6;
          v21 = 26;
          goto LABEL_45;
      }
    }
    if ( (v22 & 0x10) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v19,
          v16,
          27,
          4,
          12,
          27,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          *(_QWORD *)a2);
      }
      *((_DWORD *)a2 + 80) |= 4u;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v19,
          v16,
          28,
          4,
          12,
          28,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          *(_QWORD *)a2);
      }
      *((_DWORD *)a2 + 80) &= ~4u;
    }
    goto LABEL_88;
  }
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v9 = 0;
  }
  LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_46;
  v25 = v6;
  v21 = 24;
LABEL_45:
  LOBYTE(v19) = v9;
  WPP_RECORDER_AND_TRACE_SF_d(
    v20->AttachedDevice,
    (_DWORD)v19,
    v16,
    (_DWORD)gFullLog,
    3,
    12,
    v21,
    (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
    v25);
LABEL_46:
  *(_DWORD *)a1 = 0;
LABEL_6:
  *(_BYTE *)(a1 + 4) = v6;
LABEL_7:
  *(_OWORD *)(a1 + 5) = 0LL;
  *(_WORD *)(a1 + 21) = 0;
  *(_BYTE *)(a1 + 23) = 0;
  return a1;
}
