/*
 * XREFs of sub_1800552C8 @ 0x1800552C8
 * Callers:
 *     sub_18005535C @ 0x18005535C (sub_18005535C.c)
 * Callees:
 *     sub_180055210 @ 0x180055210 (sub_180055210.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_1800552C8(__int64 a1)
{
  memset((void *)(a1 + 8), 0, 0x208uLL);
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)a1 = off_180146F18;
  *(_OWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  sub_180055210(a1 + 568);
  *(_QWORD *)a1 = &off_180146DE8;
  *(_QWORD *)(a1 + 568) = off_180146DA8;
  *(_QWORD *)(a1 + 576) = off_180146D60;
  return a1;
}
