/*
 * XREFs of RtlpValidRelativeAttribute @ 0x140857A80
 * Callers:
 *     RtlpValidAttributeAce @ 0x140857A10 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int64 v6; // r11
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int *i; // r11
  unsigned int *m; // r8
  __int64 v12; // rcx
  unsigned int *k; // r8
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int *j; // r8
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // edi
  __int64 v20; // rcx
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
          v7 = *(_DWORD *)(v6 + 12);
          v8 = 4LL * v7;
          if ( v8 <= 0xFFFFFFFF && a2 - 16 >= (unsigned int)v8 )
          {
            switch ( *(_WORD *)(v6 + 4) )
            {
              case 1:
              case 2:
                if ( v7 )
                {
                  for ( i = (unsigned int *)(v6 + 16); a2 >= *i && a2 - *i >= 8; ++i )
                  {
                    if ( ++v5 >= v7 )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              case 3:
                v19 = v5;
                if ( v7 )
                {
                  while ( 1 )
                  {
                    v20 = *(unsigned int *)(v6 + 4LL * v19 + 16);
                    if ( a2 < (unsigned int)v20
                      || a2 - (unsigned int)v20 < 2
                      || RtlStringCbLengthW((STRSAFE_PCNZWCH)(v6 + v20), a2 - (unsigned int)v20, &pcbLength) < 0 )
                    {
                      break;
                    }
                    if ( ++v19 >= *(_DWORD *)(v6 + 12) )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              case 5:
                v15 = v5;
                if ( v7 )
                {
                  for ( j = (unsigned int *)(v6 + 16); ; ++j )
                  {
                    v17 = *j;
                    if ( a2 < (unsigned int)v17 )
                      break;
                    if ( a2 - (unsigned int)v17 < 4 )
                      break;
                    v18 = *(_DWORD *)(v17 + v6);
                    if ( !v18 || (int)v17 + 4 < (unsigned int)v17 || a2 - ((_DWORD)v17 + 4) < v18 )
                      break;
                    if ( ++v15 >= v7 )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              case 6:
                if ( v7 )
                {
                  for ( k = (unsigned int *)(v6 + 16); ; ++k )
                  {
                    v14 = *k;
                    if ( a2 < (unsigned int)v14 || a2 - (unsigned int)v14 < 8 || *(_QWORD *)(v14 + v6) > 1uLL )
                      break;
                    if ( ++v5 >= v7 )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              case 0x10:
                if ( v7 )
                {
                  for ( m = (unsigned int *)(v6 + 16); ; ++m )
                  {
                    v12 = *m;
                    if ( a2 < (unsigned int)v12
                      || a2 - (unsigned int)v12 < 4
                      || (int)v12 + 4 < (unsigned int)v12
                      || a2 - ((_DWORD)v12 + 4) < *(_DWORD *)(v12 + v6) )
                    {
                      break;
                    }
                    if ( ++v5 >= v7 )
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
  return 0;
}
