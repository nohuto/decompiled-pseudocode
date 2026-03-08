/*
 * XREFs of IoSetDependency @ 0x140951330
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PipSetDependency @ 0x1408387E4 (PipSetDependency.c)
 */

__int64 __fastcall IoSetDependency(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  _DWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5[1] = 0;
  v7[1] = 0;
  if ( a1 && a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 == a2 )
      return 3221225473LL;
    v5[0] = 0;
    v7[0] = 0;
    v6 = a1;
    v8 = a2;
    v9 = a3;
    PnpAcquireDependencyRelationsLock(1);
    v4 = PipSetDependency((__int64)v5, (__int64)v7);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    if ( v4 >= 0 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
