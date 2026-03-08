/*
 * XREFs of TxtpJustifyRectangle @ 0x140AEF9E0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TxtpJustifyRectangle(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  int v3; // r9d
  __int64 result; // rax
  unsigned int v5; // eax

  a3[1] = 0;
  v3 = a1[18];
  if ( (v3 & 4) != 0 )
  {
    result = (unsigned int)a1[19];
  }
  else
  {
    v5 = a1[2] - *a2;
    if ( (v3 & 8) != 0 )
    {
      *a3 = v5;
      result = v5 - a1[19];
    }
    else
    {
      result = v5 >> 1;
    }
  }
  *a3 = result;
  return result;
}
