void __fastcall CLegacyRotationMgr::CacheRotationInfo(CLegacyRotationMgr *this)
{
  int CurrentOrientation; // eax
  CLegacyRotationMgr *v2; // rcx
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  dword_1C035D5EC = 0;
  dword_1C035D5F4 = 0;
  dword_1C035D5F0 = 0;
  dword_1C035D5D4 = 0;
  CurrentOrientation = GetCurrentOrientation(&v3);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_1C035D5F0 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_1C035D5F4 = 1;
    }
    else
    {
      dword_1C035D5EC = 1;
    }
  }
  else
  {
    dword_1C035D5D4 = v3;
  }
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v2,
    dword_1C035D5D4,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
