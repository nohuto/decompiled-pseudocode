void __fastcall PpmEventTraceDripsAccountingSnapshot(__int64 a1, __int64 a2)
{
  REGHANDLE v3; // rbx
  char v4; // [rsp+30h] [rbp-9h] BYREF
  int v5; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  __int64 v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v5 = 26;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v4 = PopWnfCsEnterScenarioId;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      v13 = &PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v8 = 4;
      v10 = a2;
      v11 = 208;
      v14 = 8;
      EtwWrite(v3, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT, 0LL, 4u, &UserData);
    }
  }
}
