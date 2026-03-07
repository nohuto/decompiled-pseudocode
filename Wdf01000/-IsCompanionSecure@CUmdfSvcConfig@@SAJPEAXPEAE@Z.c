int __fastcall CUmdfSvcConfig::IsCompanionSecure(void *UmdfServiceKey, bool *SecureCompanion)
{
  int result; // eax
  unsigned int companionType; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING umdfServiceTypeKeyName; // [rsp+28h] [rbp-40h] BYREF
  wchar_t umdfServiceTypeKeyName_buffer[16]; // [rsp+38h] [rbp-30h] BYREF

  companionType = 0;
  *SecureCompanion = 0;
  *(_QWORD *)&umdfServiceTypeKeyName.Length = 2097182LL;
  umdfServiceTypeKeyName.Buffer = umdfServiceTypeKeyName_buffer;
  wcscpy(umdfServiceTypeKeyName_buffer, L"UmdfServiceType");
  result = CUmdfSvcConfig::_QueryULong(UmdfServiceKey, &umdfServiceTypeKeyName, &companionType);
  if ( result >= 0 )
    *SecureCompanion = companionType == 2;
  return result;
}
