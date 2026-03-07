__int64 __fastcall PiDmGetCmObjectConstraintListFromCache(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  int v7; // r10d
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v9[1] = a4;
  v7 = 0;
  v9[0] = a3;
  v11 = 0;
  switch ( LODWORD(qword_1400081E0[5 * a1]) )
  {
    case 1:
      v7 = 1;
      break;
    case 2:
      v7 = 2;
      break;
    case 3:
      v7 = 3;
      break;
    case 4:
      v7 = 4;
      break;
    case 5:
      v7 = 5;
      break;
    case 6:
      v7 = 6;
      break;
  }
  v10 = v7;
  return PiDmGetObjectConstraintList(a1, a2, 5 * a1, (unsigned int)v9, a5, a6, a7);
}
