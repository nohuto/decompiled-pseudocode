/*
 * XREFs of ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03B4DF8
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C017E6B8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(DMMVIDPNTARGET **this, struct _D3DDDI_RATIONAL *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rax
  unsigned int v5; // ebx
  struct DMMVIDPNTARGETMODESET *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v4 = *((_QWORD *)v7 + 18);
  if ( v4 )
  {
    v5 = 0;
    *v3 = *(_QWORD *)(v4 + 152);
  }
  else
  {
    v5 = 1075708679;
    WdLogSingleEntry2(2LL, v2, 1075708679LL);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v7, 0LL);
  return v5;
}
