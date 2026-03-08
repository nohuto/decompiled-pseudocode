/*
 * XREFs of ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1C0247848
 * Callers:
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C0247A38 (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 */

struct tagRECT *__fastcall RemoveOverlap(struct tagRECT *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  LONG left; // r11d
  LONG top; // r9d
  struct tagRECT *v6; // rbx
  LONG bottom; // r8d
  int v8; // edi
  int v9; // r15d
  int v10; // esi
  LONG right; // r14d
  LONG v12; // ebp
  int v13; // r12d
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // r11d
  int v18; // edx
  _DWORD *v19; // rcx
  int v20; // r8d
  int v21; // r10d
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  struct tagRECT *v26; // rcx
  int v27; // ecx
  int v28; // ecx
  LONG *p_top; // r8
  int v30; // edx
  int v31; // edx
  struct tagRECT *result; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 v35; // [rsp+98h] [rbp+20h]

  left = a1->left;
  top = a1->top;
  v6 = a1;
  bottom = a1->bottom;
  v8 = (a1->right - left) / 2 + left;
  LODWORD(v35) = v8;
  v9 = (bottom - top) / 2 + top;
  v10 = (a2->right - a2->left) / 2 + a2->left;
  right = a3->right;
  v12 = a3->bottom;
  LODWORD(v33) = v10;
  v13 = (a2->bottom - a2->top) / 2 + a2->top;
  v14 = 0;
  HIDWORD(v33) = v13;
  if ( right == a1->right )
    v14 = 2;
  v15 = v14 | (v12 == bottom);
  v16 = 0;
  if ( a3->left == left )
    v16 = 2;
  v17 = 1;
  v18 = ((v16 | (a3->top == top)) ^ v15) - 1;
  if ( (v18 & 2) != 0 )
  {
    HIDWORD(v35) = (bottom - top) / 2 + top;
    if ( PtInRect(a3, v35) || PtInRect(v19, v33) )
    {
      v22 = v8 - v10;
      if ( v8 - v10 < 0 )
        v22 = v10 - v8;
      v23 = v9 - v13;
      if ( v9 - v13 < 0 )
        v23 = v13 - v9;
      if ( v22 >= v23 )
        goto LABEL_9;
    }
    else if ( right - v20 <= v12 - v21 )
    {
LABEL_9:
      v18 = v17;
      goto LABEL_19;
    }
    v18 = 0;
  }
  else if ( v18 == 1 )
  {
    goto LABEL_19;
  }
  v8 = v9;
  v10 = v13;
LABEL_19:
  if ( v8 >= 0 )
  {
    v24 = 0;
  }
  else
  {
    v8 = -v8;
    v24 = v17;
  }
  if ( v10 >= 0 )
  {
    v25 = 0;
  }
  else
  {
    v10 = -v10;
    v25 = v17;
  }
  if ( v10 >= v8 )
    v24 = v25;
  v26 = a2;
  if ( v10 >= v8 )
  {
    v26 = v6;
    v6 = a2;
  }
  if ( v18 == v17 )
  {
    if ( v24 )
      v27 = v6->left + v26->left - v6->right;
    else
      v27 = v26->right;
    v28 = v27 - v6->left;
    p_top = &v6->top;
    v30 = 0;
  }
  else
  {
    p_top = &v6->top;
    if ( v24 )
      v31 = *p_top + v26->top - v6->bottom;
    else
      v31 = v26->bottom;
    v30 = v31 - *p_top;
    v28 = 0;
  }
  v6->left += v28;
  result = v6;
  v6->right += v28;
  v6->bottom += v30;
  *p_top += v30;
  return result;
}
