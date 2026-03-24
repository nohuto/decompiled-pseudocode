/*
 * XREFs of EngLockDriverObj @ 0x1C014C550
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0073B1C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLock @ 0x1C002EE50 (HmgLock.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CBAC8 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00CBB0C (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = HmgLock((unsigned int)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v5, v2);
  v3 = v5[0];
  if ( v5[0] )
  {
    v5[0] = 0LL;
    v1 = (DRIVEROBJ *)(v3 + 24);
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v5);
  return v1;
}
