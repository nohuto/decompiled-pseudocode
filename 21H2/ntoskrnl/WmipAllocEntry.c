/*
 * XREFs of WmipAllocEntry @ 0x140758280
 * Callers:
 *     WmipAddDataSource @ 0x140756A68 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x1407581E8 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407BEAAC (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407C4640 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x1409339E8 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140414300 (memset.c)
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
