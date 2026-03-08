/*
 * XREFs of ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00877EC
 * Callers:
 *     ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C0086E90 (-RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x1C0087554 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x1C000C4DC (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CContentResource::RebindCompositionSurfaceBuffer(
        CContentResource *this,
        struct CCompositionSwapchainBuffer *a2)
{
  int v3; // ebx
  CompositionSurfaceObject *v4; // rcx
  int v6; // eax
  CCompositionSurface *v7; // rdi
  struct DXGGLOBAL *Global; // rax
  CCompositionSurface *v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (CompositionSurfaceObject *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v10 = 0LL;
    v6 = CompositionSurfaceObject::LockForWrite(v4, &v10);
    v7 = v10;
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = CCompositionSurface::UnBind(v10, 1);
      if ( v3 >= 0 )
      {
        *((_BYTE *)this + 64) = 0;
        *((_QWORD *)this + 7) = 0LL;
        if ( a2 )
        {
          if ( !*((_DWORD *)a2 + 68) || (v3 = CCompositionSurface::Bind(v7, a2, (unsigned __int64 *)this + 7), v3 >= 0) )
          {
            *((_BYTE *)this + 64) = *((_BYTE *)a2 + 624);
            *((_BYTE *)this + 65) = *((_BYTE *)a2 + 737);
            Global = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(CContentResource *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*((_QWORD *)Global
                                                                                                 + 38069)
                                                                                               + 168LL))(
              this,
              *((_QWORD *)v7 - 2),
              *((_QWORD *)this + 7),
              *((unsigned __int8 *)this + 65),
              *((unsigned __int8 *)this + 64),
              *((_DWORD *)a2 + 68));
          }
        }
      }
    }
    if ( v7 )
      CCompositionSurface::UnlockAndRelease(v7);
  }
  return (unsigned int)v3;
}
