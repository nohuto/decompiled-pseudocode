char __fastcall CopyDIB_CX(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int16 v5; // ax
  char result; // al

  if ( a2 )
  {
    do
    {
      v5 = *a2;
      a2 = (_WORD *)((char *)a2 + 3);
      *(_WORD *)a3 = v5;
      result = *((_BYTE *)a2 - 1);
      *(_BYTE *)(a3 + 2) = result;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
  return result;
}
