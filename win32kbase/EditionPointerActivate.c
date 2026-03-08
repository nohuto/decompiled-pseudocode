/*
 * XREFs of EditionPointerActivate @ 0x1C0271A8C
 * Callers:
 *     ApiSetEditionPointerActivate @ 0x1C0240FB0 (ApiSetEditionPointerActivate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall EditionPointerActivate(_OWORD *a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v7[7]; // [rsp+30h] [rbp-78h] BYREF

  result = qword_1C02D7690;
  if ( qword_1C02D7690 )
  {
    v2 = a1[1];
    v7[0] = *a1;
    v7[2] = a1[2];
    v3 = a1[4];
    v7[1] = v2;
    v4 = a1[3];
    v7[4] = v3;
    v5 = a1[6];
    v7[3] = v4;
    v6 = a1[5];
    v7[6] = v5;
    v7[5] = v6;
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D7690(v7);
  }
  return result;
}
