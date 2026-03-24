/*
 * XREFs of ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02E98CC
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E90D0 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000C988 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2)
{
  __int64 v2; // r8
  bool v3; // bl
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // edi
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rdx

  v2 = *((_QWORD *)this + 12);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(v7 + 144);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a2 + 12);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(v12 + 144);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v8, v13) )
  {
    v17 = *((_QWORD *)this + 11);
    v18 = *(_QWORD *)(v17 + 104);
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
      v19 = *(_QWORD *)(v17 + 104);
    }
    else
    {
      v19 = 0LL;
    }
    v20 = *(_QWORD *)(v19 + 144);
    if ( !v20 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = *((_QWORD *)a2 + 11);
    v23 = *(_QWORD *)(v22 + 104);
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
      v24 = *(_QWORD *)(v22 + 104);
    }
    else
    {
      v24 = 0LL;
    }
    v25 = *(_QWORD *)(v24 + 144);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = *(_DWORD *)(v20 + 96);
    v28 = *(_DWORD *)(v25 + 96);
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 88), v15);
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 88), v29);
    v3 = v27 == v28;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 88), v15);
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 88), v30);
  return v3;
}
