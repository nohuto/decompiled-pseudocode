/*
 * XREFs of CleanupHLSURF @ 0x1C0122950
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0020CA8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall CleanupHLSURF(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 i; // rcx
  __int64 *Objt; // rax
  __int64 v9; // rbx

  v4 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  for ( i = 0LL; ; i = v9 )
  {
    LOBYTE(v5) = 18;
    Objt = (__int64 *)HmgSafeNextObjt(i, v5);
    if ( !Objt )
      break;
    v9 = *Objt;
    if ( !*Objt )
      break;
    bhLSurfDestroyLogicalSurfaceObject(Objt, 1, v4);
  }
  return GreReleaseHmgrSemaphore();
}
