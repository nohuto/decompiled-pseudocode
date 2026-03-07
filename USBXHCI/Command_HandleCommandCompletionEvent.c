__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  bool v3; // zf
  char v6; // r13
  __int64 **result; // rax
  __int64 v8; // rcx
  __int64 **v9; // rdx
  int v10; // r9d
  __int64 *v11; // r15
  __int64 *v12; // rdi
  _UNKNOWN **v13; // r8
  int v14; // edx
  __int64 v15; // rsi
  void *v16; // r10
  int v17; // ecx
  __int64 **v18; // rcx
  __int64 ****v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 ***v24; // rdi
  int v25; // r8d
  __int64 *v26; // rdi
  __int64 *v27; // rax
  __int64 v28; // rcx
  void (__fastcall *v29)(__int64, __int64 *); // rax
  __int64 v30; // rcx
  int v31; // edx
  int v32; // [rsp+20h] [rbp-40h]
  __int64 *v33; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v34; // [rsp+58h] [rbp-8h]

  v2 = 0;
  v3 = *(_BYTE *)(a2 + 11) == 24;
  v34 = &v33;
  v6 = 0;
  v33 = (__int64 *)&v33;
  if ( v3 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  if ( KeGetCurrentIrql() == 2 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v8 + 601) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v8);
      v6 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v11 = (__int64 *)(a1 + 80);
  v12 = *(__int64 **)(a1 + 80);
  v13 = &WPP_RECORDER_INITIALIZED;
  if ( v12 != (__int64 *)(a1 + 80) )
  {
    v9 = *(__int64 ***)a2;
    while ( 1 )
    {
      v15 = XilCommand_GetCommandRingBufferLogicalAddress(a1, v9, v13) + 16LL * *((unsigned int *)v12 + 5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v13 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), v14, 0, v10, v32, (char)v12, v15, v14);
          v16 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v14) = 5;
          WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 16), v14, 7, 45, (__int64)v16, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 40));
        }
        v13 = &WPP_RECORDER_INITIALIZED;
      }
      v9 = *(__int64 ***)a2;
      if ( *(_QWORD *)a2 == v15 )
        break;
      v12 = (__int64 *)*v12;
      if ( v12 == v11 )
        goto LABEL_23;
    }
    *((_DWORD *)v12 + 4) = 2;
    *((_BYTE *)v12 + 60) = *(_BYTE *)(a2 + 11);
    *((_DWORD *)v12 + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
    if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
      *((_BYTE *)v12 + 61) = *(_BYTE *)(a2 + 15);
    if ( (*((_BYTE *)v12 + 62) & 2) != 0 )
      *(_OWORD *)(v12 + 3) = *(_OWORD *)a2;
LABEL_23:
    v2 = 0;
  }
  while ( 1 )
  {
    v24 = (__int64 ***)*v11;
    if ( (__int64 *)*v11 == v11 )
      break;
    if ( *((_DWORD *)v24 + 4) != 2 )
    {
      if ( v33 == (__int64 *)&v33 && !*(_BYTE *)(a1 + 120) )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(a1 + 8),
          0,
          0,
          0x10000,
          (__int64)"Controller completed a command out of order",
          *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
          a2);
        Controller_ReportFatalErrorEx(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL, 0LL, 0LL);
        *(_BYTE *)(a1 + 120) = 1;
      }
      break;
    }
    v17 = *(_DWORD *)(a1 + 44) + 1;
    *(_DWORD *)(a1 + 44) = v17;
    if ( v17 == *(_DWORD *)(a1 + 48) )
    {
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v13 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v9,
          7,
          46,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          v17,
          *(_DWORD *)(a1 + 40));
        v13 = &WPP_RECORDER_INITIALIZED;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v13 )
        WPP_RECORDER_SF_qLLdd(
          *(_QWORD *)(a1 + 16),
          *(unsigned __int8 *)(a2 + 15),
          *(_DWORD *)(a2 + 12) & 1,
          v10,
          v32,
          (char)v24,
          (unsigned __int16)*((_DWORD *)v24 + 9) >> 10,
          *(_BYTE *)(a2 + 11),
          *(_BYTE *)(a2 + 12) & 1,
          *(_BYTE *)(a2 + 15));
    }
    v18 = *v24;
    if ( (*v24)[1] != (__int64 *)v24 || (v19 = (__int64 ****)v24[1], *v19 != v24) )
      __fastfail(3u);
    *v19 = (__int64 ***)v18;
    v18[1] = (__int64 *)v19;
    v20 = v34;
    if ( *v34 != (__int64 *)&v33 )
      __fastfail(3u);
    v24[1] = v34;
    v9 = &v33;
    *v24 = &v33;
    *v20 = v24;
    v21 = (_QWORD *)(a1 + 96);
    v22 = *(_QWORD **)(a1 + 96);
    v34 = (__int64 **)v24;
    if ( v22 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v22[1] != v21 || (v23 = *v22, *(_QWORD **)(*v22 + 8LL) != v22) )
        __fastfail(3u);
      *v21 = v23;
      *(_QWORD *)(v23 + 8) = v21;
      Command_InternalSendCommand(a1, v22);
    }
    v13 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (__int64 *)*v11 == v11 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v9,
          7,
          49,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v9,
          7,
          48,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v6 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  while ( 1 )
  {
    v26 = v33;
    result = &v33;
    if ( v33 == (__int64 *)&v33 )
      break;
    if ( (__int64 **)v33[1] != &v33 || (v27 = (__int64 *)*v33, *(__int64 **)(*v33 + 8) != v33) )
      __fastfail(3u);
    v33 = (__int64 *)*v33;
    v27[1] = (__int64)&v33;
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v28 )
    {
      v29 = *(void (__fastcall **)(__int64, __int64 *))(v28 + 24);
      if ( v29 )
        v29(v28, v26);
    }
    v30 = *((unsigned __int8 *)v26 + 60);
    v31 = *((unsigned __int8 *)v26 + 60) - 1;
    if ( *((_BYTE *)v26 + 60) != 1 )
    {
      if ( *((_BYTE *)v26 + 60) == 25 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_qL(
            *(_QWORD *)(a1 + 16),
            v31,
            7,
            50,
            (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
            (char)v26,
            (unsigned __int8)HIBYTE(*((_WORD *)v26 + 18)) >> 2);
          LOBYTE(v30) = *((_BYTE *)v26 + 60);
        }
        v2 = 2;
      }
      else
      {
        v2 = 1;
      }
    }
    if ( (_BYTE)v30 == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
        McTemplateK0ppb16qu_EtwWriteTransfer(
          v30,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v25,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v26,
          (__int64)(v26 + 3),
          v2,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v30, a1, v26, v2);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v26[5])(v26, v2, a2);
    v2 = 0;
  }
  return result;
}
