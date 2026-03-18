/*
 * XREFs of ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000ACBC
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C0160 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02E34A0 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000AA64 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000AEEC (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A7D8 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A94C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall DxgkQuerySwapChainBindingStatus(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // ebx
  void *FenceValue; // rbp
  int v6; // edi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rax
  int v9; // eax
  struct DXGGLOBAL *v10; // rax
  struct DXGGLOBAL *v11; // rax
  _QWORD *v12; // rsi
  NTSTATUS v13; // eax
  _QWORD *v14; // rbp
  UINT64 CompositionSyncKey; // rsi
  struct DXGGLOBAL *v16; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
  {
    FenceValue = (void *)a2->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      v6 = 0;
      Handle = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      (*(void (**)(void))(*((_QWORD *)Global + 38069) + 472LL))();
      v8 = DXGGLOBAL::GetGlobal();
      v9 = (*(__int64 (**)(void))(*((_QWORD *)v8 + 38069) + 504LL))();
      if ( !a1
        || v9
        || !(unsigned int)IsTokenManagerReady()
        || (v10 = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v10 + 38069) + 488LL))()) )
      {
        v6 = -1071775730;
      }
      v11 = DXGGLOBAL::GetGlobal();
      (*(void (**)(void))(*((_QWORD *)v11 + 38069) + 520LL))();
      if ( v6 < 0 )
        goto LABEL_23;
      Object = 0LL;
      v12 = 0LL;
      v13 = ObReferenceObjectByHandle(FenceValue, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
      v14 = Object;
      v6 = v13;
      if ( v13 >= 0 )
      {
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 2 )
        {
          v12 = v14;
        }
        else
        {
          ObfDereferenceObject(v14);
          v6 = -1073741788;
        }
      }
      if ( v6 < 0 )
        goto LABEL_23;
      v6 = CPushLock::AcquireLockShared((CPushLock *)(v12 + 9));
      if ( v6 >= 0 )
      {
        if ( *((_DWORD *)v12 + 16) )
          v6 = -1073741823;
        else
          (*(void (__fastcall **)(_QWORD *))(v12[5] + 16LL))(v12 + 5);
        CPushLock::ReleaseLock((CPushLock *)(v12 + 9));
      }
      if ( v6 >= 0 )
      {
        v6 = DxgkCompositionObject::OpenDwmHandle(v12, &Handle);
        if ( v6 >= 0 )
          a2->Token.Flip.FenceValue = (UINT64)Handle;
      }
      ObfDereferenceObject(v12);
      if ( v6 < 0 )
      {
LABEL_23:
        CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
        if ( CompositionSyncKey )
        {
          v16 = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(UINT64, __int64))(*((_QWORD *)v16 + 38069) + 48LL))(CompositionSyncKey, 1LL);
        }
      }
      return (unsigned int)v6;
    }
  }
  else if ( a2->Model == D3DKMT_PM_FLIPMANAGER )
  {
    return (unsigned int)NotifyPendingFlipManagerPresent(a1, a2);
  }
  else
  {
    return (unsigned int)NotifyPendingFlipPresent(a1, a2);
  }
  return v2;
}
