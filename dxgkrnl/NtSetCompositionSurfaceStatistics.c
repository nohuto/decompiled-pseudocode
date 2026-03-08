/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C007B370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C007C558 (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, __int128 *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  CCompositionSurface *v12; // rdi
  unsigned __int64 v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+28h] [rbp-40h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  struct CCompositionSurface *v18; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    v14 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v6 = a3[1];
    v15 = *a3;
    v16 = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned __int64))(*((_QWORD *)Global + 38069)
                                                                                             + 560LL))(
           *((_QWORD *)Global + 38069),
           v8,
           v9,
           v10,
           v14) )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v18 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v18);
        if ( v4 >= 0 )
        {
          v12 = v18;
          if ( *((_BYTE *)v18 + 113) )
            CCompositionSurface::SetSurfaceStats(v18, v5, (const struct DXGI_FRAME_STATISTICS *)&v15);
          else
            v4 = -1073741823;
          CCompositionSurface::UnlockAndRelease(v12);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v4 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
