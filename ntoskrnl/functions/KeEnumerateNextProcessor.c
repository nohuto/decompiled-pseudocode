__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int16 v7; // ax

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_WORD *)a2 + 8) + 1;
      *((_WORD *)a2 + 8) = v7;
      if ( v7 >= v3 )
        return 3221226021LL;
      v4 = *(_QWORD *)&(*a2)[4 * v7 + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
  }
}
