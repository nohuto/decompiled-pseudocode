char __fastcall vSort(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r8
  unsigned __int16 *v6; // r11
  int v7; // r9d
  __int64 v8; // rdi
  unsigned __int16 v9; // si
  int v10; // ebx
  char v11; // bp
  __int64 i; // rcx

  v3 = a3;
  if ( a3 > 1LL )
  {
    v5 = 0LL;
    v6 = (unsigned __int16 *)(a1 + 2);
    v7 = 0;
    v8 = v3 - 1;
    do
    {
      v9 = *v6;
      v10 = v7;
      v11 = *(_BYTE *)(v5 + a2 + 1);
      for ( i = v5; v10 >= 0; --v10 )
      {
        LOWORD(v3) = *(_WORD *)(a1 + 2 * i);
        if ( (unsigned __int16)v3 <= v9 )
          break;
        *(_WORD *)(a1 + 2 * i + 2) = v3;
        LOBYTE(v3) = *(_BYTE *)(i + a2);
        *(_BYTE *)(a2 + i-- + 1) = v3;
      }
      ++v7;
      *(_WORD *)(a1 + 2 * i + 2) = v9;
      ++v6;
      *(_BYTE *)(i + a2 + 1) = v11;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
