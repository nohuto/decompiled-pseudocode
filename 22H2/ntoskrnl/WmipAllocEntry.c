/*
 * XREFs of WmipAllocEntry @ 0x14086B3D0
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1408002C8 (WmipUpdateModifyGuid.c)
 *     WmipAddMofResource @ 0x1408111EC (WmipAddMofResource.c)
 *     WmipAllocGuidEntry @ 0x140843874 (WmipAllocGuidEntry.c)
 *     WmipAddDataSource @ 0x14086A5B0 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x1409E1C1C (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B00 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140435400 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1);
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
