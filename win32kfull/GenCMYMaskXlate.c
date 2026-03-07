char __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  char result; // al
  int v6; // esi
  int v7; // r10d
  int v8; // edi
  int v9; // r14d
  int v10; // r8d
  int v12; // r10d
  int v13; // eax
  int v14; // r15d
  int v15; // ebx
  int v16; // eax
  int v17; // r10d
  int v18; // ebp
  int v19; // eax
  bool v20; // cc
  int v21; // edi
  int v22; // r14d
  int i; // r9d
  int v24; // eax
  int v25; // r12d
  int v26; // r13d
  int v27; // eax
  int v28; // edx
  char v29; // cl
  char v30; // al
  char v31; // [rsp+0h] [rbp-48h]
  int v32; // [rsp+4h] [rbp-44h]

  result = a4 + 1;
  v6 = a5 + 1;
  v7 = (a5 + 1) * (a3 + 1);
  v8 = (a4 + 1) * (a5 + 1);
  v9 = a3;
  v10 = 0;
  v12 = (a4 + 1) * v7;
  v32 = v8;
  if ( v12 >= 1 && v12 <= 256 && a2 )
  {
    if ( (v12 & 1) != 0 )
    {
      v13 = v12 / 2;
      ++v12;
      v14 = v13;
    }
    else
    {
      v14 = 512;
    }
    v15 = -v8;
    v16 = v12 - 1 + (256 - v12) / 2;
    v17 = 0;
    v18 = -v6;
    v31 = v16;
    do
    {
      v19 = v15 + v8;
      v20 = v17 <= v9;
      v21 = a4;
      v22 = v18;
      if ( !v20 )
        v19 = v15;
      v15 = v19;
      for ( i = 0; i <= 7; ++i )
      {
        v24 = v22 + v6;
        v25 = 0;
        if ( i > v21 )
          v24 = v22;
        v26 = -1;
        v22 = v24;
        do
        {
          v27 = v26 + 1;
          if ( v25 > a5 )
            v27 = v26;
          v28 = v27 + v15 + v22;
          v26 = v27;
          v29 = v28 + 1;
          v30 = v27 + v15 + v22;
          if ( v28 <= v14 )
            v29 = v30;
          result = v31 - v29;
          ++v25;
          *a1++ = v31 - v29;
        }
        while ( v25 <= 3 );
        v21 = a4;
      }
      v8 = v32;
      ++v17;
      v18 = -v6;
      v9 = a3;
    }
    while ( v17 <= 7 );
  }
  else
  {
    do
      *a1++ = v10++;
    while ( v10 < 256 );
  }
  return result;
}
