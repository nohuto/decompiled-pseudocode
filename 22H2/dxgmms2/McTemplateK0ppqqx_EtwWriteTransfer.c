/*
 * XREFs of McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C002D460
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00029D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11111@Z @ 0x1C0015340 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0023ECC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0ppqqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+38h] [rbp-51h] BYREF
  __int64 v6; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-39h] BYREF
  va_list v8; // [rsp+60h] [rbp-29h]
  __int64 v9; // [rsp+68h] [rbp-21h]
  va_list v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  int *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  int *v14; // [rsp+90h] [rbp+7h]
  __int64 v15; // [rsp+98h] [rbp+Fh]
  __int64 *v16; // [rsp+A0h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+1Fh]
  __int64 v18; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+5Fh]
  va_list va1; // [rsp+F0h] [rbp+67h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v9 = 8LL;
  v6 = 0LL;
  va_copy(v8, va);
  v5 = 0;
  va_copy(v10, va1);
  v4 = 0;
  v12 = &v4;
  v11 = 8LL;
  v14 = &v5;
  v16 = &v6;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventPropagatePresentHistory, 0LL, 6u, &v7);
}
