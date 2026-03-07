__int64 __fastcall SymCryptFdefRawIsLessThanC(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = 0;
  v4 = 16 * a3;
  if ( v4 )
  {
    v5 = a1 - (_QWORD)a2;
    v6 = v4;
    do
    {
      v7 = *a2;
      v8 = *(unsigned int *)((char *)a2++ + v5);
      v3 = ((v8 - v7 - (unsigned __int64)v3) >> 32) & 1;
      --v6;
    }
    while ( v6 );
  }
  return -v3;
}
