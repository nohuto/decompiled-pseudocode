/*
 * XREFs of ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F8758
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18004FEF0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F88D0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::NotifyTargetsOfOcclusionChange(CRenderTargetManager *this)
{
  __int64 *v2; // r14
  int v3; // edi
  __int64 *i; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 576) = 1;
  v2 = (__int64 *)*((_QWORD *)this + 2);
  v3 = 0;
  for ( i = (__int64 *)*((_QWORD *)this + 1); i != v2; ++i )
  {
    v6 = *i;
    v10 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v6, &GUID_12cee53f_ea34_40cf_8dd9_24a64ad480fe, &v10) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
      v9 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x268u, 0LL);
      if ( !v3 || v3 >= 0 && v9 < 0 )
        v3 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
