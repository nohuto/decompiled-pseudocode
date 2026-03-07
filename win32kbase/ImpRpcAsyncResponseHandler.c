__int64 ImpRpcAsyncResponseHandler()
{
  int EnabledStateAsync; // edi
  unsigned __int8 *v1; // rdx
  ULONG v3; // [rsp+20h] [rbp-29h]
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  int *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)ImpCompleteRpc() == -1073610734 )
  {
    EnabledStateAsync = 0;
    if ( (unsigned int)dword_1C02C9780 <= 5 )
      return (unsigned int)EnabledStateAsync;
    v10 = 0;
    v1 = (unsigned __int8 *)&unk_1C02A01CD;
    v5 = 0;
    v13 = 0;
    v4 = ImpSessionId;
    v8 = &v4;
    v11 = &v5;
    v3 = 4;
    goto LABEL_6;
  }
  EnabledStateAsync = ImpRpcQueryEnabledStateAsync();
  if ( EnabledStateAsync < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)dword_1C02C9780 > 5 )
  {
    v10 = 0;
    v1 = (unsigned __int8 *)&dword_1C02A031B;
    v13 = 0;
    v16 = 0;
    v8 = &v5;
    v4 = (unsigned __int8)ImpIsActive;
    v11 = &v4;
    v14 = &v6;
    v5 = ImpSessionId;
    v3 = 5;
    v6 = EnabledStateAsync;
    v15 = 4;
LABEL_6:
    v9 = 4;
    v12 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, v1, 0LL, 0LL, v3, &v7);
  }
  return (unsigned int)EnabledStateAsync;
}
