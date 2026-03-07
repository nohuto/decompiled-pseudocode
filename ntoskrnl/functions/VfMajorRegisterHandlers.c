void __fastcall VfMajorRegisterHandlers(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rax
  _QWORD *v14; // rcx

  if ( a1 == 0xFF )
  {
    v13 = 28LL;
  }
  else
  {
    if ( a1 > 0x1Bu )
      return;
    v13 = a1;
  }
  v14 = (_QWORD *)((char *)&ViMajorVerifierRoutines + 96 * v13);
  v14[3] = a5;
  v14[4] = a6;
  v14[5] = a7;
  v14[6] = a8;
  v14[7] = a9;
  v14[8] = a10;
  v14[9] = a11;
  v14[10] = a12;
  v14[11] = a13;
  v14[1] = a3;
  v14[2] = a4;
  *v14 = a2;
}
