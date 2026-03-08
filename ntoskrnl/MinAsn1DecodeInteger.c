/*
 * XREFs of MinAsn1DecodeInteger @ 0x14067E004
 * Callers:
 *     MincryptValidateBasicConstraints @ 0x14067DECC (MincryptValidateBasicConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MinAsn1DecodeInteger(char *a1, unsigned int a2, __int64 *a3, char *a4)
{
  char v4; // bl
  __int64 v5; // r10
  int v6; // r11d
  char *v7; // rax
  __int64 result; // rax
  char v9; // cl
  __int64 v10; // rcx

  v4 = 0;
  v5 = 0LL;
  v6 = (int)a1;
  v7 = a1;
  if ( !a2 )
    return 0LL;
  v9 = *a1;
  if ( v9 < 0 )
  {
    v5 = -1LL;
    v4 = 1;
    if ( a2 >= 2 && v9 == -1 )
    {
      do
      {
        if ( v7[1] != -1 )
          break;
        ++v7;
        --a2;
      }
      while ( a2 >= 2 );
    }
  }
  else
  {
    while ( !*v7 )
    {
      ++v7;
      if ( !--a2 )
        goto LABEL_15;
    }
  }
  if ( a2 > 8 )
    return 0xFFFFFFFFLL;
  for ( ; a2; --a2 )
  {
    v10 = (unsigned __int8)*v7++;
    v5 = v10 | (v5 << 8);
  }
LABEL_15:
  *a3 = v5;
  result = (unsigned int)((_DWORD)v7 - v6);
  *a4 = v4;
  return result;
}
