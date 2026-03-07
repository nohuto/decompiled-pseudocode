__int64 __fastcall FastRegion::CRegion::Copy(int **this, int **a2)
{
  int *v3; // rbx
  int v4; // r8d
  int *v5; // rdi
  int *v6; // r14
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // esi
  __int64 v11; // r9
  int *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9

  if ( this == a2 )
    return 0LL;
  v3 = *a2;
  v4 = **a2;
  if ( !v4 )
  {
    **this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = 60;
  v8 = v3[2 * v4 + 2] + 8 * v4 - v3[4] - 12 + 8 * (v4 - 1) + 24;
  if ( this + 1 != (int **)*this )
    v7 = *v6;
  if ( v7 >= v8 )
    goto LABEL_6;
  v5 = (int *)DefaultHeap::Alloc(v8);
  if ( v5 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v5;
    *v6 = v8;
LABEL_6:
    v9 = *v3;
    v10 = 0;
    *v5 = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v11 = (__int64)v3 + v3[4] + 12;
    v12 = &v5[2 * v9 + 3];
    if ( v9 > 0 )
    {
      v13 = v5 + 3;
      do
      {
        *v13 = *(_DWORD *)((char *)v13 + (char *)v3 - (char *)v5);
        v13 += 2;
        v14 = v10++;
        v5[2 * v14 + 4] = (_DWORD)v3
                        + 8 * v14
                        + 4 * (((__int64)v12 - v11) >> 2)
                        + v3[2 * v14 + 4]
                        - ((_DWORD)v5
                         + 8 * v14);
      }
      while ( v10 < *v5 );
    }
    v15 = (__int64)&v3[2 * *v3 + 1];
    v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v3[4] - ((int)v3 + 12)) >> 2;
    v17 = (int)v16;
    if ( (int)v16 > 0 )
    {
      v18 = v11 - (_QWORD)v12;
      do
      {
        *v12 = *(int *)((char *)v12 + v18);
        ++v12;
        --v17;
      }
      while ( v17 );
    }
    return 0LL;
  }
  return 2147942414LL;
}
