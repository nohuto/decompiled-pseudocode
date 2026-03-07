__int64 DxgkPrepareCcdDatabaseForAccess()
{
  PSID v0; // rbx
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax
  PSID Sid; // [rsp+20h] [rbp-38h] BYREF
  ULONG v8[6]; // [rsp+28h] [rbp-30h] BYREF

  v8[0] = 80;
  v8[1] = -123880637;
  v8[2] = 1617898341;
  v8[3] = -1424805804;
  v8[4] = 1466607281;
  v8[5] = 2109097600;
  CreateServiceSid(&Sid, v8);
  v0 = Sid;
  if ( !Sid )
  {
    v1 = -1073741670LL;
LABEL_7:
    WdLogSingleEntry1(2LL, v1);
    goto LABEL_9;
  }
  v2 = CheckCallerMatchesSid(Sid);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = AdjustCcdDatabasePermissions(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
           0,
           v0);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = AdjustCcdDatabasePermissions(
             0,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
             0,
             v0);
      v1 = v5;
      if ( v5 >= 0 )
      {
        LODWORD(v1) = 0;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
  }
  WdLogSingleEntry1(2LL, v3);
  LODWORD(v1) = v3;
LABEL_9:
  __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Sid);
  return (unsigned int)v1;
}
