/*
 * XREFs of ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01BF6DC
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C03D0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C01C0BAC (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 * Callees:
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01BF73C (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(struct CCD_TOPOLOGY *a1, char a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int v5; // edi
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)a1 + 8);
  v7[0] = a1;
  v7[1] = v2;
  v8 = a2;
  v4 = CCD_BTL_CLONE_GROUP_RESOLVER::operator()(v7);
  v5 = v4;
  if ( v4 == -1073741275 )
  {
    WdLogSingleEntry4(3LL, -1073741275LL, a1, *((_QWORD *)a1 + 8), a1);
    return 3221226021LL;
  }
  else if ( v4 < 0 )
  {
    WdLogSingleEntry4(2LL, v4, a1, *((_QWORD *)a1 + 8), a1);
    return v5;
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a1 + 8) + 20LL) = *((_WORD *)a1 + 16);
    return 0LL;
  }
}
