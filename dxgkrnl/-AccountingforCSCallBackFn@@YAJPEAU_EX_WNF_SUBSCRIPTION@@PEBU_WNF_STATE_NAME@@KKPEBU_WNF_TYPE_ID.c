__int64 __fastcall AccountingforCSCallBackFn(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-18h]

  v11 = a4;
  v10 = 24;
  v12 = 0LL;
  v13 = 0LL;
  v4 = ExQueryWnfStateData(a1, &v11, &v12, &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v8 = v12 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( (_QWORD)v12 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v8 = *((_QWORD *)&v12 + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( v8 )
    {
      v9 = v12 - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
      if ( (_QWORD)v12 == *(_QWORD *)&GUID_SPM_DEFAULT.Data1 )
        v9 = *((_QWORD *)&v12 + 1) - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
      if ( v9 )
        WdLogSingleEntry1(3LL, &v12);
      else
        DXGGLOBAL::FinalizeCSAccountingAndSendETW(Global);
    }
    else
    {
      DXGGLOBAL::InitializeCSAccounting(Global, v13);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
    return v5;
  }
}
