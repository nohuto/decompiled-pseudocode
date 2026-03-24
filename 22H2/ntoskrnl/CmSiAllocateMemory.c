/*
 * XREFs of CmSiAllocateMemory @ 0x140362058
 * Callers:
 *     HvpViewMapCreateView @ 0x140722C04 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407D0020 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
