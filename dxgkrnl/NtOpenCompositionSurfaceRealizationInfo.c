/*
 * XREFs of NtOpenCompositionSurfaceRealizationInfo @ 0x1C000CE00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C000D5A8 (-GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D6B0 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D828 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceRealizationInfo(
        struct CCompositionSurface *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        void *a4)
{
  int SwapChainRealizationInfo; // edi
  struct CSM_REALIZATION_INFO *v7; // rsi
  __int64 Pool2; // r13
  unsigned int *v9; // rcx
  size_t v10; // r12
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  CompositionSurfaceObject *v13; // rax
  int v14; // eax
  void *v15; // rcx
  char v16; // al
  __int64 i; // r14
  unsigned int v19; // [rsp+34h] [rbp-574h] BYREF
  int v20; // [rsp+38h] [rbp-570h]
  struct CCompositionSurface *v21; // [rsp+40h] [rbp-568h] BYREF
  _BYTE *v22; // [rsp+48h] [rbp-560h]
  CompositionSurfaceObject *v23; // [rsp+50h] [rbp-558h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-550h]
  __int64 v25; // [rsp+60h] [rbp-548h]
  PVOID Object; // [rsp+68h] [rbp-540h]
  void *v27; // [rsp+70h] [rbp-538h]
  unsigned __int64 v28; // [rsp+78h] [rbp-530h]
  void *v29; // [rsp+80h] [rbp-528h]
  _BYTE v30[1248]; // [rsp+90h] [rbp-518h] BYREF

  v29 = a4;
  v21 = a1;
  v23 = a1;
  Object = a3;
  v27 = a4;
  SwapChainRealizationInfo = 0;
  v24 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  Pool2 = 0LL;
  v25 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v24 = *a2;
    v28 = v24;
    v9 = a3;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v19 = *v9;
  }
  else
  {
    SwapChainRealizationInfo = -1073741811;
  }
  KeEnterCriticalRegion();
  v10 = 0LL;
  if ( SwapChainRealizationInfo >= 0 )
  {
    if ( a4 && v19 )
    {
      v27 = (void *)((v19 * (unsigned __int128)0x28u) >> 64);
      v10 = 40LL * v19;
      if ( is_mul_ok(v19, 0x28uLL) )
      {
        SwapChainRealizationInfo = 0;
      }
      else
      {
        v10 = -1LL;
        SwapChainRealizationInfo = -1073741675;
      }
      if ( SwapChainRealizationInfo < 0 )
        goto LABEL_28;
      if ( v10 > 0x4D8 )
      {
        Pool2 = ExAllocatePool2(257LL, v10, 1766675267LL);
        v25 = Pool2;
        v7 = (struct CSM_REALIZATION_INFO *)Pool2;
        v22 = (_BYTE *)Pool2;
        if ( !Pool2 )
          SwapChainRealizationInfo = -1073741801;
      }
      else
      {
        v7 = (struct CSM_REALIZATION_INFO *)v30;
        v22 = v30;
      }
    }
    if ( SwapChainRealizationInfo >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
      {
        v23 = 0LL;
        LOBYTE(v12) = 1;
        SwapChainRealizationInfo = DxgkCompositionObject::ResolveHandle(v21, 1LL, v12, 1LL, &v23);
        v13 = 0LL;
        if ( SwapChainRealizationInfo >= 0 )
          v13 = v23;
        Object = v13;
        if ( SwapChainRealizationInfo < 0 )
          goto LABEL_42;
        v21 = 0LL;
        SwapChainRealizationInfo = CompositionSurfaceObject::LockForRead(v13, &v21);
        if ( SwapChainRealizationInfo >= 0 )
        {
          SwapChainRealizationInfo = CCompositionSurface::GetSwapChainRealizationInfo(v21, v24, &v19, v7);
          v14 = (unsigned __int8)v20;
          if ( SwapChainRealizationInfo >= 0 )
            v14 = 1;
          v20 = v14;
          CCompositionSurface::UnlockAndRelease(v21);
        }
        ObfDereferenceObject(Object);
      }
      else
      {
        SwapChainRealizationInfo = -1073741790;
      }
    }
  }
LABEL_28:
  if ( SwapChainRealizationInfo < 0 )
  {
LABEL_42:
    v16 = v20;
    goto LABEL_38;
  }
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v19;
  if ( v7 )
  {
    v15 = v29;
    if ( (unsigned __int64)v29 + v10 > MmUserProbeAddress || (char *)v29 + v10 <= v29 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v7, v10);
  }
  v16 = v20;
LABEL_38:
  if ( SwapChainRealizationInfo < 0 )
  {
    if ( v16 )
    {
      if ( v7 )
      {
        for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
          ObCloseHandle(*((HANDLE *)v7 + 5 * i + 1), 1);
      }
    }
  }
  if ( Pool2 )
    ExFreePool2(Pool2, 1766675267LL, 0LL, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SwapChainRealizationInfo;
}
