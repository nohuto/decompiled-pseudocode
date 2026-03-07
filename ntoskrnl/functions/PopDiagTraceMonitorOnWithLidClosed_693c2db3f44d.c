void PopDiagTraceMonitorOnWithLidClosed()
{
  int v0; // r9d
  char v1; // r10
  char v2; // r11
  char v3; // [rsp+30h] [rbp-39h] BYREF
  char v4; // [rsp+31h] [rbp-38h] BYREF
  char v5; // [rsp+32h] [rbp-37h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-29h] BYREF
  char *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  char *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  int *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  char *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  __int64 *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  if ( !PopLidOpened && !PopConsoleExternalDisplayConnected && (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v6 = v0;
      v9 = &v3;
      v3 = v2;
      v11 = &v4;
      v10 = 1LL;
      v13 = &v6;
      v4 = v2;
      v15 = &v5;
      v7 = PopWnfCsEnterScenarioId;
      v17 = &v7;
      v12 = 1LL;
      v14 = 4LL;
      v5 = v1;
      v16 = 1LL;
      v18 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&byte_14002E597,
        0LL,
        0LL,
        7u,
        &v8);
    }
  }
}
