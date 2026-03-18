/*
 * XREFs of ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C02104B8
 * Callers:
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C0210788 (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C006EC48 (IntersectRect.c)
 */

struct tagRECT **__fastcall AddNextContiguousRectangle(struct tagRECT **a1, struct tagRECT **a2, int a3)
{
  struct tagRECT **v3; // rbx
  struct tagRECT **v4; // rdi
  struct tagRECT **v5; // r11
  struct tagRECT *v6; // r15
  int **v7; // r12
  LONG bottom; // r13d
  LONG left; // ebx
  LONG top; // edi
  __m128i *v11; // rdx
  int v12; // r9d
  int v13; // esi
  int v14; // ecx
  LONG v15; // eax
  __int32 v16; // r10d
  int v17; // r14d
  int v18; // r8d
  int *v19; // r13
  __m128i v20; // xmm0
  int **v21; // rax
  int *v22; // rdx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  struct tagRECT *v28; // rax
  __int64 v30; // [rsp+20h] [rbp-69h]
  __m128i v31; // [rsp+28h] [rbp-61h] BYREF
  LONG v32; // [rsp+38h] [rbp-51h]
  __int64 *v33; // [rsp+40h] [rbp-49h]
  _QWORD *v34; // [rsp+48h] [rbp-41h]
  struct tagRECT **v35; // [rsp+50h] [rbp-39h] BYREF
  __int64 v36; // [rsp+58h] [rbp-31h] BYREF
  int **v37; // [rsp+60h] [rbp-29h]
  struct tagRECT **v38; // [rsp+68h] [rbp-21h]
  struct tagRECT **v39; // [rsp+70h] [rbp-19h] BYREF
  __int64 v40; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-9h]
  __int128 v42[5]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT **v43; // [rsp+F0h] [rbp+67h]
  int v45; // [rsp+100h] [rbp+77h] BYREF
  int v46; // [rsp+108h] [rbp+7Fh] BYREF

  v43 = a1;
  v35 = 0LL;
  v39 = 0LL;
  v3 = a2;
  v36 = 0LL;
  v4 = a1;
  v40 = 0LL;
  v45 = -1;
  v46 = -1;
  v5 = &a1[a3];
  v38 = v5;
  if ( a1 >= a2 )
  {
LABEL_31:
    v27 = 0;
    v26 = 0;
    goto LABEL_32;
  }
  do
  {
    v6 = *v4;
    v7 = (int **)v3;
    if ( v3 >= v5 )
      goto LABEL_25;
    bottom = v6->bottom;
    left = v6->left;
    top = v6->top;
    v32 = bottom;
    do
    {
      v11 = (__m128i *)*v7;
      v12 = (*v7)[2];
      if ( v12 > left )
      {
        v13 = v11->m128i_i32[0] - v6->right;
        v14 = v6->right - v11->m128i_i32[0];
      }
      else
      {
        v13 = left - v12;
        v14 = left - v12;
      }
      v15 = v11->m128i_i32[3];
      v16 = v11->m128i_i32[1];
      LODWORD(v30) = v14;
      if ( v15 > top )
      {
        v17 = v16 - bottom;
        v18 = bottom - v16;
        HIDWORD(v30) = bottom - v16;
      }
      else
      {
        v17 = top - v15;
        v18 = top - v15;
        HIDWORD(v30) = top - v15;
      }
      if ( v16 < bottom && v15 > top )
      {
        v17 = 0;
        v18 = 0;
        HIDWORD(v30) = 0;
LABEL_16:
        v34 = &v35;
        v19 = &v45;
        v33 = &v36;
        goto LABEL_18;
      }
      if ( v11->m128i_i32[0] < v6->right && v12 > left )
      {
        v13 = 0;
        v14 = 0;
        LODWORD(v30) = 0;
        goto LABEL_16;
      }
      v34 = &v39;
      v19 = &v46;
      v33 = &v40;
LABEL_18:
      v31 = *v11;
      v20 = v31;
      v31.m128i_i32[2] += v14;
      v31.m128i_i32[3] += v18;
      v31.m128i_i32[1] += v18;
      v31.m128i_i32[0] = v14 + _mm_cvtsi128_si32(v20);
      v21 = v7 + 1;
      v41 = (unsigned __int64)(v7 + 1);
      v37 = v7 + 1;
      if ( v7 + 1 >= (int **)v5 )
      {
LABEL_21:
        if ( v17 + v13 < (unsigned int)*v19 )
        {
          v24 = v33;
          *v19 = v17 + v13;
          *v24 = v30;
          *v34 = v7;
        }
      }
      else
      {
        while ( 1 )
        {
          v22 = *v21;
          v42[0] = 0LL;
          v23 = IntersectRect(v42, v22, v31.m128i_i32);
          v5 = v38;
          if ( v23 )
            break;
          v21 = v37 + 1;
          v37 = v21;
          if ( v21 >= (int **)v38 )
            goto LABEL_21;
        }
      }
      v7 = (int **)v41;
      bottom = v32;
    }
    while ( v41 < (unsigned __int64)v5 );
    v3 = a2;
    v4 = v43;
LABEL_25:
    v43 = ++v4;
  }
  while ( v4 < v3 );
  if ( v45 != -1 )
  {
    v3 = v35;
    v25 = v36;
    goto LABEL_30;
  }
  if ( v46 == -1 )
    goto LABEL_31;
  v3 = v39;
  v25 = v40;
LABEL_30:
  v26 = v25;
  v27 = HIDWORD(v25);
LABEL_32:
  if ( v26 || v27 )
  {
    v28 = *v3;
    v28->left += v26;
    v28->right += v26;
    v28->bottom += v27;
    v28->top += v27;
  }
  return v3;
}
