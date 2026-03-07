void __fastcall vSolidXorRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  LONG *p_bottom; // r14
  __int64 v7; // rbx
  char v8; // r12
  int v9; // r11d
  int v10; // eax
  int v11; // r13d
  unsigned int v12; // r9d
  unsigned __int8 *v13; // r15
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r13
  int v18; // edx
  __int64 v19; // rdi
  int v20; // edi
  int v21; // esi
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // edx
  unsigned __int8 *v27; // r10
  __int64 v28; // rax
  unsigned int v29; // edi
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  int v32; // [rsp+40h] [rbp+10h]
  unsigned __int8 *v33; // [rsp+48h] [rbp+18h]

  if ( a2 )
  {
    v33 = a3;
    p_bottom = &a1->bottom;
    v7 = a4;
    v8 = 5 - a6;
    v9 = a2;
    while ( 1 )
    {
      v10 = *(p_bottom - 2);
      v11 = *(p_bottom - 1);
      v12 = *p_bottom - v10;
      v13 = &a3[(int)v7 * v10];
      v14 = v11 - *(p_bottom - 3);
      v15 = (unsigned int)(*(p_bottom - 3) >> v8);
      v16 = (*(p_bottom - 3) << a6) & 0x1F;
      v17 = (unsigned int)(v11 >> v8);
      v18 = aulMsk[v16];
      v19 = ((unsigned __int8)(*(p_bottom - 3) << a6) + (unsigned __int8)(v14 << a6)) & 0x1F;
      v32 = v19;
      v20 = ~aulMsk[v19];
      if ( (_DWORD)v15 == (_DWORD)v17 )
        break;
      v21 = 0;
      if ( (_DWORD)v16 )
        goto LABEL_16;
      v22 = v7;
LABEL_6:
      if ( (_DWORD)v17 != (_DWORD)v15 )
      {
        v23 = &v13[4 * v15];
        if ( v12 )
        {
          v22 = v7;
          v24 = v12;
          do
          {
            v25 = v17 - v15;
            do
            {
              *(_DWORD *)v23 ^= a5;
              v23 += 4;
              --v25;
            }
            while ( v25 );
            v23 += v7 - 4LL * (unsigned int)(v17 - v15);
            --v24;
          }
          while ( v24 );
        }
      }
      if ( v32 )
      {
        v29 = a5 & v20;
        v30 = &v13[4 * v17];
        if ( v12 )
        {
          v31 = v12;
          do
          {
            *(_DWORD *)v30 ^= v29;
            v30 += v22;
            --v31;
          }
          while ( v31 );
        }
      }
LABEL_13:
      a3 = v33;
      p_bottom += 4;
      if ( !--v9 )
        return;
    }
    v18 &= v20;
    v21 = 1;
LABEL_16:
    v26 = a5 & v18;
    v27 = &v13[4 * v15];
    v22 = v7;
    if ( v12 )
    {
      v28 = v12;
      do
      {
        *(_DWORD *)v27 ^= v26;
        v27 += v7;
        --v28;
      }
      while ( v28 );
    }
    v15 = (unsigned int)(v15 + 1);
    if ( v21 )
      goto LABEL_13;
    goto LABEL_6;
  }
}
