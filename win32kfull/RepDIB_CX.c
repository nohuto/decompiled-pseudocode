void __fastcall RepDIB_CX(__int64 a1, __int16 *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int16 *v5; // r10
  __int16 v6; // ax
  unsigned __int64 v7; // rbx
  char v8; // r11
  int v9; // ecx

  if ( a2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 88);
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 96);
    v8 = 0;
    v9 = 1;
    do
    {
      if ( !--v9 )
      {
        v9 = *v5;
        v6 = *a2;
        v8 = *((_BYTE *)a2 + 2);
        if ( (unsigned __int64)v5 < v7 )
        {
          ++v5;
          a2 = (__int16 *)((char *)a2 + 3);
        }
      }
      *(_WORD *)a3 = v6;
      *(_BYTE *)(a3 + 2) = v8;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
}
