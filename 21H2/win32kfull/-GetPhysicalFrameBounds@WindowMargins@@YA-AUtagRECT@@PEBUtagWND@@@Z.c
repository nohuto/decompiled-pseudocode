/*
 * XREFs of ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C016DF68
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01DFA08 (LogicalToPhysicalInPlaceRect.c)
 */

struct tagRECT *__fastcall WindowMargins::GetPhysicalFrameBounds(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  _DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)this = *(_OWORD *)WindowMargins::ReduceRect(
                                 v6,
                                 (struct tagWND *)retstr,
                                 (_DWORD *)(*(_QWORD *)&retstr[2].right + 88LL));
  LogicalToPhysicalInPlaceRect(retstr, this);
  return (struct tagRECT *)this;
}
