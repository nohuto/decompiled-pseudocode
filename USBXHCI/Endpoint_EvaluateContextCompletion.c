__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  _WORD *v2; // rdi
  _QWORD *v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rdx
  int v11; // edx

  v2 = *(_WORD **)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(**(_QWORD **)v2 + 120LL));
  v6 = 0;
  *((_QWORD *)v2 + 1) = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_QWORD *)v2;
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(**(_QWORD **)v2 + 72LL),
        v10,
        13,
        28,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 135LL),
        *(_DWORD *)(*(_QWORD *)v2 + 144LL));
    }
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1 + 60);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_dddL(
        *(_QWORD *)(**(_QWORD **)v2 + 72LL),
        v11,
        *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 135LL),
        30);
    }
LABEL_12:
    v6 = -1073741823;
    goto LABEL_7;
  }
  *(_WORD *)(*(_QWORD *)v2 + 100LL) = v2[8];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(_QWORD *)v2;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(**(_QWORD **)v2 + 72LL),
      v7,
      13,
      29,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 135LL),
      *(_DWORD *)(*(_QWORD *)v2 + 144LL),
      *((_DWORD *)v2 + 4));
  }
  v5 = *(_QWORD **)v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0pppnnn_EtwWriteTransfer(
      (_DWORD)v5 + 103,
      (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_UPDATE,
      0,
      *(_QWORD *)(*v5 + 8LL),
      v5[1],
      v5[3]);
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _WORD *, _QWORD *))(WdfFunctions_01023 + 1632))(
         WdfDriverGlobals,
         v2,
         v5);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v8,
           v6);
}
