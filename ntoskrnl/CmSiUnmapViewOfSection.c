/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1402C0A9C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140730B54 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140730DF8 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14074C624 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140A1A654 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
