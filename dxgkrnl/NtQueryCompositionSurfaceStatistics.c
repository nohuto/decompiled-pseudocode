/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C007AB20
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D6B0 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3A0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(void *a1, _OWORD *a2)
{
  __int64 v4; // r8
  int Stats; // ebx
  struct CCompositionSurface *v7; // [rsp+28h] [rbp-70h] BYREF
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v9[4]; // [rsp+40h] [rbp-58h] BYREF

  Object = 0LL;
  memset(v9, 0, sizeof(v9));
  KeEnterCriticalRegion();
  Stats = CompositionSurfaceObject::ResolveHandle(a1, 1u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( Stats >= 0 )
  {
    v7 = 0LL;
    Stats = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v7);
    if ( Stats >= 0 )
    {
      Stats = CCompositionSurface::QueryStats(v7, (struct CSM_BUFFER_STATISTICS *)v9);
      CCompositionSurface::UnlockAndRelease(v7);
    }
    ObfDereferenceObject(Object);
  }
  if ( a2 )
  {
    if ( a2 + 4 < a2 || (unsigned __int64)(a2 + 4) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v9[0];
    a2[1] = v9[1];
    a2[2] = v9[2];
    a2[3] = v9[3];
  }
  else
  {
    Stats = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Stats;
}
