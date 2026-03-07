struct InputObjectMapEntry *__fastcall InputObjectMap::FindEntry(const struct _LUID *a1)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // r11
  char *v5; // rdx
  DWORD LowPart; // ecx

  v2 = 0LL;
  v3 = -1LL << (*(&InputObjectMap::s_hashTable + 4) & 0x1F);
  v4 = v3 & (HIBYTE(a1->HighPart)
           + 37
           * (BYTE2(a1->HighPart)
            + 37
            * (BYTE1(a1->HighPart)
             + 37
             * (LOBYTE(a1->HighPart)
              + 37
              * (HIBYTE(a1->LowPart)
               + 37 * (BYTE2(a1->LowPart) + 37 * (BYTE1(a1->LowPart) + 37 * (LOBYTE(a1->LowPart) + 11623883LL))))))));
  if ( *(&InputObjectMap::s_hashTable + 1) >> 5 )
  {
    v5 = (char *)Buffer
       + 8
       * ((37
         * (BYTE6(v4)
          + 37
          * (BYTE5(v4)
           + 37
           * (BYTE4(v4) + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
         + HIBYTE(v4)) & (unsigned int)((*(&InputObjectMap::s_hashTable + 1) >> 5) - 1));
    while ( 1 )
    {
      v5 = *(char **)v5;
      if ( ((unsigned __int8)v5 & 1) != 0 )
        break;
      if ( v4 == (v3 & *((_QWORD *)v5 + 1)) )
      {
        if ( v5 )
        {
          LowPart = a1->LowPart;
LABEL_7:
          if ( *((_DWORD *)v5 + 4) == LowPart && *((_DWORD *)v5 + 5) == a1->HighPart )
          {
            return (struct InputObjectMapEntry *)v5;
          }
          else
          {
            while ( 1 )
            {
              v5 = *(char **)v5;
              if ( ((unsigned __int8)v5 & 1) != 0 )
                break;
              if ( v4 == (v3 & *((_QWORD *)v5 + 1)) )
              {
                if ( v5 )
                  goto LABEL_7;
                return (struct InputObjectMapEntry *)v2;
              }
            }
          }
        }
        return (struct InputObjectMapEntry *)v2;
      }
    }
  }
  return (struct InputObjectMapEntry *)v2;
}
