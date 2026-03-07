void __fastcall CenterRectangles(struct tagRECT *a1, int a2)
{
  struct tagRECT *v2; // r8
  struct tagRECT *v4; // rbx
  int v5; // edi
  struct tagRECT *v6; // r8
  int v7; // ecx
  int v8; // r8d
  LONG *p_bottom; // rax
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  *(struct tagRECT *)v10 = *a1;
  v4 = &a1[a2];
  v5 = a2;
  while ( v2 < v4 )
  {
    UnionRect((__int64)v10, v10, v2);
    v2 = v6 + 1;
  }
  if ( v5 )
  {
    v7 = -v10[1] - (v10[3] - v10[1]) / 2;
    v8 = -v10[0] - (v10[2] - v10[0]) / 2;
    p_bottom = &a1->bottom;
    do
    {
      *(p_bottom - 3) += v8;
      *(p_bottom - 1) += v8;
      *p_bottom += v7;
      *(p_bottom - 2) += v7;
      p_bottom += 4;
      --v5;
    }
    while ( v5 );
  }
}
