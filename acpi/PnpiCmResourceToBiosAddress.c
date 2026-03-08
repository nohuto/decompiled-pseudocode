/*
 * XREFs of PnpiCmResourceToBiosAddress @ 0x1C0092F0C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0092820 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddress(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx
  char v7; // al
  unsigned int v8; // r9d
  int v9; // edx
  unsigned __int8 *i; // rcx
  int v11; // r10d
  __int16 v12; // ax
  __int16 v13; // ax
  char v14; // al
  __int16 v15; // dx
  __int16 v16; // ax

  v4 = *(unsigned __int8 *)(a1 + 3);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 3221225473LL;
      v7 = 6;
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 3;
  }
  v8 = *(_DWORD *)(a2 + 16);
  v9 = 0;
  if ( v8 )
  {
    for ( i = (unsigned __int8 *)(a2 + 20); ; i += 20 )
    {
      v11 = *i;
      if ( (_BYTE)v11 == v7 )
        break;
      if ( ++v9 >= v8 )
        return 0LL;
    }
    if ( (_BYTE)v11 )
    {
      if ( v11 != 1 )
      {
        if ( v11 != 2 )
        {
LABEL_26:
          *i = 0;
          return 0LL;
        }
        v12 = *((_WORD *)i + 2);
        *(_WORD *)(a1 + 8) = v12;
        *(_WORD *)(a1 + 10) = *((_WORD *)i + 4) + v12 - 1;
        v13 = *((_WORD *)i + 4);
LABEL_25:
        *(_WORD *)(a1 + 14) = v13;
        goto LABEL_26;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 5) = 0;
      v14 = (i[2] & 1) == 0;
      *(_BYTE *)(a1 + 5) = v14;
      v15 = *((_WORD *)i + 1);
      if ( (v15 & 0x20) != 0 )
      {
        v14 |= 2u;
      }
      else if ( (v15 & 8) != 0 )
      {
        v14 |= 4u;
      }
      else if ( (v15 & 4) != 0 )
      {
        v14 |= 6u;
      }
      *(_BYTE *)(a1 + 5) = v14;
    }
    v16 = *((_WORD *)i + 2);
    *(_WORD *)(a1 + 8) = v16;
    *(_WORD *)(a1 + 10) = *((_WORD *)i + 6) + v16 - 1;
    v13 = *((_WORD *)i + 6);
    goto LABEL_25;
  }
  return 0LL;
}
