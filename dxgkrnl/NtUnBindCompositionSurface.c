/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C000B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2)
{
  int SessionTokenManager; // eax
  char v5; // r8
  struct CCompositionSurface *v6; // rdi
  int v7; // ebx
  CCompositionSurface *v8; // rsi
  struct DXGGLOBAL *Global; // rax
  struct CCompositionSurface *v11; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  struct CCompositionBuffer *v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[164]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0LL;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v11);
  v6 = v11;
  v7 = SessionTokenManager;
  if ( SessionTokenManager >= 0 )
  {
    v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v7 >= 0 )
    {
      v11 = 0LL;
      memset(v14, 0, sizeof(v14));
      v7 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v11);
      if ( v7 >= 0 )
      {
        v8 = v11;
        v13 = 0LL;
        if ( (int)CCompositionSurface::FindBuffer(v11, *((_QWORD *)v11 + 5), &v13) >= 0 )
          (*(void (__fastcall **)(struct CCompositionBuffer *, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, v14);
        v7 = CCompositionSurface::UnBind(v8, a2 != 0);
        CCompositionSurface::UnlockAndRelease(v8);
        if ( v7 >= 0 )
        {
          if ( v14[145] && LODWORD(v14[0]) == 2 )
          {
            Global = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 544LL))(v14[145], a2);
          }
          if ( !a2 )
            (*(void (__fastcall **)(struct CCompositionSurface *, PVOID))(*(_QWORD *)v6 + 80LL))(v6, Object);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CCompositionSurface *))(*(_QWORD *)v6 + 8LL))(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
