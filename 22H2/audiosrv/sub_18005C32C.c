/*
 * XREFs of sub_18005C32C @ 0x18005C32C
 * Callers:
 *     sub_18005C280 @ 0x18005C280 (sub_18005C280.c)
 * Callees:
 *     sub_18005C3D8 @ 0x18005C3D8 (sub_18005C3D8.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_18005C32C(__int64 a1)
{
  memset((void *)(a1 + 8), 0, 0x208uLL);
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)a1 = off_180146F18;
  *(_OWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  sub_18005C3D8(a1 + 568);
  *(_QWORD *)a1 = off_180147C08;
  *(_QWORD *)(a1 + 568) = off_180147BC0;
  *(_QWORD *)(a1 + 576) = off_180147B78;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 616), 0, 0);
  return a1;
}
