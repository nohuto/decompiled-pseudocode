/*
 * XREFs of InitRotationManager @ 0x1C01366B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x1C0166594 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 */

__int64 InitRotationManager()
{
  _DWORD *PoolWithTag; // rax

  Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage();
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6D747255u);
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0;
    PoolWithTag[2] = 0;
    *(_QWORD *)PoolWithTag = &CLegacyRotationMgr::`vftable';
  }
  P = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000017 : 0;
}
