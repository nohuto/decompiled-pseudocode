/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01C191C
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C01C3A50 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01BB2A4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C01BF35C (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C01C0C8C (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C01C2288 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbp
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  int v10; // eax
  CCD_SET_STRING_ID *v11; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  if ( (unsigned int)a3 <= 8 && (v6 = 278, _bittest(&v6, a3)) )
  {
    ValueName = 0LL;
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(15, (__int64)&ValueName);
    v7 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_10;
    TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, 15, 1);
    if ( TopologySetIdByClass )
      CCD_SET_STRING_ID::operator=(TopologySetIdByClass, a2);
    ValueName = 0LL;
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(v3, (__int64)&ValueName);
    v10 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v8 = v10;
    if ( v10 < 0 )
    {
LABEL_10:
      WdLogSingleEntry5(2LL, v8, a2, v3, a1, *(_QWORD *)(a1 + 96));
    }
    else
    {
      v11 = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, v3, 1);
      if ( v11 )
        CCD_SET_STRING_ID::operator=(v11, a2);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry4(1LL, a2, a3, a1, *(_QWORD *)(a1 + 96));
    return 3221225485LL;
  }
}
