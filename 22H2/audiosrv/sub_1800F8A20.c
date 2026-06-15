/*
 * XREFs of sub_1800F8A20 @ 0x1800F8A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 */

__int64 __fastcall sub_1800F8A20(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v4 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"s_pbmPlayToStreamStateChanged");
  v8 = 0;
  if ( (unsigned int)IsPbmPlayToStreamStateChangedSupported() )
    v8 = PbmPlayToStreamStateChanged(a1, a2);
  sub_18000F690((__int64)pv, v6, v7);
  return v8;
}
