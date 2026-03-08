/*
 * XREFs of ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01BF2D8
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C01BF2B0 (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C01BF35C (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C01C0C8C (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v5; // r8
  CCD_SET_STRING_ID *v6; // rbx
  int SetIdFromRegistry; // eax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v2 = (int)a2;
  v8 = 0LL;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(a2, &v8);
  result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v2, 0LL);
  if ( !result )
  {
    LOBYTE(v5) = 1;
    result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v2, v5);
    v6 = (CCD_SET_STRING_ID *)result;
    if ( result )
    {
      SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*(void **)(a1 + 96), *((const WCHAR **)&v8 + 1), result);
      if ( SetIdFromRegistry < 0 )
      {
        WdLogSingleEntry4(3LL, SetIdFromRegistry, v2, a1, *(_QWORD *)(a1 + 96));
        CCD_SET_STRING_ID::_Cleanup(v6);
      }
      return (__int64)v6;
    }
  }
  return result;
}
