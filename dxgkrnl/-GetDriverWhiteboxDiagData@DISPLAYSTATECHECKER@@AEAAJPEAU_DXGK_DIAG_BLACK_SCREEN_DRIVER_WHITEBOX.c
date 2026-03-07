__int64 __fastcall DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *a2,
        unsigned int a3)
{
  unsigned int v6; // esi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  __int64 v8; // r14
  char *v9; // rbx
  struct DISPLAYDIAGNOSTICADAPTERDATA *v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int i; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  char *v21; // rax
  __int128 v22; // xmm1

  if ( a3 < (unsigned int)DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this) )
    return 3221225507LL;
  v6 = 0;
  *(_DWORD *)a2 = *((_DWORD *)this + 3522);
  for ( *((_QWORD *)a2 + 1) = (char *)a2 + 16; v6 < *((_DWORD *)this + 3522); ++v6 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v6);
    v8 = *((_QWORD *)a2 + 1) + 32LL * v6;
    v9 = (char *)DisplayAdapterDiagData + 1960;
    v10 = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v6);
    v11 = 0;
    *(_QWORD *)v8 = *((_QWORD *)v10 + 1);
    v12 = *((unsigned int *)v9 + 56);
    *(_DWORD *)(v8 + 8) = v12;
    *(_DWORD *)(v8 + 12) = *((_DWORD *)v9 + 321);
    *(_QWORD *)(v8 + 16) = v8 + 32;
    for ( *(_QWORD *)(v8 + 24) = v8 + 28 * v12 + 32;
          v11 < *((_DWORD *)v9 + 56);
          *(_DWORD *)(v15 + v13 + 24) = *(_DWORD *)&v9[28 * v14 + 24] )
    {
      v13 = *(_QWORD *)(v8 + 16);
      v14 = v11++;
      v15 = 28 * v14;
      *(_DWORD *)(v15 + v13) = *(_DWORD *)&v9[28 * v14];
      *(_DWORD *)(v15 + v13 + 4) = *(_DWORD *)&v9[28 * v14 + 4];
      *(_DWORD *)(v15 + v13 + 8) = *(_DWORD *)&v9[28 * v14 + 8];
      *(_DWORD *)(v15 + v13 + 12) = *(_DWORD *)&v9[28 * v14 + 12];
      *(_DWORD *)(v15 + v13 + 16) = *(_DWORD *)&v9[28 * v14 + 16];
      *(_DWORD *)(v15 + v13 + 20) = *(_DWORD *)&v9[28 * v14 + 20];
    }
    for ( i = 0; i < *((_DWORD *)v9 + 321); *(_DWORD *)(v19 + v17 + 260) = *(_DWORD *)&v9[v19 + 488] )
    {
      v17 = *(_QWORD *)(v8 + 24);
      v18 = i++;
      v19 = 264 * v18;
      *(_DWORD *)(v19 + v17) = *(_DWORD *)&v9[264 * v18 + 228];
      v20 = 264 * v18 + v17 + 140;
      *(_DWORD *)(v19 + v17 + 4) = *(_DWORD *)&v9[264 * v18 + 232];
      *(_DWORD *)(v19 + v17 + 8) = *(_DWORD *)&v9[264 * v18 + 236];
      v21 = &v9[264 * v18 + 240];
      *(_OWORD *)(v20 - 128) = *(_OWORD *)v21;
      *(_OWORD *)(v20 - 112) = *((_OWORD *)v21 + 1);
      *(_OWORD *)(v20 - 96) = *((_OWORD *)v21 + 2);
      *(_OWORD *)(v20 - 80) = *((_OWORD *)v21 + 3);
      *(_OWORD *)(v20 - 64) = *((_OWORD *)v21 + 4);
      *(_OWORD *)(v20 - 48) = *((_OWORD *)v21 + 5);
      *(_OWORD *)(v20 - 32) = *((_OWORD *)v21 + 6);
      v22 = *((_OWORD *)v21 + 7);
      v21 += 128;
      *(_OWORD *)(v20 - 16) = v22;
      *(_OWORD *)v20 = *(_OWORD *)v21;
      *(_OWORD *)(v20 + 16) = *((_OWORD *)v21 + 1);
      *(_OWORD *)(v20 + 32) = *((_OWORD *)v21 + 2);
      *(_OWORD *)(v20 + 48) = *((_OWORD *)v21 + 3);
      *(_OWORD *)(v20 + 64) = *((_OWORD *)v21 + 4);
      *(_OWORD *)(v20 + 80) = *((_OWORD *)v21 + 5);
      *(_DWORD *)(v20 + 96) = *((_DWORD *)v21 + 24);
      *(_DWORD *)(v19 + v17 + 240) = *(_DWORD *)&v9[v19 + 468];
      *(_DWORD *)(v19 + v17 + 244) = *(_DWORD *)&v9[v19 + 472];
      *(_DWORD *)(v19 + v17 + 248) = *(_DWORD *)&v9[v19 + 476];
      *(_DWORD *)(v19 + v17 + 252) = *(_DWORD *)&v9[v19 + 480];
      *(_DWORD *)(v19 + v17 + 256) = *(_DWORD *)&v9[v19 + 484];
    }
  }
  return 0LL;
}
