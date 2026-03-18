/*
 * XREFs of ImpCompleteRpc @ 0x1C007A548
 * Callers:
 *     ImpRpcAsyncResponseHandler @ 0x1C007AC8C (ImpRpcAsyncResponseHandler.c)
 *     ImpRpcDisconnect @ 0x1C00BF044 (ImpRpcDisconnect.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 ImpCompleteRpc()
{
  unsigned int v0; // edi
  int *v1; // rax
  unsigned __int8 *v2; // rdx
  int Reply; // [rsp+30h] [rbp-88h] BYREF
  int v5; // [rsp+34h] [rbp-84h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v7[5]; // [rsp+3Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-68h] BYREF
  int *v9; // [rsp+70h] [rbp-48h]
  int v10; // [rsp+78h] [rbp-40h]
  int v11; // [rsp+7Ch] [rbp-3Ch]
  unsigned int *v12; // [rsp+80h] [rbp-38h]
  int v13; // [rsp+88h] [rbp-30h]
  int v14; // [rsp+8Ch] [rbp-2Ch]
  int *v15; // [rsp+90h] [rbp-28h]
  int v16; // [rsp+98h] [rbp-20h]
  int v17; // [rsp+9Ch] [rbp-1Ch]

  if ( !ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpIsAsyncRpcReqPending )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Reply = 0;
  ImpIsAsyncRpcReqPending = 0;
  v0 = RpcAsyncCompleteCall(ImpRpcAsync, &Reply);
  v7[1] = v0;
  if ( v0 != -1073610672 && v0 )
  {
    if ( (unsigned int)dword_1C0288780 <= 5 )
      return v0;
    v5 = ImpSessionId;
    v9 = &v5;
    v12 = &v6;
    v7[0] = Reply;
    v1 = v7;
    v2 = (unsigned __int8 *)&unk_1C026183F;
    goto LABEL_11;
  }
  if ( (unsigned int)dword_1C0288780 > 5 )
  {
    v7[0] = ImpSessionId;
    v9 = v7;
    v12 = &v6;
    v5 = Reply;
    v1 = &v5;
    v2 = (unsigned __int8 *)&dword_1C026199A;
LABEL_11:
    v15 = v1;
    v10 = 4;
    v13 = 4;
    v16 = 4;
    v11 = 0;
    v6 = v0;
    v14 = 0;
    v17 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, v2, 0LL, 0LL, 5u, &v8);
  }
  return v0;
}
