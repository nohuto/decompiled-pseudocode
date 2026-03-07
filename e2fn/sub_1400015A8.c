_QWORD *__fastcall sub_1400015A8(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  PVOID v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  PVOID v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  PVOID v12; // rdi
  CSHORT Hour; // [rsp+20h] [rbp-60h] BYREF
  __int16 v15; // [rsp+22h] [rbp-5Eh]
  __int16 v16; // [rsp+24h] [rbp-5Ch]
  _LARGE_INTEGER SystemTime; // [rsp+30h] [rbp-50h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-30h]
  unsigned __int64 v21; // [rsp+58h] [rbp-28h]
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  KeQuerySystemTimePrecise(&SystemTime);
  LocalTime.QuadPart = 0LL;
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  TimeFields = 0LL;
  RtlTimeToTimeFields(&LocalTime, &TimeFields);
  Hour = TimeFields.Hour;
  v15 = 10;
  v16 = 10;
  sub_14000126C((__int64)a1, &Hour);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  if ( a1[2] )
    sub_140001480(a1, v5, v4);
  else
    sub_1400011A8(a1, v5, v4);
  Hour = TimeFields.Minute;
  v15 = 10;
  v16 = 10;
  sub_14000126C((__int64)v19, &Hour);
  v6 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v21);
  else
    sub_1400011A8(a1, (__int64)P, v21);
  if ( v6 )
    ExFreePool(v6);
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 16);
  if ( a1[2] )
    sub_140001480(a1, v8, v7);
  else
    sub_1400011A8(a1, v8, v7);
  Hour = TimeFields.Second;
  v15 = 10;
  v16 = 10;
  sub_14000126C((__int64)v19, &Hour);
  v9 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v21);
  else
    sub_1400011A8(a1, (__int64)P, v21);
  if ( v9 )
    ExFreePool(v9);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_QWORD *)(a2 + 16);
  if ( a1[2] )
    sub_140001480(a1, v11, v10);
  else
    sub_1400011A8(a1, v11, v10);
  Hour = TimeFields.Milliseconds;
  v15 = 10;
  v16 = 10;
  sub_14000126C((__int64)v19, &Hour);
  v12 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v21);
  else
    sub_1400011A8(a1, (__int64)P, v21);
  if ( v12 )
    ExFreePool(v12);
  return a1;
}
