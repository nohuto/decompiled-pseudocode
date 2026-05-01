/*
 * XREFs of ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x1801EFB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1801BDA04 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_40cee9db11f6b344e17a9fb4653285fc___ @ 0x1801E858C (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_40cee9db11f6b344e17a9fb4653285fc___.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x1801E9418 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801EB494 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::QueryService(__int64 a1, int a2, DWORD a3, __int128 *a4, __int64 a5, _QWORD *a6)
{
  CIAMGlobals *v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int WindowService; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v15[24]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  int v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+5Ch] [rbp-24h]

  *a6 = 0LL;
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v15, a3);
  if ( CIAMGlobals::IsCalledOnIAMThread(v9) )
  {
    v11 = -2147024891;
    WindowService = -2147024891;
  }
  else
  {
    WindowService = -2147319765;
    v14 = 0LL;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v16[0] = &WindowService;
    v16[1] = &v14;
    v17 = a2;
    v18 = *a4;
    CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_40cee9db11f6b344e17a9fb4653285fc___(
      a1 + 208,
      (__int64)v16);
    v10 = 0LL;
    if ( WindowService >= 0 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( WindowService >= 0 )
      WindowService = CoreQueryWindowService(v10, a4, a5, a6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v11 = WindowService;
  }
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v15);
  return v11;
}
