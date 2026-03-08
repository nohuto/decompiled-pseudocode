/*
 * XREFs of ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01BB028
 * Callers:
 *     ?RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C01BB000 (-RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01BB1EC (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01BB2A4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(_DWORD **a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  struct DXGGLOBAL *Global; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 result; // rax
  _BYTE v13[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0LL;
  do
  {
    v2 += 2048LL;
    operator delete(a1[2]);
    if ( v2 >= 0x4000 )
      return 3221225473LL;
    v3 = 2 * (v2 >> 1);
    if ( !is_mul_ok(v2 >> 1, 2uLL) )
      v3 = -1LL;
    v4 = operator new[](v3, 0x63644356u, 256LL);
    a1[2] = (_DWORD *)v4;
    if ( !v4 )
    {
      WdLogSingleEntry2(6LL, v2, a1);
      return 3221225495LL;
    }
    *((_WORD *)a1 + 5) = v2;
    *((_WORD *)a1 + 4) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::IterateAdaptersWithCallback(
           Global,
           BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_,
           a1,
           4LL);
    v11 = v6;
  }
  while ( v6 == -1073741789 );
  if ( v6 >= 0 )
  {
    if ( *((_WORD *)a1 + 4) )
    {
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v13, (const struct _UNICODE_STRING *)(a1 + 1));
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)*a1);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v13);
      v11 = **a1;
    }
    else
    {
      v11 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = a1;
    }
  }
  operator delete(a1[2]);
  result = v11;
  a1[2] = 0LL;
  return result;
}
