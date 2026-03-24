/*
 * XREFs of ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C013F88C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0141B10 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C014B0F4 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 * Callees:
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C013F7E0 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(struct CCD_TOPOLOGY *a1, char a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)a1 + 8);
  v12[0] = a1;
  v12[1] = v2;
  v13 = a2;
  v4 = CCD_BTL_CLONE_GROUP_RESOLVER::operator()((__int64)v12);
  v8 = v4;
  if ( v4 == -1073741275 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
    v10[3] = -1073741275LL;
    v10[4] = a1;
    v10[5] = *((_QWORD *)a1 + 8);
    v10[6] = a1;
    WdLogEvent5_WdWarning(v10);
    return 3221226021LL;
  }
  else if ( v4 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v11[3] = v8;
    v11[4] = a1;
    v11[5] = *((_QWORD *)a1 + 8);
    v11[6] = a1;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v8;
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a1 + 8) + 20LL) = *((_WORD *)a1 + 16);
    return 0LL;
  }
}
