/*
 * XREFs of SeFastTraverseCheck @ 0x1405B54D4
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x140978718 (ObpCheckTraverseAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 */

char __fastcall SeFastTraverseCheck(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned int v9; // esi

  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    if ( (v4 & 4) != 0 )
    {
      if ( v4 >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 32);
      }
      else
      {
        v5 = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)v5 )
          return 1;
        v6 = a1 + v5;
      }
      if ( v6 )
      {
        v7 = *(unsigned __int16 *)(v6 + 4);
        if ( *(_WORD *)(v6 + 4) )
        {
          if ( (*(_DWORD *)(a2 + 12) & 0x810) == 0 )
          {
            v8 = v6 + 8;
            v9 = 0;
            if ( v7 )
            {
              while ( 1 )
              {
                if ( (*(_BYTE *)(v8 + 1) & 8) == 0 )
                {
                  if ( *(_BYTE *)v8 )
                  {
                    if ( *(_BYTE *)v8 == 1 && (a3 & *(_DWORD *)(v8 + 4)) != 0 )
                      return 0;
                  }
                  else if ( (a3 & *(_DWORD *)(v8 + 4)) != 0 && RtlEqualSid(SeWorldSid, (PSID)(v8 + 8)) )
                  {
                    return 1;
                  }
                }
                ++v9;
                v8 += *(unsigned __int16 *)(v8 + 2);
                if ( v9 >= v7 )
                  return 0;
              }
            }
          }
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}
