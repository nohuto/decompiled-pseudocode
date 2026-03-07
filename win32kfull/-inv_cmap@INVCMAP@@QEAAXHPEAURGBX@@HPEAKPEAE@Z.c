void __fastcall INVCMAP::inv_cmap(
        INVCMAP *this,
        int a2,
        struct RGBX *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  int v9; // eax
  int v10; // r10d
  int v11; // esi
  int v12; // ebx
  __int64 v13; // r11
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  int v21; // ecx
  int v22; // ebx
  __int64 v23; // rcx

  *((_DWORD *)this + 28) = 32;
  *((_DWORD *)this + 24) = 32;
  *((_DWORD *)this + 26) = 8;
  *((_DWORD *)this + 27) = 64;
  *((_DWORD *)this + 25) = 1024;
  memset_0(a5, -1, 0x20000uLL);
  v9 = 0;
  for ( *((_DWORD *)this + 29) = 0; v9 < a2; *((_DWORD *)this + 29) = v9 )
  {
    v10 = *((_DWORD *)this + 26);
    v11 = *((unsigned __int8 *)a3 + 4 * v9) >> 3;
    *((_DWORD *)this + 4) = v11;
    v12 = *((unsigned __int8 *)a3 + 4 * v9 + 1) >> 3;
    *((_DWORD *)this + 3) = v12;
    v13 = *((unsigned __int8 *)a3 + 4 * v9 + 2) >> 3;
    *((_DWORD *)this + 2) = v13;
    v14 = *((unsigned __int8 *)a3 + 4 * v9) - v10 * v11 - v10 / 2;
    *((_DWORD *)this + 6) = v14;
    v15 = *((unsigned __int8 *)a3 + 4 * v9 + 1) - v10 * v12 - v10 / 2;
    *((_DWORD *)this + 5) = v15;
    v16 = *((unsigned __int8 *)a3 + 4 * v9 + 2) - v10 * v13 - v10 / 2;
    v17 = v15 * v15 + v16 * v16;
    v18 = *((_DWORD *)this + 27);
    *((_DWORD *)this + 7) = v14 * v14 + v17;
    v19 = v11 + 1;
    v20 = *((_DWORD *)this + 25) * v11;
    *((_DWORD *)this + 10) = 2 * (v18 * v19 - v10 * *((unsigned __int8 *)a3 + 4 * v9));
    v21 = v12 + 1;
    v22 = *((_DWORD *)this + 24) * v12;
    *((_DWORD *)this + 9) = 2 * (v18 * v21 - v10 * *((unsigned __int8 *)a3 + 4 * v9 + 1));
    *((_DWORD *)this + 8) = 2 * (v18 * (v13 + 1) - v10 * *((unsigned __int8 *)a3 + 4 * v9 + 2));
    v23 = v13 + v20 + (__int64)v22;
    *((_QWORD *)this + 8) = &a5[v23];
    *((_QWORD *)this + 11) = &a6[v23];
    INVCMAP::redloop(this);
    v9 = *((_DWORD *)this + 29) + 1;
  }
}
