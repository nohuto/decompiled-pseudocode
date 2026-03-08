/*
 * XREFs of ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00F8310
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A86E0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00F8730 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 */

void __fastcall CLegacyRotationMgr::AutoRotationUpdateRegistry(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v1; // rcx

  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    this,
    gAutoRotationInfo,
    L"LastAutoRequest",
    1u,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v1,
    dword_1C035D5D4,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
