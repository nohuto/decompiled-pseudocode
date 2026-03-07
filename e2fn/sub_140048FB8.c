__int64 __fastcall sub_140048FB8(int a1, int a2, __int64 a3)
{
  int v6; // edx
  unsigned int v7; // ebx

  if ( byte_1400DF6E8 )
    return sub_140106AA8(1094930505, 1413763908, a1, a2, a3);
  v7 = sub_140106BB4();
  if ( !v7 )
  {
    byte_1400DF6E8 = 1;
    return sub_140106AA8(1094930505, 1413763908, a1, a2, a3);
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v6) = 2;
    sub_1400A1CFC(
      *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
      v6,
      14,
      10,
      (__int64)&unk_1400D72A0,
      (__int64)L"AuxKlibInitialize()",
      v7);
  }
  return v7;
}
