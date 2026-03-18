/*
 * XREFs of EngLockDriverObj @ 0x1C01783E0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLock @ 0x1C0021050 (HmgLock.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DB828 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00DB880 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  unsigned int v1; // edi
  DRIVEROBJ *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (unsigned int)hdo;
  v2 = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
  {
    v3 = HmgLock(v1, 28);
    HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v7, v3);
    v4 = v7[0];
    if ( v7[0] )
    {
      v7[0] = 0LL;
      v2 = (DRIVEROBJ *)(v4 + 24);
    }
    HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v7);
  }
  else
  {
    v5 = HmgLock(v1, 28);
    if ( v5 )
      return (DRIVEROBJ *)(v5 + 24);
  }
  return v2;
}
