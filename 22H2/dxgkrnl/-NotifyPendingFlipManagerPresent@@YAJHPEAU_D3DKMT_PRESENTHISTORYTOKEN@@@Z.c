/*
 * XREFs of ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A7D8
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000ACBC (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000AEEC (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C00105A8 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0027E90 (-GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C007A774 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall NotifyPendingFlipManagerPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // r14
  unsigned __int64 v3; // rbp
  int v6; // edi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rax
  int v9; // eax
  struct DXGGLOBAL *v10; // rax
  struct DXGGLOBAL *v11; // rax
  int v12; // eax
  FlipManagerTokenObject *v13; // rbx
  struct DXGGLOBAL *v14; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v3 = 0LL;
  v17 = 0LL;
  v6 = 0;
  Global = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 38069) + 472LL))();
  v8 = DXGGLOBAL::GetGlobal();
  v9 = (*(__int64 (**)(void))(*((_QWORD *)v8 + 38069) + 504LL))();
  if ( a1
    && !v9
    && (unsigned int)IsTokenManagerReady()
    && (v10 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v10 + 38069) + 488LL))()) )
  {
    if ( (a2->Token.Gdi.ScrollRect.left & 4) != 0 )
      v6 = -1073741811;
  }
  else
  {
    v6 = -1071775730;
  }
  v11 = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v11 + 38069) + 520LL))();
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1071775730 )
    goto LABEL_21;
  Object = 0LL;
  v12 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 5, &Object);
  if ( v12 < 0 )
  {
    if ( v6 < 0 )
      return (unsigned int)v6;
    v6 = v12;
    goto LABEL_21;
  }
  v13 = (FlipManagerTokenObject *)Object;
  if ( v6 < 0 || (v6 = FlipManagerTokenObject::MarkPending((FlipManagerTokenObject *)Object), v6 < 0) )
  {
    FlipManagerTokenObject::GetAndClearSyncId(v13, &v17);
    v3 = v17;
  }
  else
  {
    a2->Token.Gdi.ScrollRect.left |= 4u;
    a2->Token.Flip.FenceValue = (UINT64)v13;
  }
  if ( (a2->Token.Gdi.ScrollRect.left & 4) == 0 )
    ObfDereferenceObject(v13);
  if ( v6 < 0 )
  {
LABEL_21:
    if ( v3 )
    {
      v14 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(unsigned __int64, __int64))(*((_QWORD *)v14 + 38069) + 48LL))(v3, 1LL);
    }
  }
  return (unsigned int)v6;
}
