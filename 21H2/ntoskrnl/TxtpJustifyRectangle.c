/*
 * XREFs of TxtpJustifyRectangle @ 0x1409F89B8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409F8784 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

void __fastcall TxtpJustifyRectangle(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  int v4; // r10d
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  a3[1] = 0;
  v4 = a1[16];
  if ( (v4 & 4) != 0 )
  {
    v5 = a1[17];
  }
  else
  {
    v6 = a1[2] - *a2;
    if ( (v4 & 8) != 0 )
    {
      *a3 = v6;
      v5 = v6 - a1[17];
    }
    else
    {
      v5 = v6 >> 1;
    }
  }
  *a3 = v5;
}
