/*
 * XREFs of PopPotsGetActionEntryReason @ 0x14099D9A0
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPotsGetActionEntryReason(int a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0;
  if ( a1 > 6 )
  {
    v5 = a1 - 7;
    if ( v5 )
    {
      v6 = v5 - 4;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              return 0x1000000;
          }
          else
          {
            return 0x800000;
          }
        }
        else
        {
          return 0x400000;
        }
      }
      else
      {
        return 0x200000;
      }
    }
    else
    {
      return 1024;
    }
  }
  else if ( a1 == 6 )
  {
    return 512;
  }
  else if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 2) <= 1 )
          return 256;
      }
      else
      {
        return 128;
      }
    }
    else
    {
      return 64;
    }
  }
  else
  {
    v2 = 32;
    if ( a2 != 4 )
      return 16;
  }
  return v2;
}
