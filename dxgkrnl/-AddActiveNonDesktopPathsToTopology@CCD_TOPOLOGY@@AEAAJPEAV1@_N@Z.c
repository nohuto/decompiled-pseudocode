/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01C17B0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C3C80 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3E44 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C01DB3F0 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03B6674 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        char a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // bx
  int v9; // eax
  __int64 v10; // rbx
  unsigned __int16 v11; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // bx
  int v17; // esi
  __int64 v18; // rax
  int v19; // eax
  unsigned int j; // esi
  unsigned __int16 v21; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v31; // r8
  int v32; // eax
  __int64 v33; // rax
  _BYTE v34[64]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v35; // [rsp+70h] [rbp+7h]
  int v36; // [rsp+84h] [rbp+1Bh]
  unsigned __int16 i; // [rsp+E8h] [rbp+7Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v34, 8u, 0);
  v36 |= 4u;
  v8 = 1;
  for ( i = 1; ; v8 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v34, v8, v6, v7) < v8 )
    {
      WdLogSingleEntry2(6LL, v8, this);
      LODWORD(v10) = -1073741801;
      goto LABEL_10;
    }
    v9 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v34, 0, a3, 1, &i);
    LODWORD(v10) = v9;
    if ( v9 != -1073741789 )
      break;
  }
  v11 = 0;
  if ( v9 < 0 )
  {
LABEL_10:
    v13 = (int)v10;
LABEL_20:
    WdLogSingleEntry1(2LL, v13);
    goto LABEL_8;
  }
  if ( !v35 || !*(_WORD *)(v35 + 20) )
  {
    LODWORD(v10) = 255;
    goto LABEL_8;
  }
  *((_DWORD *)a2 + 21) |= 1u;
  v14 = *((_QWORD *)this + 8);
  if ( v14 )
  {
    v15 = *(_WORD *)(v14 + 20);
    v16 = v15;
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  v17 = i;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, (unsigned __int16)(i + v15), v6, v7) < v17 + (unsigned int)v16 )
  {
    v18 = *((_QWORD *)this + 8);
    if ( v18 )
      v11 = *(_WORD *)(v18 + 20);
    WdLogSingleEntry2(6LL, this, v17 + (unsigned int)v11);
    LODWORD(v10) = -1073741801;
    goto LABEL_8;
  }
  v19 = CCD_TOPOLOGY::CopyTopology(a2, this);
  LODWORD(v10) = v19;
  if ( v19 < 0 )
  {
    v13 = v19;
    goto LABEL_20;
  }
  for ( j = 0; ; ++j )
  {
    v21 = v35 ? *(_WORD *)(v35 + 20) : 0;
    if ( j >= v21 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) & 0x100LL) != 0 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j);
      *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
      v23 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 24);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 38) = v23;
      v24 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 39) = v24;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 43) = 0;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 42) = 0;
      v25 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 45) = v25;
      v26 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 24);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) + 44) = v26;
      v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j);
      *(_QWORD *)v27 |= 0x820000uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) & 0x87) != 0 )
    {
      v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j);
      *((_QWORD *)v28 + 1) |= 0x87uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j) & 2) != 0 )
    {
      v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j);
      *((_QWORD *)v29 + 1) |= 2uLL;
    }
    v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v34, j);
    v32 = CCD_TOPOLOGY::AddPathDescriptor(a2, v30, v31);
    v10 = v32;
    if ( v32 < 0 )
    {
      v33 = *((_QWORD *)a2 + 8);
      if ( v33 )
        v11 = *(_WORD *)(v33 + 20);
      WdLogSingleEntry4(1LL, v10, j, this, v11);
      break;
    }
  }
LABEL_8:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v34);
  return (unsigned int)v10;
}
