__int64 WdipSemSqmInit()
{
  ULONG v0; // eax
  __int64 v1; // rcx
  int v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+38h] [rbp-30h] BYREF
  int v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+44h] [rbp-24h]
  PSID v7; // [rsp+48h] [rbp-20h]
  ULONG v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v6 = 0;
  v4 = &v3;
  v7 = SeLocalSystemSid;
  v3 = 1;
  v5 = 4;
  v0 = RtlLengthSid(SeLocalSystemSid);
  v9 = 0;
  v8 = v0;
  return WdipSemWriteEvent(v1, WDI_SEM_EVENT_SQM_INIT, 0LL, 2LL, &v4);
}
