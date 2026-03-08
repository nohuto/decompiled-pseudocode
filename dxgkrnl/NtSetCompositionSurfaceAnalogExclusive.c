/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C007AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  struct DXGGLOBAL *Global; // rax
  struct CCompositionSurface *v5; // rbx
  __int64 v6; // r8
  int SessionTokenManager; // eax
  int v8; // edi
  CCompositionSurface *v9; // rcx
  struct CCompositionSurface *v11; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
  {
    v5 = 0LL;
    Object = 0LL;
    v11 = 0LL;
    KeEnterCriticalRegion();
    if ( a2
      || (SessionTokenManager = DxgkGetSessionTokenManager(&v11),
          v5 = v11,
          v8 = SessionTokenManager,
          SessionTokenManager >= 0) )
    {
      v8 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v6, (struct CompositionSurfaceObject **)&Object);
      if ( v8 >= 0 )
      {
        v11 = 0LL;
        v8 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v11);
        if ( v8 >= 0 )
        {
          v9 = v11;
          *((_BYTE *)v11 + 113) = a2 != 0;
          CCompositionSurface::UnlockAndRelease(v9);
          if ( !a2 )
            (*(void (__fastcall **)(struct CCompositionSurface *))(*(_QWORD *)v5 + 128LL))(v5);
        }
        ObfDereferenceObject(Object);
      }
    }
    if ( v5 )
      (*(void (__fastcall **)(struct CCompositionSurface *))(*(_QWORD *)v5 + 8LL))(v5);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}
