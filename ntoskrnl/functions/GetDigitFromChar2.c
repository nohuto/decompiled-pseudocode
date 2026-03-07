char __fastcall GetDigitFromChar2(__int16 a1, _BYTE *a2)
{
  char v2; // cl

  if ( (unsigned __int16)(a1 - 48) <= 9u )
  {
    v2 = a1 - 48;
LABEL_3:
    *a2 = v2;
    return 1;
  }
  if ( (unsigned __int16)(a1 - 65) <= 5u )
  {
    v2 = a1 - 55;
    goto LABEL_3;
  }
  if ( (unsigned __int16)(a1 - 97) <= 5u )
  {
    v2 = a1 - 87;
    goto LABEL_3;
  }
  return 0;
}
