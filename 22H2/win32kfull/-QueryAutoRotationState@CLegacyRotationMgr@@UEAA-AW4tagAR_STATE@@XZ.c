/*
 * XREFs of ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0041E00
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0041DC4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01A71E0 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01A7248 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A73B8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A74B0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C003DF70 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 */

int __fastcall CLegacyRotationMgr::QueryAutoRotationState(CLegacyRotationMgr *a1)
{
  int result; // eax

  if ( dword_1C035A5EC )
    CLegacyRotationMgr::CacheRotationInfo(a1);
  result = gProtocolType != 0 ? 4 : 0;
  if ( !dword_1C035A5D8 )
    result |= 1u;
  if ( dword_1C035A5F4 || dword_1C035A5F0 )
    result |= 8u;
  if ( !dword_1C035A5DC )
    result |= 0x10u;
  if ( dword_1C035A5E0 )
    result |= 0x40u;
  if ( dword_1C035A5E4 )
    result |= 0x80u;
  if ( dword_1C035A5EC )
    return result | 0x20;
  return result;
}
