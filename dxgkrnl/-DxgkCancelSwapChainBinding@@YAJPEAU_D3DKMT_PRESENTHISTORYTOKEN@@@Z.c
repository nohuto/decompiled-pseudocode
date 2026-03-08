/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079780
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C94F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01CA280 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038FEB0 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x1C0007808 (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D828 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DE1C (-IsTokenManagerReady@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage @ 0x1C0026DD8 (Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v2; // ebx
  __int64 Win32kImportTable; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *v10; // r14
  void *FenceValue; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  void *hCompSurf; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (**)(void))(Win32kImportTable + 472))();
  v4 = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(v4 + 504))()
    || !(unsigned int)IsTokenManagerReady()
    || (v5 = DxgkGetWin32kImportTable(), !(*(unsigned int (**)(void))(v5 + 488))()) )
  {
    v2 = -1071775730;
  }
  v6 = DxgkGetWin32kImportTable();
  (*(void (**)(void))(v6 + 520))();
  if ( v2 >= 0 )
  {
    v7 = DxgkGetWin32kImportTable();
    (*(void (**)(void))(v7 + 408))();
    v8 = DxgkGetWin32kImportTable();
    v9 = (struct _KPROCESS *)(*(__int64 (**)(void))(v8 + 536))();
    v10 = v9;
    if ( !v9 )
    {
LABEL_22:
      v18 = DxgkGetWin32kImportTable();
      (*(void (**)(void))(v18 + 448))();
      return (unsigned int)v2;
    }
    KeStackAttachProcess(v9, &ApcState);
    if ( a1->Model != D3DKMT_PM_REDIRECTED_COMPOSITION )
    {
      if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        hCompSurf = (void *)a1->Token.Flip.hCompSurf;
        if ( hCompSurf )
        {
          v2 = ObCloseHandle(hCompSurf, 1);
          if ( v2 >= 0 )
            a1->Token.Flip.hCompSurf = 0LL;
        }
      }
      goto LABEL_21;
    }
    FenceValue = (void *)a1->Token.Flip.FenceValue;
    if ( !FenceValue || (Object = 0LL, v2 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object), v2 < 0) )
    {
LABEL_21:
      KeUnstackDetachProcess(&ApcState);
      v17 = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(struct _KPROCESS *))(v17 + 464))(v10);
      goto LABEL_22;
    }
    v12 = Object;
    if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() )
    {
      v15 = v12[13];
      v12[13] = 0LL;
      if ( !v15 )
        goto LABEL_15;
      v13 = DxgkGetWin32kImportTable();
      v14 = v15;
    }
    else
    {
      v13 = DxgkGetWin32kImportTable();
      v14 = v12[13];
    }
    (*(void (__fastcall **)(__int64, __int64))(v13 + 48))(v14, 1LL);
LABEL_15:
    (*(void (__fastcall **)(_QWORD *))(v12[5] + 56LL))(v12 + 5);
    ObfDereferenceObject(v12);
    v2 = ObCloseHandle(FenceValue, 1);
    if ( v2 >= 0 )
      a1->Token.Flip.FenceValue = 0LL;
    goto LABEL_21;
  }
  return (unsigned int)v2;
}
