/*
 * XREFs of RtlpHpSegMgrVaCtxInitialize @ 0x14024EFA8
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1403625F8 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegContextInitialize @ 0x14036F8F8 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x140362864 (RtlpHpQueryVA.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInitialize(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_OWORD *)(a1 + 40);
  v9 = 0LL;
  v8 = v4;
  RtlpHpQueryVA(a2, &v8, &v9, &v10);
  result = v9;
  *(_WORD *)(v9 + 2) = (1 << (a4 / a3)) - 2;
  *(_QWORD *)(result + 8) = -1LL;
  return result;
}
