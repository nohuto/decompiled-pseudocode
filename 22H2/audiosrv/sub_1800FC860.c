/*
 * XREFs of sub_1800FC860 @ 0x1800FC860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FB8A4 @ 0x1800FB8A4 (sub_1800FB8A4.c)
 */

void __fastcall sub_1800FC860(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_WORK Work)
{
  __int128 v3; // xmm0
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = *(_OWORD *)(Context + 8);
  v7 = *((_DWORD *)Context + 6);
  v5 = *(_QWORD *)Context;
  v6 = v3;
  sub_1800FB8A4(*((_QWORD *)Context + 4), v5, (__int64)&v6);
  sub_1800FA128(Context);
}
