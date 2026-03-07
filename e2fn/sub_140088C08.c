bool __fastcall sub_140088C08(__int64 a1, __int64 a2)
{
  int v4; // ecx

  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 8) - *(_DWORD *)a2;
    if ( !v4 )
      v4 = *(unsigned __int16 *)(a1 + 12) - *(unsigned __int16 *)(a2 + 4);
    return v4 == 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(a2) = 2;
      sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), a2, 8, 13, (__int64)&unk_1400D9980, (__int64)L"address");
    }
    return 0;
  }
}
