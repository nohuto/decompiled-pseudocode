void __fastcall KiTpSetImmediateOperandSize(__int64 a1, char a2, char a3, char a4)
{
  char v4; // r10

  v4 = *(_BYTE *)(a1 + 1);
  if ( v4 == 8 )
  {
    a2 = 8;
  }
  else if ( v4 != 16 )
  {
    a2 = a3;
    if ( v4 != 32 )
      a2 = a4;
  }
  *(_BYTE *)(a1 + 23) = a2;
}
