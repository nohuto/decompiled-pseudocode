__int64 __fastcall strncpycch(_BYTE *a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rdx
  char v5; // al

  v3 = (int)a1;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = a1[v4];
      *a1++ = v5;
      if ( !v5 )
        break;
      --a3;
    }
    while ( a3 );
  }
  return (unsigned int)((_DWORD)a1 - v3);
}
