void __fastcall vBrushPathEnum(struct _RECTL *a1, unsigned int a2, char *a3)
{
  __int64 v4; // rsi

  if ( a2 )
  {
    v4 = a2;
    do
    {
      *((_QWORD *)a3 + 5) = a1++;
      (*(void (__fastcall **)(char *))a3)(a3 + 16);
      --v4;
    }
    while ( v4 );
  }
}
