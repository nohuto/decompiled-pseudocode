void __fastcall vStrMirror24(struct SURFACE *a1)
{
  int v1; // r9d
  __int16 *v3; // r10
  int v4; // r11d
  __int64 i; // rsi
  __int16 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int16 v9; // cx
  char v10; // dl

  v1 = *((_DWORD *)a1 + 14);
  v3 = (__int16 *)*((_QWORD *)a1 + 10);
  v4 = 0;
  for ( i = (unsigned int)(v1 / 2); v4 < *((_DWORD *)a1 + 15); v3 = (__int16 *)((char *)v3 + *((int *)a1 + 22)) )
  {
    v6 = v3;
    v7 = (__int64)&v3[v1 - 1] + v1 - 1;
    if ( (int)i > 0 )
    {
      v8 = i;
      do
      {
        v9 = *v6;
        v10 = *((_BYTE *)v6 + 2);
        *v6 = *(_WORD *)v7;
        v6 = (__int16 *)((char *)v6 + 3);
        *((_BYTE *)v6 - 1) = *(_BYTE *)(v7 + 2);
        *(_WORD *)v7 = v9;
        *(_BYTE *)(v7 + 2) = v10;
        v7 -= 3LL;
        --v8;
      }
      while ( v8 );
      v1 = *((_DWORD *)a1 + 14);
    }
    ++v4;
  }
}
