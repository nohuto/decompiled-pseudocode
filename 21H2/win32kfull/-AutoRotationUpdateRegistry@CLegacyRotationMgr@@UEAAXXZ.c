/*
 * XREFs of ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00D0FB0
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01CDB80 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00D12FC (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
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
    dword_1C0331964,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
