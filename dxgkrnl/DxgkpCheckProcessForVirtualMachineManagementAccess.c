bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  __int64 v0; // rcx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v2) >= 0 && v2 )
    return 1;
  if ( DxgkpIsDrtEnabled(v0) && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v2) >= 0 )
    return v2 != 0;
  return 0;
}
