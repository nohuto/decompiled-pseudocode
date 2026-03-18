/*
 * XREFs of HvpGetCellContextMove @ 0x14070AAB8
 * Callers:
 *     HvReallocateCell @ 0x140709E60 (HvReallocateCell.c)
 *     HvpDoAllocateCell @ 0x14070A4F0 (HvpDoAllocateCell.c)
 *     CmpRemoveSubKeyFromList @ 0x14070BDD0 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x14070C27C (CmpMarkIndexDirtyInStorageType.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140AF6200 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpGetCellContextMove(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2 + 4;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a2 + 4);
  HvpGetBinContextInitialize(a2 + 4);
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)a2 = -1;
  return HvpGetBinContextInitialize(v2);
}
