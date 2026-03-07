void __fastcall RGNOBJ::vTighten(RGNOBJ *this)
{
  __int64 v1; // r9
  int v2; // r10d
  int v3; // r8d
  signed int v4; // r11d
  int *v5; // rdx
  int v6; // ebx
  int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // [rsp+0h] [rbp-18h]

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  if ( v2 == 1 )
  {
    v8 = 0LL;
  }
  else
  {
    v3 = 0x7FFFFFFF;
    LODWORD(v9) = 0x7FFFFFFF;
    v4 = 0x80000000;
    v5 = *(int **)(v1 + 32);
    DWORD1(v9) = v5[2];
    if ( !v2 )
      goto LABEL_13;
    do
    {
      v6 = *v5;
      --v2;
      v7 = v3;
      if ( *v5 )
      {
        v3 = v5[3];
        if ( v7 <= v3 )
          v3 = v7;
        LODWORD(v9) = v3;
        if ( v4 < v5[v6 - 1 + 3] )
        {
          v4 = v5[v6 - 1 + 3];
          LODWORD(v9) = v3;
        }
      }
      v5 = (int *)((char *)v5 + (unsigned int)(4 * v6 + 16));
    }
    while ( v2 );
    DWORD2(v9) = v4;
    if ( v3 >= v4 )
    {
LABEL_13:
      LODWORD(v9) = 0;
      DWORD2(v9) = 0;
    }
    HIDWORD(v9) = *(_DWORD *)(*(_QWORD *)(v1 + 40)
                            - 4LL
                            - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16)
                            + 8);
    v8 = v9;
  }
  *(_OWORD *)(v1 + 56) = v8;
}
