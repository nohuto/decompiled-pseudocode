/*
 * XREFs of XmPrefixOpcode @ 0x1403BBB10
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmPrefixOpcode(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v6; // eax

  v1 = *(_DWORD *)(a1 + 124);
  if ( v1 <= 5 )
  {
    if ( v1 == 5 || v1 <= 2 || v1 - 3 <= 1 )
    {
      *(_BYTE *)(a1 + 140) = 1;
      *(_DWORD *)(a1 + 116) = v1;
    }
  }
  else
  {
    v2 = v1 - 6;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v6 = v4 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
            {
              *(_BYTE *)(a1 + 139) = 1;
              *(_BYTE *)(a1 + 141) = 0;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 139) = 1;
            *(_BYTE *)(a1 + 141) = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 138) = 1;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 137) = 1;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 136) = 1;
    }
  }
  return 0LL;
}
