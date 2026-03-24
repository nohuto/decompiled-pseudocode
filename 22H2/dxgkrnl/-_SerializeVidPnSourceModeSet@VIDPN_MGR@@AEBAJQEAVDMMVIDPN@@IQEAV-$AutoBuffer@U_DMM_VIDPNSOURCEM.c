/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1C24
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DAB84 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009260 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9F40 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  DMMVIDPNSOURCEMODESET *v29; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(a2 + 304), v4);
  v14 = v11;
  if ( !v11 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v4;
    WdLogEvent5_WdError(v15);
    return 3223192324LL;
  }
  v29 = 0LL;
  v17 = *(_QWORD *)(v11 + 104);
  if ( !v17 )
  {
    v18 = 0LL;
LABEL_12:
    v19 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v19);
    goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
  v18 = *(_QWORD *)(v14 + 104);
  if ( !v18 )
    goto LABEL_12;
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v29, v18);
  v20 = DMMVIDPNSOURCEMODESET::Serialize(v29);
  v23 = v20;
  if ( v20 >= 0 )
  {
    LODWORD(v23) = 0;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v26[3] = v4;
    v27 = *(_QWORD *)(a1 + 8);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v25, v24);
      WdLogEvent5_WdAssertion(v28);
      v27 = *(_QWORD *)(a1 + 8);
    }
    v26[4] = *(_QWORD *)(v27 + 16);
    v26[5] = v23;
    WdLogEvent5_WdError(v26);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v29, 0LL);
  return (unsigned int)v23;
}
