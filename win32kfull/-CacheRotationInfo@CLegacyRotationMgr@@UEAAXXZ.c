/*
 * XREFs of ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00F8370
 * Callers:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0102C30 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A8BE4 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00F8684 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00F8730 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 */

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
