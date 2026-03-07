struct tagRECT **__fastcall AddNextContiguousRectangle(struct tagRECT **a1, struct tagRECT **a2, int a3)
{
  int v3; // r12d
  struct tagRECT **v4; // rbx
  struct tagRECT **v5; // rdi
  struct tagRECT **v6; // r10
  struct tagRECT *v7; // r15
  int **v8; // r13
  LONG top; // r11d
  LONG bottom; // r8d
  LONG left; // edi
  unsigned int v12; // ebx
  __m128i *v13; // rdx
  int v14; // r9d
  int v15; // esi
  int v16; // ecx
  LONG v17; // eax
  __int32 v18; // r14d
  __int32 v19; // r8d
  __m128i v20; // xmm0
  int **v21; // rax
  int *v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  int v26; // ecx
  struct tagRECT *v27; // rax
  __int64 v29; // [rsp+20h] [rbp-79h]
  int v30; // [rsp+28h] [rbp-71h] BYREF
  __int32 v31; // [rsp+2Ch] [rbp-6Dh]
  __m128i v32; // [rsp+30h] [rbp-69h] BYREF
  LONG v33; // [rsp+40h] [rbp-59h]
  int *v34; // [rsp+48h] [rbp-51h]
  __int64 *v35; // [rsp+50h] [rbp-49h]
  _QWORD *v36; // [rsp+58h] [rbp-41h]
  unsigned __int64 v37; // [rsp+60h] [rbp-39h]
  struct tagRECT **v38; // [rsp+68h] [rbp-31h] BYREF
  __int64 v39; // [rsp+70h] [rbp-29h] BYREF
  int **v40; // [rsp+78h] [rbp-21h]
  struct tagRECT **v41; // [rsp+80h] [rbp-19h] BYREF
  __int64 v42; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v43; // [rsp+90h] [rbp-9h]
  __int128 v44[5]; // [rsp+98h] [rbp-1h] BYREF
  struct tagRECT **v45; // [rsp+100h] [rbp+67h]
  int v47; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v48; // [rsp+118h] [rbp+7Fh]

  v45 = a1;
  v38 = 0LL;
  v41 = 0LL;
  v3 = -1;
  v39 = 0LL;
  v4 = a2;
  v42 = 0LL;
  v5 = a1;
  v30 = -1;
  v47 = -1;
  v6 = &a1[a3];
  v37 = (unsigned __int64)v6;
  if ( a1 >= a2 )
  {
LABEL_31:
    v26 = 0;
    v25 = 0;
    goto LABEL_32;
  }
  do
  {
    v7 = *v5;
    v8 = (int **)v4;
    if ( v4 >= v6 )
      goto LABEL_25;
    top = v7->top;
    bottom = v7->bottom;
    left = v7->left;
    v12 = v47;
    v33 = top;
    v31 = bottom;
    do
    {
      v13 = (__m128i *)*v8;
      v14 = (*v8)[2];
      if ( v14 > left )
      {
        v15 = v13->m128i_i32[0] - v7->right;
        v16 = v7->right - v13->m128i_i32[0];
      }
      else
      {
        v15 = left - v14;
        v16 = left - v14;
      }
      v17 = v13->m128i_i32[3];
      LODWORD(v29) = v16;
      if ( v17 > top )
      {
        v18 = v13->m128i_i32[1] - bottom;
        v19 = bottom - v13->m128i_i32[1];
        HIDWORD(v29) = v19;
      }
      else
      {
        v18 = top - v17;
        v19 = top - v17;
        HIDWORD(v29) = top - v17;
      }
      v6 = (struct tagRECT **)v37;
      if ( v13->m128i_i32[1] < v31 && v17 > top )
      {
        v18 = 0;
        v19 = 0;
        HIDWORD(v29) = 0;
LABEL_16:
        v48 = v3;
        v36 = &v38;
        v35 = &v39;
        v34 = &v30;
        goto LABEL_18;
      }
      if ( v13->m128i_i32[0] < v7->right && v14 > left )
      {
        v15 = 0;
        v16 = 0;
        LODWORD(v29) = 0;
        goto LABEL_16;
      }
      v48 = v12;
      v36 = &v41;
      v35 = &v42;
      v34 = &v47;
LABEL_18:
      v32 = *v13;
      v20 = v32;
      v32.m128i_i32[2] += v16;
      v32.m128i_i32[3] += v19;
      v32.m128i_i32[1] += v19;
      v32.m128i_i32[0] = v16 + _mm_cvtsi128_si32(v20);
      v21 = v8 + 1;
      v43 = (unsigned __int64)(v8 + 1);
      v40 = v8 + 1;
      if ( (unsigned __int64)(v8 + 1) >= v37 )
      {
LABEL_21:
        if ( v18 + v15 < v48 )
        {
          *v34 = v18 + v15;
          v3 = v30;
          v12 = v47;
          *v35 = v29;
          *v36 = v8;
        }
      }
      else
      {
        while ( 1 )
        {
          v22 = *v21;
          v44[0] = 0LL;
          v23 = IntersectRect(v44, v22, v32.m128i_i32);
          v6 = (struct tagRECT **)v37;
          if ( v23 )
            break;
          v21 = v40 + 1;
          v40 = v21;
          if ( (unsigned __int64)v21 >= v37 )
            goto LABEL_21;
        }
      }
      v8 = (int **)v43;
      top = v33;
      bottom = v31;
    }
    while ( v43 < (unsigned __int64)v6 );
    v4 = a2;
    v5 = v45;
LABEL_25:
    v45 = ++v5;
  }
  while ( v5 < v4 );
  if ( v3 != -1 )
  {
    v4 = v38;
    v24 = v39;
    goto LABEL_30;
  }
  if ( v47 == -1 )
    goto LABEL_31;
  v4 = v41;
  v24 = v42;
LABEL_30:
  v25 = v24;
  v26 = HIDWORD(v24);
LABEL_32:
  if ( v25 || v26 )
  {
    v27 = *v4;
    v27->left += v25;
    v27->right += v25;
    v27->bottom += v26;
    v27->top += v26;
  }
  return v4;
}
