__int64 sub_140003B44()
{
  _QWORD *Pool2; // rax
  int v1; // edx
  unsigned int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1937011302LL);
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    *Pool2 = &off_1400D4660;
    Pool2[1] = 0xA5A5A5A5A50000BDuLL;
    qword_1400DF6D8 = (__int64)Pool2;
    v2 = sub_140003CFC(Pool2);
    v4 = v2;
    if ( v2 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOBYTE(v3) = 2;
        sub_1400A1CFC(
          *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
          v3,
          1,
          11,
          (__int64)&unk_1400D4650,
          (__int64)L"m_instance->Initialize()",
          v2);
      }
      return v4;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    qword_1400DF6D8 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v1) = 2;
      sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), v1, 1, 10, (__int64)&unk_1400D4650, (__int64)L"m_instance");
    }
    return 3221225495LL;
  }
}
