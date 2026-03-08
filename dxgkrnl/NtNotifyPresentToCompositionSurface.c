/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x1C007A170
 * Callers:
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02DE710 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C007B900 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007C330 (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(void *a1, unsigned __int64 a2)
{
  int SessionTokenManager; // ebx
  HWND v4; // r14
  unsigned __int64 v5; // r15
  _DWORD *v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v11; // rcx
  _OWORD *v12; // rax
  unsigned __int64 *v13; // r15
  void *v14; // rsi
  _OWORD *v15; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  CompositionSurfaceObject *v19; // r13
  HWND v20; // rsi
  CCompositionSurface *v21; // rsi
  bool v23; // [rsp+30h] [rbp-8C8h] BYREF
  void *v24; // [rsp+38h] [rbp-8C0h] BYREF
  HWND v25; // [rsp+40h] [rbp-8B8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8B0h] BYREF
  int v27; // [rsp+50h] [rbp-8A8h]
  unsigned __int64 v28; // [rsp+58h] [rbp-8A0h]
  void *v29; // [rsp+60h] [rbp-898h]
  _BYTE v30[1064]; // [rsp+68h] [rbp-890h] BYREF
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN v31; // [rsp+490h] [rbp-468h] BYREF

  v24 = a1;
  v29 = a1;
  SessionTokenManager = 0;
  v4 = 0LL;
  v25 = 0LL;
  memset(&v31, 0, sizeof(v31));
  Object = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  if ( !a2 )
    goto LABEL_22;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v15 = (_OWORD *)(a2 + 16);
    v16 = &v31;
    v17 = 8LL;
    do
    {
      *(_OWORD *)&v16->FenceValue = *v15;
      *(_OWORD *)&v16->dxgContext = v15[1];
      *(_OWORD *)&v16->PresentLimitSemaphoreId = v15[2];
      *(_OWORD *)&v16->hCompSurf = v15[3];
      *(_OWORD *)&v16->confirmationCookie = v15[4];
      *(_OWORD *)&v16->RemainingTokens = v15[5];
      *(_OWORD *)&v16->ScrollRect.bottom = v15[6];
      v16 = (_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)((char *)v16 + 128);
      v16[-1].DirtyRegions.Rects[15] = (RECT)v15[7];
      v15 += 8;
      --v17;
    }
    while ( v17 );
    *(_OWORD *)&v16->FenceValue = *v15;
    *(_OWORD *)&v16->dxgContext = v15[1];
    v16->PresentLimitSemaphoreId = *((_QWORD *)v15 + 4);
    v5 = *(_QWORD *)(a2 + 8);
    SessionTokenManager = *(_DWORD *)a2 != 2 ? 0xC000000D : 0;
LABEL_22:
    v14 = v24;
    goto LABEL_23;
  }
  v6 = (_DWORD *)a2;
  if ( a2 + 4 < a2 || a2 + 4 > MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  if ( *v6 != 2 )
    SessionTokenManager = -1073741811;
  v27 = SessionTokenManager;
  v7 = (_OWORD *)(a2 + 16);
  if ( a2 + 1080 < a2 + 16 || a2 + 1080 > MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  v8 = v30;
  v9 = 8LL;
  v10 = 8LL;
  do
  {
    *v8 = *v7;
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
    v8[4] = v7[4];
    v8[5] = v7[5];
    v8[6] = v7[6];
    v8 += 8;
    *(v8 - 1) = v7[7];
    v7 += 8;
    --v10;
  }
  while ( v10 );
  *v8 = *v7;
  v8[1] = v7[1];
  *((_QWORD *)v8 + 4) = *((_QWORD *)v7 + 4);
  v11 = &v31;
  v12 = v30;
  do
  {
    *(_OWORD *)&v11->FenceValue = *v12;
    *(_OWORD *)&v11->dxgContext = v12[1];
    *(_OWORD *)&v11->PresentLimitSemaphoreId = v12[2];
    *(_OWORD *)&v11->hCompSurf = v12[3];
    *(_OWORD *)&v11->confirmationCookie = v12[4];
    *(_OWORD *)&v11->RemainingTokens = v12[5];
    *(_OWORD *)&v11->ScrollRect.bottom = v12[6];
    v11 = (_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)((char *)v11 + 128);
    v11[-1].DirtyRegions.Rects[15] = (RECT)v12[7];
    v12 += 8;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)&v11->FenceValue = *v12;
  *(_OWORD *)&v11->dxgContext = v12[1];
  v11->PresentLimitSemaphoreId = *((_QWORD *)v12 + 4);
  v13 = (unsigned __int64 *)(a2 + 8);
  if ( a2 + 16 < a2 + 8 || a2 + 16 > MmUserProbeAddress )
    v13 = (unsigned __int64 *)MmUserProbeAddress;
  v5 = *v13;
  v28 = v5;
  v14 = v24;
LABEL_23:
  KeEnterCriticalRegion();
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v25);
    v4 = v25;
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = CompositionSurfaceObject::ResolveHandle(
                              v14,
                              2u,
                              v18,
                              (struct CompositionSurfaceObject **)&Object);
      v19 = (CompositionSurfaceObject *)Object;
      if ( SessionTokenManager >= 0 )
      {
        Object = 0LL;
        v20 = 0LL;
        v25 = 0LL;
        SessionTokenManager = CompositionSurfaceObject::LockForWrite(v19, (struct CCompositionSurface **)&Object);
        if ( SessionTokenManager >= 0 )
        {
          LODWORD(v24) = 0;
          v23 = 0;
          v21 = (CCompositionSurface *)Object;
          if ( !CCompositionSurface::CheckBinding(
                  (CCompositionSurface *)Object,
                  v5,
                  (enum CompositionBufferType *)&v24,
                  &v25,
                  &v23)
            || (_DWORD)v24 != 2
            || !v23 )
          {
            SessionTokenManager = -1073741811;
          }
          if ( SessionTokenManager >= 0 )
            SessionTokenManager = CCompositionSurface::PreNotifyPendingFlipPresent(v21, v5, &v31);
          CCompositionSurface::UnlockAndRelease(v21);
          v20 = v25;
        }
        if ( SessionTokenManager >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(HWND))(*(_QWORD *)v4 + 184LL))(v4) )
            SessionTokenManager = (*(__int64 (__fastcall **)(HWND, CompositionSurfaceObject *))(*(_QWORD *)v4 + 104LL))(
                                    v4,
                                    v19);
          else
            SessionTokenManager = v20 != 0LL ? -1071775733 : -1071775730;
        }
        ObfDereferenceObject(v19);
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v4 + 8LL))(v4);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
