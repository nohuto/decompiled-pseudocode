__int64 __fastcall RtlComputeCrc32(int a1, char *a2, __int64 a3)
{
  unsigned int v4; // ecx
  char v5; // al

  v4 = ~a1;
  if ( (_DWORD)a3 )
  {
    a3 = (unsigned int)a3;
    do
    {
      v5 = *a2++;
      v4 = *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v5 ^ v4)) ^ (v4 >> 8);
      --a3;
    }
    while ( a3 );
  }
  return ~v4;
}
