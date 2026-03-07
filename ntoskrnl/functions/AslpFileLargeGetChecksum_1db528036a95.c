__int64 __fastcall AslpFileLargeGetChecksum(unsigned int *a1, _QWORD *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  unsigned __int64 i; // rdx
  unsigned int v7; // r8d
  char v8; // al

  v3 = 0;
  if ( *(_QWORD *)(*a2 + 16LL) < 0x100000uLL )
    return 3221225485LL;
  v4 = a2[2];
  if ( !v4 || a2[3] < 0x1200uLL || a2[4] )
    return 3221225485LL;
  v5 = (_DWORD *)(v4 + 512);
  for ( i = 0LL; i < 0x400; ++i )
  {
    v7 = *v5++ + v3;
    v8 = v7;
    v3 = v7 >> 1;
    if ( (v8 & 1) != 0 )
      v3 |= 0x80000000;
  }
  *a1 = v3;
  return 0LL;
}
