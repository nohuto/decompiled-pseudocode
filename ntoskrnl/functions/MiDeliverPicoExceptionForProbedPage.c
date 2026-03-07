__int64 __fastcall MiDeliverPicoExceptionForProbedPage(__int64 a1, int a2)
{
  __int64 v4; // rax
  char v6; // [rsp+20h] [rbp-C8h]
  _QWORD v7[20]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v7, 0, 0x98uLL);
  v4 = v7[4];
  LODWORD(v7[0]) = -1073741819;
  LODWORD(v7[3]) = 2;
  if ( a2 )
    v4 = 1LL;
  v7[5] = a1;
  v7[4] = v4;
  v6 = 0;
  return (unsigned __int8)((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD, char))xmmword_140C37D40)(
                            v7,
                            0LL,
                            0LL,
                            0LL,
                            v6) == 0
       ? 0xC0000005
       : 0;
}
