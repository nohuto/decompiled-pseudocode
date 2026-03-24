/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C0148794
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01486EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149090 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0167960 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02EAD78 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        char a3)
{
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int16 v15; // di
  __int16 v16; // cx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int16 v22; // bx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int i; // esi
  unsigned __int16 v33; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v36; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v38; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v43; // r8
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  _BYTE v49[64]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v50; // [rsp+78h] [rbp+17h]
  int v51; // [rsp+8Ch] [rbp+2Bh]
  unsigned __int16 v52; // [rsp+E0h] [rbp+7Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v49, 8u, 0);
  v51 |= 4u;
  v6 = 1;
  v52 = 1;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v49, (unsigned __int16)v6) >= (unsigned __int16)v6 )
  {
    v11 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v49, 0, a3, 1, &v52);
    v6 = v52;
    LODWORD(v14) = v11;
    if ( v11 != -1073741789 )
      goto LABEL_4;
  }
  v18 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
  *(_QWORD *)(v18 + 24) = (unsigned __int16)v6;
  *(_QWORD *)(v18 + 32) = this;
  WdLogEvent5_WdLowResource(v18);
  LODWORD(v14) = -1073741801;
LABEL_4:
  v15 = 0;
  if ( (int)v14 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v19 + 24) = (int)v14;
LABEL_25:
    WdLogEvent5_WdError(v19);
    goto LABEL_9;
  }
  if ( v50 )
    v16 = *(_WORD *)(v50 + 20);
  else
    v16 = 0;
  if ( !v16 )
  {
    LODWORD(v14) = 255;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 21) |= 1u;
  v20 = *((_QWORD *)this + 8);
  if ( v20 )
    v21 = *(unsigned __int16 *)(v20 + 20);
  else
    v21 = 0;
  if ( v20 )
    v22 = *(_WORD *)(v20 + 20);
  else
    v22 = 0;
  v24 = (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, (unsigned int)(v6 + v21));
  if ( (unsigned int)v24 < (unsigned __int16)v6 + (unsigned int)v22 )
  {
    v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = this;
    v28 = *((_QWORD *)this + 8);
    if ( v28 )
      v15 = *(_WORD *)(v28 + 20);
    *(_QWORD *)(v27 + 32) = (unsigned __int16)v6 + (unsigned int)v15;
    WdLogEvent5_WdLowResource(v27);
    LODWORD(v14) = -1073741801;
    goto LABEL_9;
  }
  v29 = CCD_TOPOLOGY::CopyTopology(a2, this);
  v14 = v29;
  if ( v29 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v19 + 24) = v14;
    goto LABEL_25;
  }
  for ( i = 0; ; ++i )
  {
    v33 = v50 ? *(_WORD *)(v50 + 20) : 0;
    if ( i >= v33 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) & 0x100LL) != 0 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
      v35 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) + 38) = *((_DWORD *)v35 + 24);
      v36 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) + 39) = *((_DWORD *)v36 + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) + 43) = 0;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) + 42) = 0;
      v37 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) + 45) = *((_DWORD *)v37 + 25);
      v38 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) + 44) = *((_DWORD *)v38 + 24);
      v39 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *(_QWORD *)v39 |= 0x820000uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) & 0x87) != 0 )
    {
      v40 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_QWORD *)v40 + 1) |= 0x87uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i) & 2) != 0 )
    {
      v41 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
      *((_QWORD *)v41 + 1) |= 2uLL;
    }
    v42 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v49, i);
    v44 = CCD_TOPOLOGY::AddPathDescriptor(a2, v42, v43);
    v14 = v44;
    if ( v44 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v46, v45);
      v47[3] = v14;
      v47[4] = i;
      v47[5] = this;
      v48 = *((_QWORD *)a2 + 8);
      if ( v48 )
        v15 = *(_WORD *)(v48 + 20);
      v47[6] = v15;
      WdLogEvent5_WdAssertion(v47);
      break;
    }
  }
LABEL_9:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v49);
  return (unsigned int)v14;
}
