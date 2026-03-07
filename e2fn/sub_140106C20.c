__int64 __fastcall sub_140106C20(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), 2u, 3LL, 0xBu, (__int64)&unk_1400D78E8, L"parentObject");
    return 3221225485LL;
  }
}
