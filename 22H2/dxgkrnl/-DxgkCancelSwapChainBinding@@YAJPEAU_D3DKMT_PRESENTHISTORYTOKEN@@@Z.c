/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A420
 * Callers:
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01BC05C (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C0160 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0394760 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000AEEC (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C00105A8 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v2; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v4; // rax
  struct DXGGLOBAL *v5; // rax
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *v7; // rax
  struct DXGGLOBAL *v8; // rax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *v10; // r14
  void *FenceValue; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  struct DXGGLOBAL *v14; // rax
  void *hCompSurf; // rcx
  struct DXGGLOBAL *v16; // rax
  struct DXGGLOBAL *v17; // rax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 38069) + 472LL))();
  v4 = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v4 + 38069) + 504LL))()
    || !(unsigned int)IsTokenManagerReady()
    || (v5 = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v5 + 38069) + 488LL))()) )
  {
    v2 = -1071775730;
  }
  v6 = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v6 + 38069) + 520LL))();
  if ( v2 >= 0 )
  {
    v7 = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v7 + 38069) + 408LL))();
    v8 = DXGGLOBAL::GetGlobal();
    v9 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v8 + 38069) + 536LL))();
    v10 = v9;
    if ( v9 )
    {
      KeStackAttachProcess(v9, &ApcState);
      if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      {
        FenceValue = (void *)a1->Token.Flip.FenceValue;
        if ( FenceValue )
        {
          Object = 0LL;
          v2 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object);
          if ( v2 >= 0 )
          {
            v12 = Object;
            v13 = *((_QWORD *)Object + 13);
            *((_QWORD *)Object + 13) = 0LL;
            if ( v13 )
            {
              v14 = DXGGLOBAL::GetGlobal();
              (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 38069) + 48LL))(v13, 1LL);
            }
            (*(void (__fastcall **)(_QWORD *))(v12[5] + 56LL))(v12 + 5);
            ObfDereferenceObject(v12);
            v2 = ObCloseHandle(FenceValue, 1);
            if ( v2 >= 0 )
              a1->Token.Flip.FenceValue = 0LL;
          }
        }
      }
      else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        hCompSurf = (void *)a1->Token.Flip.hCompSurf;
        if ( hCompSurf )
        {
          v2 = ObCloseHandle(hCompSurf, 1);
          if ( v2 >= 0 )
            a1->Token.Flip.hCompSurf = 0LL;
        }
      }
      KeUnstackDetachProcess(&ApcState);
      v16 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v16 + 38069) + 464LL))(v10);
    }
    v17 = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v17 + 38069) + 448LL))();
  }
  return (unsigned int)v2;
}
