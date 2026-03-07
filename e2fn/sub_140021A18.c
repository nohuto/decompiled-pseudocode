_QWORD *__fastcall sub_140021A18(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 (__fastcall **v5)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v6; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]

  v5 = &off_1400D41D0;
  v6 = 0;
  P = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  sub_1400011A8(&v5, (__int64)L"Tx Counters", 0xBuLL);
  sub_14007C1E8(a1, &v5, a2, 1000LL);
  v5 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *a1 = &off_1400D6058;
  a1[7] = off_1400D6080;
  a1[25] = off_1400D60B0;
  a1[44] = off_1400D60F8;
  a1[54] = 0xA5A5A5A5A5000066uLL;
  result = a1;
  a1[55] = 0LL;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[58] = 0LL;
  a1[60] = 0LL;
  return result;
}
