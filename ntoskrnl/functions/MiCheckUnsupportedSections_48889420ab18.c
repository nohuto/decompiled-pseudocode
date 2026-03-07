__int64 __fastcall MiCheckUnsupportedSections(PRTL_BITMAP *a1)
{
  unsigned int v1; // ebx
  unsigned int *Buffer; // rdx
  ULONG v4; // esi
  __int64 v5; // rdi

  v1 = 0;
  Buffer = (*a1)[4].Buffer;
  if ( (*(_DWORD *)(*(_QWORD *)Buffer + 56LL) & 0x20000) != 0 )
  {
    v4 = 0;
    v5 = *(_QWORD *)Buffer + 128LL;
    if ( *(_QWORD *)Buffer != -128LL )
    {
      while ( (*(_BYTE *)(v5 + 34) & 2) == 0 || RtlAreBitsSet(a1[6], v4, *(_DWORD *)(v5 + 44)) )
      {
        v4 += *(_DWORD *)(v5 + 44);
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          return v1;
      }
      return (unsigned int)-1073741746;
    }
  }
  return v1;
}
