void __fastcall draw_clrt_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r12d
  int v8; // r13d
  unsigned __int8 *v9; // r14
  LONG *p_y; // rsi
  __int64 v12; // rax
  _DWORD *v13; // r10
  int v14; // edi
  unsigned __int8 *v15; // rcx
  int v16; // r14d
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // r10
  int v19; // r11d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // ebx
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // r8
  unsigned int v27; // ebx
  unsigned int v28; // edx
  unsigned int v29; // r8d
  __int64 v30; // [rsp+60h] [rbp+8h]

  v7 = a5;
  v8 = a4;
  v9 = a3;
  p_y = &a1->ptl.y;
  v30 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  do
  {
    v12 = *(_QWORD *)(p_y - 3);
    v13 = *(_DWORD **)v12;
    v14 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
    if ( !v14 )
      goto LABEL_3;
    v15 = &v9[v7 * (__int64)(int)(*p_y + v13[1] - a7)];
    v16 = v13[2];
    v17 = &v15[*v13 + *(p_y - 1) - v8];
    v18 = (unsigned __int8 *)(v13 + 4);
    do
    {
      v19 = v16;
      do
      {
        v20 = *v17;
        v21 = *v18;
        if ( !(_BYTE)v20 )
          goto LABEL_8;
        if ( (_BYTE)v21 )
        {
          v22 = *(_QWORD *)(v30 + 8592);
          v23 = *(unsigned __int8 *)(v22 + 4 * v21);
          v24 = v22 + 4 * v21;
          v25 = *(unsigned __int8 *)(v22 + 4 * v20);
          v26 = v22 + 4 * v20;
          v27 = v25 + v23;
          v28 = *(unsigned __int8 *)(v24 + 1) + *(unsigned __int8 *)(v26 + 1);
          v29 = *(unsigned __int8 *)(v24 + 2) + *(unsigned __int8 *)(v26 + 2);
          if ( v27 > 6 )
            v27 = 6;
          if ( v28 > 6 )
            v28 = 6;
          if ( v29 > 6 )
            v29 = 6;
          LOBYTE(v21) = byte_1C03193A0[49 * v27 + 7 * v28 + v29];
LABEL_8:
          *v17 = v21;
        }
        ++v17;
        ++v18;
        --v19;
      }
      while ( v19 );
      v17 += (int)(v7 - v16);
      --v14;
    }
    while ( v14 );
    v7 = a5;
    v8 = a4;
    v9 = a3;
LABEL_3:
    p_y += 6;
    --a2;
  }
  while ( a2 );
}
