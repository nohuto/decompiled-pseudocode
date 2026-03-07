__int64 __fastcall HalBuildMdlFromScatterGatherListV2(__int64 a1, unsigned int *a2, struct _MDL *a3, struct _MDL **a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned int *v8; // r14
  __int64 v9; // r9
  struct _MDL *v10; // rdi
  _QWORD *v11; // r15
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // edx
  char v15; // cl
  int *v16; // r13
  int v17; // r10d
  int v18; // r11d
  unsigned int v19; // ebp
  __int64 Mdl; // rax
  __int64 v21; // rax
  struct _MDL *Next; // rbx
  struct _MDL *v23; // r8
  int v24; // eax
  struct _MDL *v25; // r10
  char v26; // dl
  __int64 v27; // rbp
  unsigned __int64 v28; // rcx
  __int64 v29; // rsi
  struct _MDL *v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-48h]
  int v34; // [rsp+34h] [rbp-44h]
  int v35; // [rsp+38h] [rbp-40h]
  int v36; // [rsp+90h] [rbp+18h]

  if ( !a3 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
  {
    *a4 = a3;
    return 0LL;
  }
  v6 = *((_QWORD *)a2 + 1);
  if ( v6 && *(_QWORD *)(v6 + 16) )
    return 3221225587LL;
  v7 = *a2;
  v8 = a2 + 4;
  v9 = 0LL;
  v33 = v7;
  v10 = 0LL;
  v36 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 1;
  v16 = (int *)(a2 + 4);
  if ( !v7 )
  {
LABEL_30:
    v23 = v10 + 1;
    v24 = 0;
    v25 = v10;
    v26 = 1;
    if ( *a2 )
    {
      v27 = *a2;
      do
      {
        v28 = *(_QWORD *)v8;
        v29 = v8[2];
        if ( !v26 && (v24 || (v28 & 0xFFF) != 0) )
        {
          v25 = v25->Next;
          v23 = v25 + 1;
        }
        v30 = (struct _MDL *)(v28 >> 12);
        v31 = ((*(_QWORD *)v8 & 0xFFFuLL) + v29 + 4095) >> 12;
        if ( (_DWORD)v31 )
        {
          v32 = (unsigned int)v31;
          do
          {
            v23->Next = v30;
            v23 = (struct _MDL *)((char *)v23 + 8);
            v30 = (struct _MDL *)((char *)v30 + 1);
            --v32;
          }
          while ( v32 );
        }
        v26 = 0;
        v24 = ((_WORD)v28 + (_WORD)v29) & 0xFFF;
        v8 += 6;
        --v27;
      }
      while ( v27 );
    }
    *a4 = v10;
    if ( v6 )
      *(_QWORD *)(v6 + 16) = v10;
    return 0LL;
  }
  do
  {
    v17 = *v16;
    v18 = v16[2];
    v19 = *v16 & 0xFFF;
    v35 = v18;
    v34 = *v16;
    if ( !v15 && (v12 || v19) )
    {
      Mdl = IopAllocateMdl(v13, v14, 1, v9, 0LL, 0);
      if ( !Mdl )
        goto LABEL_26;
      *(_WORD *)(Mdl + 10) |= 0x2802u;
      if ( v10 )
        *v11 = Mdl;
      else
        v10 = (struct _MDL *)Mdl;
      v7 = v33;
      v11 = (_QWORD *)Mdl;
      LODWORD(v9) = v36;
      v14 = 0;
      LOWORD(v17) = v34;
      v18 = v35;
    }
    v15 = 0;
    if ( v14 )
      v19 = v13;
    v9 = (unsigned int)(v9 + 1);
    v14 += v18;
    v13 = v19;
    v12 = ((_WORD)v17 + (_WORD)v18) & 0xFFF;
    v36 = v9;
    v16 += 6;
  }
  while ( (unsigned int)v9 < v7 );
  if ( !v14 )
    goto LABEL_30;
  v21 = IopAllocateMdl(v19, v14, 1, v9, 0LL, 0);
  if ( v21 )
  {
    *(_WORD *)(v21 + 10) |= 0x2802u;
    if ( v10 )
      *v11 = v21;
    else
      v10 = (struct _MDL *)v21;
    goto LABEL_30;
  }
LABEL_26:
  if ( v10 )
  {
    do
    {
      Next = v10->Next;
      IoFreeMdl(v10);
      v10 = Next;
    }
    while ( Next );
  }
  return 3221225626LL;
}
