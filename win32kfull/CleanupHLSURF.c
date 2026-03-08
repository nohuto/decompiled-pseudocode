/*
 * XREFs of CleanupHLSURF @ 0x1C00F5FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C002D6F0 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 */

__int64 CleanupHLSURF()
{
  __int64 v0; // rdx
  __int64 i; // rcx
  unsigned int v2; // ebx
  struct SFMLOGICALSURFACE *v4; // [rsp+30h] [rbp+8h] BYREF

  GreAcquireHmgrSemaphore();
  v4 = 0LL;
  for ( i = 0LL; ; i = v2 )
  {
    LOBYTE(v0) = 18;
    v2 = HmgSafeNextObjt(i, v0, &v4);
    if ( !v2 )
      break;
    bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v4, 1);
  }
  return GreReleaseHmgrSemaphore();
}
