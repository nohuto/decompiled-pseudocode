/*
 * XREFs of WmipAllocEntry @ 0x1407578B0
 * Callers:
 *     WmipAddDataSource @ 0x140756098 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140757818 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407BEADC (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407C48E0 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x140933868 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202C74 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140413800 (memset.c)
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
