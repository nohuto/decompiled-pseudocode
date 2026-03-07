char IsXbox(void)
{
  char v0; // bl
  struct _UNICODE_STRING v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = 3;
  v0 = 0;
  v5 = 0;
  v2 = 0LL;
  v4 = 0;
  RtlInitUnicodeString(&v2, L"Kernel-OneCore-DeviceFamilyID");
  ZwQueryLicenseValue(&v2, &v5, &v3, 4LL, &v4);
  if ( v3 == 5 || (unsigned int)(v3 - 11) <= 1 )
    return 1;
  return v0;
}
