/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01D2EF4
 * Callers:
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A1980 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A2430 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(struct DMMVIDPNTOPOLOGY *a1)
{
  char *v2; // rsi
  char *v3; // rbx
  char *v4; // rbx
  DMMVIDPNTARGET *v5; // rdi
  struct DMMVIDPNTARGETMODESET *v6; // rdi
  __int64 v7; // rdi
  char *v8; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  struct DMMVIDPNTARGETMODESET *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  v2 = (char *)a1 + 24;
  v3 = (char *)*((_QWORD *)a1 + 3);
  if ( v3 == v2 )
    return 1;
  v4 = v3 - 8;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v5 = (DMMVIDPNTARGET *)*((_QWORD *)v4 + 11);
    if ( !v5 )
      WdLogSingleEntry0(1LL);
    v6 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v5);
    if ( !v6 )
      WdLogSingleEntry0(1LL);
    v12 = v6;
    v7 = *((_QWORD *)v6 + 18);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v12, 0LL);
    if ( v7 )
    {
      v10 = *(int *)(v7 + 96);
      if ( (unsigned int)v10 <= 0x29 )
      {
        v11 = 0x20003900000LL;
        if ( _bittest64(&v11, v10) )
          break;
      }
    }
    v8 = (char *)*((_QWORD *)v4 + 1);
    v4 = v8 - 8;
    if ( v8 == v2 )
      v4 = 0LL;
    if ( !v4 )
      return 1;
  }
  return 0;
}
