/*
 * XREFs of NtBindCompositionSurface @ 0x1C000C000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, unsigned int a3, int a4, char *Src, _QWORD *a6)
{
  int SessionTokenManager; // edi
  __int64 v7; // rsi
  CompositionSurfaceObject *v8; // r12
  struct CCompositionSurface *v9; // r15
  char v10; // r13
  char *v11; // rdx
  struct DXGGLOBAL *Global; // rax
  char v13; // r8
  struct DXGGLOBAL *v15; // rax
  bool v16; // [rsp+20h] [rbp-AF8h]
  __int64 v17; // [rsp+48h] [rbp-AD0h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-AC8h]
  unsigned int v19; // [rsp+58h] [rbp-AC0h]
  CompositionSurfaceObject *v20; // [rsp+60h] [rbp-AB8h] BYREF
  struct CCompositionSurface *v21; // [rsp+68h] [rbp-AB0h] BYREF
  void *v22; // [rsp+70h] [rbp-AA8h]
  unsigned __int64 v23[3]; // [rsp+78h] [rbp-AA0h] BYREF
  _BYTE v24[1312]; // [rsp+90h] [rbp-A88h] BYREF
  _QWORD v25[164]; // [rsp+5B0h] [rbp-568h] BYREF

  v18 = a3;
  v22 = a1;
  v23[1] = (unsigned __int64)a1;
  v19 = a3;
  v23[2] = (unsigned __int64)a6;
  SessionTokenManager = 0;
  memset(v25, 0, sizeof(v25));
  v23[0] = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v10 = 0;
  v11 = Src;
  if ( Src )
  {
    if ( Src + 1312 < Src || (unsigned __int64)(Src + 1312) > MmUserProbeAddress )
      v11 = (char *)MmUserProbeAddress;
    memmove(v24, v11, 0x520uLL);
    memmove(v25, v24, 0x520uLL);
    if ( a6 + 1 < a6 || (unsigned __int64)(a6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a6 = 0LL;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( SessionTokenManager >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
    {
      SessionTokenManager = DxgkGetSessionTokenManager(&v17);
      v7 = v17;
      if ( SessionTokenManager >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    }
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = CompositionSurfaceObject::ResolveHandle(v22, 2u, v13, &v20);
      v8 = v20;
      if ( SessionTokenManager >= 0 )
      {
        SessionTokenManager = CompositionSurfaceObject::LockForWrite(v20, &v21);
        v9 = v21;
      }
    }
  }
  if ( v7 && (SessionTokenManager < 0 || !*((_QWORD *)v9 + 13)) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v7 = 0LL;
    v17 = 0LL;
  }
  if ( SessionTokenManager >= 0 )
    SessionTokenManager = CCompositionSurface::Bind(
                            v9,
                            (const struct CSM_BUFFER_INFO *)v25,
                            a2 != 0,
                            a4 != 0,
                            v16,
                            0,
                            v23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v17 = 0LL;
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_41;
  v10 = 1;
  if ( v25[145] )
  {
    v15 = DXGGLOBAL::GetGlobal();
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)v15 + 38069) + 552LL))(
            v25[145],
            v18,
            v22) )
      SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
  {
LABEL_41:
    if ( v10 )
      CCompositionSurface::UnBind(v9, 0);
  }
  if ( v9 )
    CCompositionSurface::UnlockAndRelease(v9);
  if ( v8 )
    ObfDereferenceObject(v8);
  KeLeaveCriticalRegion();
  if ( a6 )
  {
    if ( a6 + 1 < a6 || (unsigned __int64)(a6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a6 = v23[0];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)SessionTokenManager;
}
