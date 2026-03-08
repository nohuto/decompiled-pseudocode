/*
 * XREFs of RtlpHpSegMgrVaCtxInitialize @ 0x14030C2C4
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1403085F4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegContextInitialize @ 0x140375540 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x140309578 (RtlpHpQueryVA.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInitialize(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  RtlpHpQueryVA(a2, a2, &v7, &v8);
  result = v7;
  *(_WORD *)(v7 + 2) = (1 << (a4 / a3)) - 2;
  *(_QWORD *)(result + 8) = -1LL;
  return result;
}
