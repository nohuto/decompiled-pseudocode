/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0078B2C
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0077D98 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0078650 (--0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0078CD4 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0078FE8 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  bool v5; // di
  CFlipToken *v10; // rax
  CFlipToken *v11; // rax
  __int64 v12; // r8
  struct CFlipToken *v13; // rbx
  int v14; // edi
  bool v16; // [rsp+50h] [rbp+18h] BYREF

  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v5 = 1;
  *a4 = 0LL;
  v16 = 1;
  if ( (*(_DWORD *)&Value & 0x42000) == 0x2000 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v16);
    v5 = v16;
  }
  v10 = (CFlipToken *)operator new[](0x250uLL, 0x6F744D54u, 256LL);
  if ( v10 && (v11 = CFlipToken::CFlipToken(v10, a1, this), (v13 = v11) != 0LL) )
  {
    LOBYTE(v12) = v5;
    v14 = CFlipToken::InitializeCompleted(v11, a3, v12);
    if ( v14 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v13)(v13, 1LL);
    else
      *a4 = v13;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
