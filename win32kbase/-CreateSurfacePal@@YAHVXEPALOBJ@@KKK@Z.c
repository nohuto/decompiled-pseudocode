__int64 __fastcall CreateSurfacePal(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // edx
  const unsigned int *v6; // r9
  unsigned int v8; // r8d
  unsigned int Palette; // esi
  unsigned int v11; // r8d
  unsigned int *v12; // rbx
  unsigned int v13; // r10d
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // rcx
  unsigned int *v23; // [rsp+50h] [rbp-28h] BYREF
  int v24; // [rsp+58h] [rbp-20h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h]

  v26 = a2;
  v25 = a1;
  v4 = *(_DWORD *)(a1 + 24);
  v6 = *(const unsigned int **)(a1 + 112);
  v8 = *(_DWORD *)(a1 + 28);
  v24 = 0;
  v23 = 0LL;
  Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, v4 & 0x1F, v8, v6, 0, 0, 0, 0x800u, 1);
  if ( Palette )
  {
    v11 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v12 = v23, a4 > v23[7]) )
    {
      Palette = 0;
    }
    else
    {
      v13 = 0;
      Palette = 1;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFF5FF | 0x800;
      *(_DWORD *)(a1 + 60) = a3;
      v12[15] = a3;
      if ( v11 )
      {
        v14 = 0LL;
        do
        {
          v15 = *((_QWORD *)v12 + 14);
          v26 = *(_DWORD *)(v15 + v14);
          HIBYTE(v26) = 48;
          *(_DWORD *)(v15 + v14) = v26;
          v16 = *((_QWORD *)v12 + 14);
          v14 += 4LL;
          v17 = v13 - v11;
          ++v13;
          v18 = a4 + v17;
          v26 = *(_DWORD *)(v16 + 4 * v18);
          HIBYTE(v26) = 48;
          *(_DWORD *)(v16 + 4LL * (unsigned int)v18) = v26;
        }
        while ( v13 < v11 );
      }
      v19 = v12[7];
      if ( v19 >= *(_DWORD *)(a1 + 28) )
        v19 = *(_DWORD *)(a1 + 28);
      memmove(*(void **)(a1 + 112), *((const void **)v12 + 14), 4LL * v19);
      *(_QWORD *)(a1 + 48) = v12;
      v20 = XEPALOBJ::ulTime((XEPALOBJ *)&v25);
      v12[8] = v20;
      v21 = (unsigned int *)*((_QWORD *)v12 + 15);
      if ( v21 != v12 )
        v21[8] = v20;
      v23 = 0LL;
      v24 = 1;
    }
  }
  PALMEMOBJ::~PALMEMOBJ(&v23);
  return Palette;
}
