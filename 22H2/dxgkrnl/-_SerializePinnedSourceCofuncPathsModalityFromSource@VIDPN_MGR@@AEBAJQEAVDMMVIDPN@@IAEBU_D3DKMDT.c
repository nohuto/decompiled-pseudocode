/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1A34
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DAB84 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009260 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C02E062C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E7234 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  struct DMMVIDPNSOURCEMODESET *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  struct DMMVIDPNSOURCEMODESET *v35; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(a2 + 304), v5);
  v15 = v12;
  if ( !v12 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v5;
    WdLogEvent5_WdError(v16);
    return 3223192324LL;
  }
  v35 = 0LL;
  v18 = *(_QWORD *)(v12 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
    v19 = *(_QWORD *)(v15 + 104);
    if ( v19 )
      goto LABEL_13;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = WdLogNewEntry5_WdAssertion(v14, v13);
  WdLogEvent5_WdAssertion(v20);
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, v19);
  v21 = v35;
  v22 = VIDPN_MGR::PinVidPnSourceMode(this, v35, a4);
  v25 = v22;
  if ( v22 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
    v26[3] = a4;
    v26[4] = v21;
    v26[5] = v25;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, 0LL);
    return (unsigned int)v25;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, 0LL);
  v27 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v25 = v27;
  if ( v27 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v32[3] = v5;
    v33 = *((_QWORD *)this + 1);
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31, v30);
      WdLogEvent5_WdAssertion(v34);
      v33 = *((_QWORD *)this + 1);
    }
    v32[4] = *(_QWORD *)(v33 + 16);
    v32[5] = v25;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v25;
  }
  return 0LL;
}
