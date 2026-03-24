/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1403634A4
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140722968 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140722C04 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140724FE8 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x140873678 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403F9F60 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
