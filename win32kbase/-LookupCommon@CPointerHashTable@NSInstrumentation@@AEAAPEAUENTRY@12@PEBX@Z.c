const void **__fastcall NSInstrumentation::CPointerHashTable::LookupCommon(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned int v4; // r10d
  unsigned __int64 v5; // r8
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  const void **result; // rax

  if ( !*((_DWORD *)this + 12) )
    return 0LL;
  if ( a2 == -1LL )
    return 0LL;
  v3 = 0x9E3779B97F34A803uLL * (a2 >> 4);
  if ( (*((_BYTE *)this + 52) & 1) != 0 && *(_QWORD *)a2 != v3 )
    return 0LL;
  v4 = *((_DWORD *)this + 10);
  v5 = v3 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  v6 = 0;
  while ( 1 )
  {
    v7 = v5;
    if ( (unsigned int)v5 < v4 )
      break;
LABEL_9:
    v4 = v5;
    ++v6;
    LODWORD(v5) = 0;
    if ( v6 >= 2 )
      return 0LL;
  }
  while ( 1 )
  {
    result = (const void **)(*((_QWORD *)this + 4) + 16LL * v7);
    if ( *result == (const void *)a2 )
      return result;
    if ( ++v7 >= v4 )
      goto LABEL_9;
  }
}
