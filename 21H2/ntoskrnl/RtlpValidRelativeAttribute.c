/*
 * XREFs of RtlpValidRelativeAttribute @ 0x140615AF4
 * Callers:
 *     RtlpValidAttributeAce @ 0x140615A84 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // r11d
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned int v9; // ebp
  unsigned int *i; // rbx
  unsigned int *m; // r8
  __int64 v13; // rcx
  unsigned int *k; // r8
  __int64 v15; // rcx
  int v16; // r9d
  unsigned int *j; // r8
  __int64 v18; // rcx
  unsigned int v19; // esi
  int v20; // esi
  __int64 v21; // rcx
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        v4 = *a1;
        if ( a2 >= (unsigned int)v4
          && a2 - (unsigned int)v4 >= 4
          && RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v4), a2 - (unsigned int)v4, &pcbLength) >= 0 )
        {
          v6 = a1[3];
          v7 = 4LL * v6;
          if ( v7 <= 0xFFFFFFFF && a2 - 16 >= (unsigned int)v7 )
          {
            v8 = *((_WORD *)a1 + 2);
            if ( v8 )
            {
              v9 = v5 + 2;
              if ( v8 <= (unsigned __int16)(v5 + 2) )
              {
                if ( v6 )
                {
                  for ( i = a1 + 4; a2 >= *i && a2 - *i >= 8; ++i )
                  {
                    if ( ++v5 >= v6 )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              }
              switch ( v8 )
              {
                case 3u:
                  v20 = v5;
                  if ( v6 )
                  {
                    while ( 1 )
                    {
                      v21 = a1[v20 + 4];
                      if ( a2 < (unsigned int)v21
                        || a2 - (unsigned int)v21 < v9
                        || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v21), a2 - (unsigned int)v21, &pcbLength) < 0 )
                      {
                        break;
                      }
                      if ( ++v20 >= a1[3] )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 5u:
                  v16 = v5;
                  if ( v6 )
                  {
                    for ( j = a1 + 4; ; ++j )
                    {
                      v18 = *j;
                      if ( a2 < (unsigned int)v18 )
                        break;
                      if ( a2 - (unsigned int)v18 < 4 )
                        break;
                      v19 = *(unsigned int *)((char *)a1 + v18);
                      if ( !v19 || (int)v18 + 4 < (unsigned int)v18 || a2 - ((_DWORD)v18 + 4) < v19 )
                        break;
                      if ( ++v16 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 6u:
                  if ( v6 )
                  {
                    for ( k = a1 + 4; ; ++k )
                    {
                      v15 = *k;
                      if ( a2 < (unsigned int)v15 || a2 - (unsigned int)v15 < 8 || *(_QWORD *)((char *)a1 + v15) > 1uLL )
                        break;
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 0x10u:
                  if ( v6 )
                  {
                    for ( m = a1 + 4; ; ++m )
                    {
                      v13 = *m;
                      if ( a2 < (unsigned int)v13
                        || a2 - (unsigned int)v13 < 4
                        || (int)v13 + 4 < (unsigned int)v13
                        || a2 - ((_DWORD)v13 + 4) < *(unsigned int *)((char *)a1 + v13) )
                      {
                        break;
                      }
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
