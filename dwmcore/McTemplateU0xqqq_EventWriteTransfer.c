__int64 __fastcall McTemplateU0xqqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+38h] [rbp-31h] BYREF
  int v6; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v7[16]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  int *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  __int64 v16; // [rsp+D0h] [rbp+67h] BYREF

  v16 = a3;
  v4 = 1;
  v6 = 0;
  v8 = &v16;
  v5 = 0;
  v10 = &v4;
  v9 = 8LL;
  v12 = &v5;
  v11 = 4LL;
  v14 = &v6;
  v13 = 4LL;
  v15 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_RENDERTIME,
           a3,
           5LL,
           v7);
}
