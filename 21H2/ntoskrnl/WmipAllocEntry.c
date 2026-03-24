/*
 * XREFs of WmipAllocEntry @ 0x1407580C0
 * Callers:
 *     WmipAddDataSource @ 0x1407568A8 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140758028 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407BE31C (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407C4120 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x140933818 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202CB4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140414200 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
