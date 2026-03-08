/*
 * XREFs of ?xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z @ 0x1C01A8CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00F8730 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxSetSensorPresence(CLegacyRotationMgr *this, int a2)
{
  if ( (int)CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
  {
    dword_1C035D5DC = a2;
    if ( !dword_1C035D5FC )
      dword_1C035D5FC = a2 != 0;
  }
}
