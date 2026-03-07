_UNKNOWN **__fastcall sub_140072788(__int64 a1, int a2, char a3, char a4, char a5, char a6)
{
  _UNKNOWN **result; // rax
  char v7; // [rsp+30h] [rbp-38h]

  result = &off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = a2;
    LOBYTE(a2) = 1;
    return (_UNKNOWN **)sub_1400AF9EC(
                          *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
                          a2,
                          2,
                          10,
                          (__int64)&unk_1400D9198,
                          a1,
                          v7,
                          a3,
                          a4,
                          a5,
                          a6);
  }
  return result;
}
