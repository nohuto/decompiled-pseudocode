__int64 (__fastcall *__fastcall SetManipulationInputTargetTransform(_OWORD *a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v6[7]; // [rsp+30h] [rbp-78h] BYREF

  result = qword_1C02D7B40;
  if ( qword_1C02D7B40 )
  {
    v2 = a1[1];
    v6[0] = *a1;
    v6[2] = a1[2];
    v3 = a1[4];
    v6[1] = v2;
    v4 = a1[3];
    v6[4] = v3;
    v5 = a1[6];
    v6[3] = v4;
    v6[5] = a1[5];
    v6[6] = v5;
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D7B40(v6);
  }
  return result;
}
