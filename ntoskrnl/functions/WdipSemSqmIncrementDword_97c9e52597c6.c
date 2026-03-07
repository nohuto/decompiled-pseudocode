NTSTATUS __fastcall WdipSemSqmIncrementDword(__int64 a1, int a2)
{
  int v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp+7h] BYREF
  int *v6; // [rsp+50h] [rbp+17h]
  __int64 v7; // [rsp+58h] [rbp+1Fh]
  int *v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  int *v10; // [rsp+70h] [rbp+37h]
  __int64 v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+A8h] [rbp+6Fh] BYREF

  v12 = a2;
  v3 = 450;
  v4 = 6;
  v5.Ptr = (ULONGLONG)WinSqmGlobalSession;
  v6 = &v3;
  v8 = &v4;
  v10 = &v12;
  *(_QWORD *)&v5.Size = 16LL;
  v7 = 4LL;
  v9 = 4LL;
  v11 = 4LL;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD, 0LL, 4u, &v5);
}
