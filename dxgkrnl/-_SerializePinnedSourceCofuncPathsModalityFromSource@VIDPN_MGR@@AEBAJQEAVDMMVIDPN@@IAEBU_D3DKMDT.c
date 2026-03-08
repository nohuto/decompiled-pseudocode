/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03ABC4C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C03AAFC4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03B2444 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  DMMVIDPNTARGET *v9; // rax
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  struct DMMVIDPNSOURCEMODESET *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  struct DMMVIDPNSOURCEMODESET *v22; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v5 == -1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v9 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v5);
  if ( v9 )
  {
    v22 = 0LL;
    v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v9);
    if ( !v11 )
      WdLogSingleEntry0(1LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v22, (__int64)v11);
    v12 = v22;
    v13 = VIDPN_MGR::PinVidPnSourceMode(this, v22, a4);
    v18 = v13;
    if ( v13 >= 0 )
    {
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v22, 0LL);
      v20 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
      v21 = v20;
      if ( v20 >= 0 )
      {
        return 0LL;
      }
      else
      {
        if ( !*((_QWORD *)this + 1) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry3(2LL, v5, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v21);
        return (unsigned int)v21;
      }
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v19[3] = a4;
      v19[4] = v12;
      v19[5] = v18;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v22, 0LL);
      return (unsigned int)v18;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    return 3223192324LL;
  }
}
