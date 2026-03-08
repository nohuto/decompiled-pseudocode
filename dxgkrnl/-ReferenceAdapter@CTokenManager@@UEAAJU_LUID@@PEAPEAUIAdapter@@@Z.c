/*
 * XREFs of ?ReferenceAdapter@CTokenManager@@UEAAJU_LUID@@PEAPEAUIAdapter@@@Z @ 0x1C0077140
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z @ 0x1C0077564 (-ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z.c)
 */

__int64 __fastcall CTokenManager::ReferenceAdapter(CTokenManager *this, struct _LUID a2, struct IAdapter **a3)
{
  __int64 result; // rax
  struct CAdapter *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  result = CAdapterCollection::ReferenceAdapter((CTokenManager *)((char *)this + 112), a2, &v5);
  *a3 = v5;
  return result;
}
