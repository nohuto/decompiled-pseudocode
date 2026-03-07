__int64 __fastcall sub_140088618(__int64 a1, _OWORD *a2)
{
  *(_QWORD *)a1 = &off_1400D9958;
  *(_OWORD *)(a1 + 8) = 0LL;
  if ( a2 )
  {
    *(_OWORD *)(a1 + 8) = *a2;
  }
  else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(a2) = 2;
    sub_1400A3054(
      *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
      (_DWORD)a2,
      8,
      10,
      (__int64)&unk_1400D9948,
      (__int64)L"address");
  }
  return a1;
}
