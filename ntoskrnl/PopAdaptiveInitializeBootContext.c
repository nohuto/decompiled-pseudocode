__int64 PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rdx
  int v1; // eax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1LL;
  v5 = -1LL;
  if ( (int)PopBcdOpen((__int64)&v6) >= 0 )
  {
    if ( (int)BcdOpenObject(v6, &GUID_CURRENT_BOOT_ENTRY.Data1, &v5) >= 0 )
    {
      v3 = 8;
      if ( (int)BcdGetElementData(v5, 620757338, (int)&qword_140D53288, (__int64)&v3) >= 0 )
      {
        LOBYTE(v0) = (qword_140D53288 & 8) != 0;
        PopDiagTraceAdaptiveBootOverride(qword_140D53288 & 7, v0);
        byte_140D53281 = 1;
        if ( (qword_140D53288 & 7) != 0 )
          PopAdaptiveBootContext = 1;
      }
    }
    if ( v5 != -1 )
      BcdCloseObject(v5);
  }
  if ( v6 != -1 )
    PopBcdClose(v6);
  v1 = 0;
  if ( PopAdaptiveBootContext )
    v1 = 2;
  v4 = v1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, (__int64)&v4);
}
