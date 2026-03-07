void __fastcall vGradientFill24RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v3; // ebx
  char *v4; // r14
  int v5; // esi
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r12
  int v9; // r10d
  int v10; // r15d
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // r9d
  _BYTE *v15; // r10
  unsigned __int64 v16; // rbp
  char v17; // r8^7
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  int v20; // [rsp+50h] [rbp+10h]
  __int64 v21; // [rsp+58h] [rbp+18h]
  __int64 v22; // [rsp+60h] [rbp+20h]

  v3 = *((_DWORD *)a2 + 28);
  v4 = (char *)a2 + 168;
  v5 = *((_DWORD *)a2 + 3);
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v21 = *((_QWORD *)a2 + 3);
  v22 = *((_QWORD *)a2 + 4);
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  v20 = v5;
  if ( v3 < v5 )
  {
    v8 = *((int *)a1 + 22);
    do
    {
      v9 = *(_DWORD *)v4;
      v10 = *((_DWORD *)v4 + 1);
      v11 = *((_QWORD *)v4 + 1);
      if ( *(_DWORD *)v4 <= *(_DWORD *)a2 )
        v9 = *(_DWORD *)a2;
      v12 = *((_QWORD *)v4 + 2);
      v13 = *((_QWORD *)v4 + 3);
      if ( v10 >= *((_DWORD *)a2 + 2) )
        v10 = *((_DWORD *)a2 + 2);
      if ( v9 < v10 )
      {
        v14 = *(_DWORD *)a2 - *(_DWORD *)v4;
        v15 = (_BYTE *)(v7 + 3 * v9);
        v16 = v7 + 3 * v10;
        if ( v14 > 0 )
        {
          v11 += v6 * v14;
          v12 += v21 * v14;
          v13 += v22 * v14;
        }
        if ( (unsigned __int64)v15 < v16 )
        {
          do
          {
            v17 = HIBYTE(v11);
            v11 += v6;
            *v15 = v17;
            v18 = HIBYTE(v12);
            v12 += v21;
            v15[1] = v18;
            v19 = HIBYTE(v13);
            v13 += v22;
            v15[2] = v19;
            v15 += 3;
          }
          while ( (unsigned __int64)v15 < v16 );
          v5 = v20;
        }
      }
      v7 += v8;
      v4 += 40;
      ++v3;
    }
    while ( v3 < v5 );
  }
}
