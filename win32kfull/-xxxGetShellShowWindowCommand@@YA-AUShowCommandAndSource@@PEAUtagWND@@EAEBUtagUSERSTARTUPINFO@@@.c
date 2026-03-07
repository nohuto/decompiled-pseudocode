__int64 __fastcall xxxGetShellShowWindowCommand(__int64 a1, struct tagWND *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebp
  char v9; // di
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r15d
  char v14; // dl
  __int128 v15; // xmm6
  int v16; // r8d
  int v17; // r13d
  char v18; // dl
  __int64 v19; // rax
  int v20; // edx
  char v21; // r14
  char v22; // al
  int v23; // edx
  __int64 v24; // [rsp+40h] [rbp-D8h]
  __int64 v25; // [rsp+60h] [rbp-B8h] BYREF
  int v26; // [rsp+68h] [rbp-B0h]
  unsigned int v27; // [rsp+70h] [rbp-A8h]
  int v28; // [rsp+74h] [rbp-A4h]
  __int128 v29; // [rsp+78h] [rbp-A0h]

  v4 = *((_QWORD *)a2 + 3);
  v6 = a3;
  if ( !*(_QWORD *)(v4 + 320)
    || (v9 = 1, (*(_DWORD *)(v4 + 328) & 1) == 0)
    || !(unsigned __int8)anonymous_namespace_::EligibleWindow(a2) )
  {
    if ( (_BYTE)v6 == 21 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 396LL);
    *(_DWORD *)a1 = 0;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a4 + 20) & 0x20000) != 0 )
  {
    v13 = *(unsigned __int8 *)(a4 + 24);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
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
        22,
        21,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
        *(_QWORD *)a2,
        *(_WORD *)(a4 + 24));
    if ( (((_BYTE)v13 - 1) & 0xFD) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          0x16u,
          0x16u,
          (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
          v24);
      }
      *((_DWORD *)a2 + 80) |= 2u;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 4) = v13;
      goto LABEL_7;
    }
  }
  v15 = 0LL;
  v17 = ComputeShowCommandSource(v6, v11, v12, &WPP_GLOBAL_Control);
  if ( v17 != 4 )
  {
    if ( !v17 )
    {
LABEL_95:
      *(_DWORD *)a1 = v17;
      *(_BYTE *)(a1 + 4) = v6;
      *(_WORD *)(a1 + 5) = 0;
      *(_BYTE *)(a1 + 7) = 0;
      *(_OWORD *)(a1 + 8) = v15;
      return a1;
    }
LABEL_87:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 29;
      LOBYTE(v23) = v9;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        v16,
        0,
        4,
        22,
        29,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
        *(_QWORD *)a2);
    }
    *((_DWORD *)a2 + 80) |= 2u;
    goto LABEL_95;
  }
  v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v18,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x16u,
      0x17u,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      v24);
  }
  memset_0(&v25, 0, 0x68uLL);
  v19 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 80) |= 0x200u;
  v25 = v19;
  v26 = 1;
  v27 = v6;
  if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v25, 0LL) )
  {
    v21 = v28;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v20) = 0;
    }
    if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v16,
        (_DWORD)gFullLog,
        4,
        22,
        25,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
        v28);
    }
    if ( (v21 & 0xF) != 0 )
    {
      switch ( v21 & 0xF )
      {
        case 1:
          LOBYTE(v6) = -1;
          break;
        case 2:
          v22 = 17;
          if ( (_BYTE)v6 != 8 )
            v22 = 3;
          LOBYTE(v6) = v22;
          break;
        case 3:
          v15 = v29;
          LOBYTE(v6) = 21;
          break;
        default:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v9 = 0;
          }
          if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = v6;
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v9,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              3u,
              0x16u,
              0x1Au,
              (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
              v24);
          }
          goto LABEL_45;
      }
    }
    if ( (v21 & 0x10) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v16,
          27,
          4,
          22,
          27,
          (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
          *(_QWORD *)a2);
      }
      *((_DWORD *)a2 + 80) |= 4u;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v16,
          28,
          4,
          22,
          28,
          (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
          *(_QWORD *)a2);
      }
      *((_DWORD *)a2 + 80) &= ~4u;
    }
    goto LABEL_87;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      3u,
      0x16u,
      0x18u,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      v24);
  }
LABEL_45:
  *(_DWORD *)a1 = 0;
LABEL_6:
  *(_BYTE *)(a1 + 4) = v6;
LABEL_7:
  *(_OWORD *)(a1 + 5) = 0LL;
  *(_WORD *)(a1 + 21) = 0;
  *(_BYTE *)(a1 + 23) = 0;
  return a1;
}
