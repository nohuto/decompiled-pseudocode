/*
 * XREFs of xxxUpdateClientRect @ 0x1C023F430
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 */

__int64 __fastcall xxxUpdateClientRect(_QWORD *a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1[5] + 88LL);
  xxxCalcClientRect(a1, &v3, 0);
  *(_OWORD *)(a1[5] + 104LL) = v3;
  return 1LL;
}
