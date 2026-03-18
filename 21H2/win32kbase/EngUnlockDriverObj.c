/*
 * XREFs of EngUnlockDriverObj @ 0x1C0178460
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C0021050 (HmgLock.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DB828 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00DB880 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (unsigned int)hdo;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
  {
    v2 = HmgLock(v1, 28);
    HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v5, v2);
    if ( v5[0] )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v5[0] + 12LL));
      HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v5);
      return 1;
    }
    HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v5);
  }
  else
  {
    v4 = HmgLock(v1, 28);
    if ( v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
      return 1;
    }
  }
  return 0;
}
