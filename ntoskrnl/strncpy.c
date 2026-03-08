/*
 * XREFs of strncpy @ 0x1403D58D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strncpy(char *Dest, const char *Source, size_t Count)
{
  signed __int64 v4; // rcx
  bool v5; // zf
  unsigned __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  const char *v12; // rcx
  size_t i; // r8
  unsigned __int64 v14; // r8

  if ( !Count )
    return Dest;
  v4 = Dest - Source;
  if ( ((unsigned __int8)Source & 7) != 0 )
  {
    while ( 1 )
    {
      v5 = *Source == 0;
      Source[v4] = *Source;
      if ( v5 )
        break;
      ++Source;
      if ( !--Count )
        return Dest;
      if ( ((unsigned __int8)Source & 7) == 0 )
        goto LABEL_9;
    }
LABEL_29:
    v12 = &Source[v4];
    if ( Count >= 0x10 )
    {
      while ( ((unsigned __int8)v12 & 7) != 0 )
      {
        *++v12 = 0;
        --Count;
      }
      v8 = Count < 0x20;
      for ( i = Count - 32; !v8; i -= 32LL )
      {
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 3) = 0LL;
        v12 += 32;
        v8 = i < 0x20;
      }
      v14 = i + 32;
      while ( 1 )
      {
        v8 = v14 < 8;
        v14 -= 8LL;
        if ( v8 )
          break;
        *(_QWORD *)v12 = 0LL;
        v12 += 8;
      }
      Count = v14 + 8;
    }
    while ( 1 )
    {
      v8 = Count-- == 0;
      if ( v8 )
        break;
      *v12++ = 0;
    }
    return Dest;
  }
  else
  {
    do
    {
LABEL_9:
      while ( 1 )
      {
        v7 = *(_QWORD *)Source;
        v8 = Count < 8;
        Count -= 8LL;
        if ( v8 || (((v7 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v7) & 0x8101010101010100uLL) != 0 )
          break;
        *(_QWORD *)&Source[v4] = v7;
        Source += 8;
      }
      Count += 8LL;
      if ( !Count )
        break;
      Source[v4] = v7;
      if ( !(_BYTE)v7 )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      Source[v4] = BYTE1(v7);
      if ( !BYTE1(v7) )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      v9 = v7 >> 16;
      Source[v4] = v9;
      if ( !(_BYTE)v9 )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      Source[v4] = BYTE1(v9);
      if ( !BYTE1(v9) )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      v10 = v9 >> 16;
      Source[v4] = v10;
      if ( !(_BYTE)v10 )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      Source[v4] = BYTE1(v10);
      if ( !BYTE1(v10) )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      v11 = WORD1(v10);
      Source[v4] = v11;
      if ( !(_BYTE)v11 )
        goto LABEL_29;
      ++Source;
      if ( !--Count )
        break;
      Source[v4] = BYTE1(v11);
      if ( !BYTE1(v11) )
        goto LABEL_29;
      ++Source;
      --Count;
    }
    while ( Count );
    return Dest;
  }
}
