char __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::IsDisjointCapableSku(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this)
{
  char IsMultiSessionSku; // al
  char v2; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  IsMultiSessionSku = RtlIsMultiSessionSku(this);
  v2 = 0;
  if ( !IsMultiSessionSku )
  {
    v7 = 0;
    v6 = 0;
    v5 = 3;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6);
    return v5 != 10;
  }
  return v2;
}
