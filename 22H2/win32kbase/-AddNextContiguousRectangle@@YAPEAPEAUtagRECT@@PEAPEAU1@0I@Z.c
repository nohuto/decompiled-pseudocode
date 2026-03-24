/*
 * XREFs of ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C01D15DC
 * Callers:
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C01D18C0 (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C0071DE4 (IntersectRect.c)
 */

struct tagRECT **__fastcall AddNextContiguousRectangle(struct tagRECT **a1, struct tagRECT **a2, int a3)
{
  struct tagRECT **v3; // rdi
  struct tagRECT **v4; // rbx
  struct tagRECT **v5; // rcx
  struct tagRECT *v6; // r12
  int **v7; // r13
  LONG top; // r11d
  LONG bottom; // r14d
  LONG left; // edi
  unsigned __int64 v11; // rbx
  __m128i *v12; // rdx
  int v13; // r9d
  int v14; // esi
  int v15; // ecx
  LONG v16; // eax
  __int32 v17; // r10d
  int v18; // r15d
  int v19; // r8d
  __m128i v20; // xmm0
  int **v21; // r14
  int *v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  struct tagRECT *v26; // rax
  __int64 v28; // [rsp+20h] [rbp-69h]
  __m128i v29; // [rsp+28h] [rbp-61h] BYREF
  LONG v30; // [rsp+38h] [rbp-51h]
  LONG v31; // [rsp+3Ch] [rbp-4Dh]
  int *v32; // [rsp+40h] [rbp-49h]
  __int64 *v33; // [rsp+48h] [rbp-41h]
  _QWORD *v34; // [rsp+50h] [rbp-39h]
  struct tagRECT **v35; // [rsp+58h] [rbp-31h] BYREF
  __int64 v36; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT **v37; // [rsp+68h] [rbp-21h]
  struct tagRECT **v38; // [rsp+70h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-9h]
  __int128 v41[5]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT **v42; // [rsp+F0h] [rbp+67h]
  int v44; // [rsp+100h] [rbp+77h] BYREF
  int v45; // [rsp+108h] [rbp+7Fh] BYREF

  v42 = a1;
  v35 = 0LL;
  v38 = 0LL;
  v3 = a1;
  v36 = 0LL;
  v4 = a2;
  v39 = 0LL;
  v44 = -1;
  v45 = -1;
  v5 = &a1[a3];
  v37 = v5;
  if ( v3 >= a2 )
  {
LABEL_32:
    v25 = 0;
    v24 = 0;
    goto LABEL_33;
  }
  do
  {
    v6 = *v3;
    v7 = (int **)v4;
    if ( v4 >= v5 )
      goto LABEL_26;
    top = v6->top;
    bottom = v6->bottom;
    left = v6->left;
    v11 = (unsigned __int64)v37;
    v30 = top;
    v31 = bottom;
    do
    {
      v12 = (__m128i *)*v7;
      v13 = (*v7)[2];
      if ( v13 > left )
      {
        v14 = v12->m128i_i32[0] - v6->right;
        v15 = v6->right - v12->m128i_i32[0];
      }
      else
      {
        v14 = left - v13;
        v15 = left - v13;
      }
      v16 = v12->m128i_i32[3];
      v17 = v12->m128i_i32[1];
      LODWORD(v28) = v15;
      if ( v16 > top )
      {
        v18 = v17 - bottom;
        v19 = bottom - v17;
        HIDWORD(v28) = bottom - v17;
      }
      else
      {
        v18 = top - v16;
        v19 = top - v16;
        HIDWORD(v28) = top - v16;
      }
      if ( v17 >= bottom || v16 <= top )
      {
        if ( v12->m128i_i32[0] >= v6->right || v13 <= left )
        {
          v34 = &v38;
          v33 = &v39;
          v32 = &v45;
          goto LABEL_18;
        }
        v14 = 0;
        v15 = 0;
        LODWORD(v28) = 0;
      }
      else
      {
        v18 = 0;
        v19 = 0;
        HIDWORD(v28) = 0;
      }
      v34 = &v35;
      v32 = &v44;
      v33 = &v36;
LABEL_18:
      v29 = *v12;
      v20 = v29;
      v29.m128i_i32[2] += v15;
      v29.m128i_i32[3] += v19;
      v29.m128i_i32[1] += v19;
      v29.m128i_i32[0] = v15 + _mm_cvtsi128_si32(v20);
      v40 = (unsigned __int64)(v7 + 1);
      v21 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        goto LABEL_22;
      do
      {
        v22 = *v21;
        v41[0] = 0LL;
        if ( (unsigned int)IntersectRect(v41, v22, v29.m128i_i32) )
          break;
        ++v21;
      }
      while ( (unsigned __int64)v21 < v11 );
      if ( (unsigned __int64)v21 >= v11 )
      {
LABEL_22:
        if ( v18 + v14 < (unsigned int)*v32 )
        {
          *v32 = v18 + v14;
          *v33 = v28;
          *v34 = v7;
        }
      }
      v7 = (int **)v40;
      top = v30;
      bottom = v31;
    }
    while ( v40 < v11 );
    v4 = a2;
    v3 = v42;
    v5 = v37;
LABEL_26:
    v42 = ++v3;
  }
  while ( v3 < v4 );
  if ( v44 != -1 )
  {
    v4 = v35;
    v23 = v36;
    goto LABEL_31;
  }
  if ( v45 == -1 )
    goto LABEL_32;
  v4 = v38;
  v23 = v39;
LABEL_31:
  v24 = v23;
  v25 = HIDWORD(v23);
LABEL_33:
  if ( v24 || v25 )
  {
    v26 = *v4;
    v26->left += v24;
    v26->right += v24;
    v26->bottom += v25;
    v26->top += v25;
  }
  return v4;
}
