__int64 HalpValidateMpns()
{
  unsigned int v0; // ecx
  int v1; // r10d
  _WORD *i; // r11
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // rdx
  __int64 v8; // r8

  v0 = 1;
  v1 = 1;
  if ( (unsigned int)(HalpChannelMemoryRangeCount - 1) > 1 )
  {
    for ( i = (char *)HalpChannelMemoryRanges + 16; ; i += 8 )
    {
      v3 = *(_QWORD *)i;
      v0 = 1;
      v4 = *((_QWORD *)HalpChannelMemoryRanges + 2 * (unsigned int)(v1 - 1));
      if ( *(_WORD *)(v4 + 2) == *(_WORD *)(*(_QWORD *)i + 2LL) )
      {
        if ( (*(_BYTE *)v4 & 1 | 6) != (*(_BYTE *)v3 & 1 | 6) )
          return 0;
        v5 = *(_DWORD *)(v4 + 24);
        if ( v5 != *(_DWORD *)(v3 + 24)
          || *(_DWORD *)(v4 + 28) != *(_DWORD *)(v3 + 28)
          || *((_WORD *)HalpChannelMemoryRanges + 8 * (unsigned int)(v1 - 1) + 5) != i[5] )
        {
          return 0;
        }
        v0 = 1;
        if ( (*(_BYTE *)v4 & 2) != 0 )
        {
          v6 = 0;
          v7 = (_BYTE *)(v4 + 32);
          if ( v5 )
            break;
        }
      }
LABEL_14:
      if ( ++v1 >= (unsigned int)(HalpChannelMemoryRangeCount - 1) )
        return v0;
    }
    v8 = v3 - v4;
    while ( v7[1] == v7[v8 + 1] && *v7 == v7[v8] )
    {
      ++v6;
      v7 += 2;
      if ( v6 >= v5 )
        goto LABEL_14;
    }
    return 0;
  }
  return v0;
}
