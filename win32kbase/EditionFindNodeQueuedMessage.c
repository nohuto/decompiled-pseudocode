/*
 * XREFs of EditionFindNodeQueuedMessage @ 0x1C0271868
 * Callers:
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C023DF00 (ApiSetEditionFindNodeQueuedMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall EditionFindNodeQueuedMessage(_OWORD *a1, __int64 a2))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[7]; // [rsp+30h] [rbp-78h] BYREF

  result = qword_1C02D7C40;
  if ( qword_1C02D7C40 )
  {
    v3 = a1[1];
    v8[0] = *a1;
    v8[2] = a1[2];
    v4 = a1[4];
    v8[1] = v3;
    v5 = a1[3];
    v8[4] = v4;
    v6 = a1[6];
    v8[3] = v5;
    v7 = a1[5];
    v8[6] = v6;
    v8[5] = v7;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D7C40(v8, a2, 1LL);
  }
  return result;
}
