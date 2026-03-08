/*
 * XREFs of ?HrFindInterface@CFlipExSwapchainStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180269C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExSwapchainStatistics::HrFindInterface(
        unsigned __int64 this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  bool v5; // cl
  __int64 result; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data4;
  v5 = v4 == 0;
  result = v4 != 0 ? 0x80004002 : 0;
  *a3 = (void *)(this & -(__int64)v5);
  return result;
}
