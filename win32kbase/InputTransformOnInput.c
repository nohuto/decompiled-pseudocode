/*
 * XREFs of InputTransformOnInput @ 0x1C00F64D0
 * Callers:
 *     ApiSetInputTransformOnInput @ 0x1C0245230 (ApiSetInputTransformOnInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall InputTransformOnInput(_OWORD *a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _OWORD v8[7]; // [rsp+20h] [rbp-78h] BYREF

  result = qword_1C02D7AB0;
  if ( qword_1C02D7AB0 )
  {
    v2 = a1[1];
    v8[0] = *a1;
    v3 = a1[2];
    v8[1] = v2;
    v4 = a1[3];
    v8[2] = v3;
    v5 = a1[4];
    v8[3] = v4;
    v6 = a1[5];
    v8[4] = v5;
    v7 = a1[6];
    v8[5] = v6;
    v8[6] = v7;
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D7AB0(v8);
  }
  return result;
}
