bool __fastcall ExpCapabilityCheck(UNICODE_STRING *String2)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, String2, &v2) >= 0 && v2 != 0;
}
