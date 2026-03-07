struct NSInstrumentation::CPointerHashTable::ENTRY *__fastcall NSInstrumentation::CPointerHashTable::LookupCommon(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r11
  unsigned int v3; // r8d
  unsigned __int64 v4; // r11
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // r10

  if ( !*((_DWORD *)this + 12) )
    return 0LL;
  if ( a2 == -1LL )
    return 0LL;
  v2 = 0x9E3779B97F34A803uLL * (a2 >> 4);
  if ( (*((_BYTE *)this + 52) & 1) != 0 && *(_QWORD *)a2 != v2 )
    return 0LL;
  v3 = *((_DWORD *)this + 10);
  v4 = v2 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  v5 = 0;
  while ( 1 )
  {
    v6 = v4;
    if ( (unsigned int)v4 < v3 )
      break;
LABEL_8:
    v3 = v4;
    ++v5;
    LODWORD(v4) = 0;
    if ( v5 >= 2 )
      return 0LL;
  }
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 4);
    if ( *(_QWORD *)(v7 + 16LL * v6) == a2 )
      return (struct NSInstrumentation::CPointerHashTable::ENTRY *)(v7 + 16LL * v6);
    if ( ++v6 >= v3 )
      goto LABEL_8;
  }
}
