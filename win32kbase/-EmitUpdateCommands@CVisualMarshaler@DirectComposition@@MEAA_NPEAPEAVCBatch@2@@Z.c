/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00632D0 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ABBA0 (-EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BA310 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BD4B0 (-EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259EB0 (-EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A5A0 (-EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AEB0 (-EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AFD0 (-EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025B170 (-EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026AF30 (-EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0064A50 (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  struct DirectComposition::CBatch **v5; // rdx
  struct DirectComposition::CBatch *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char *v9; // rcx
  struct DirectComposition::CBatch **v10; // rax
  struct DirectComposition::CApplicationChannel *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // r15d
  int v17; // eax
  int v18; // r15d
  __int64 v20; // rbx
  __int64 v21; // rdi
  struct DirectComposition::CBatch **v22; // rdx
  struct DirectComposition::CBatch *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  int v27; // eax
  struct DirectComposition::CBatch **v28; // rdx
  struct DirectComposition::CBatch *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  char *v32; // rcx
  char *v33; // rcx
  char *v34; // rcx
  char *v35; // rcx
  __int64 v36; // rax
  char *v37; // rcx
  char *v38; // rcx
  char *v39; // rcx
  __int64 v40; // rax
  int v41; // edx
  char *v42; // rcx
  char *v43; // rcx
  char *v44; // rcx
  char *v45; // rcx
  __int64 v46; // rax
  int v47; // edx
  char *v48; // rcx
  __int64 v49; // rax
  int v50; // edx
  char *v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  char *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  char *v57; // rcx
  char *v58; // rcx
  char *v59; // rcx
  __int64 v60; // rax
  int v61; // edx
  char *v62; // rcx
  char *v63; // rcx
  __int64 v64; // rax
  int v65; // eax
  char *v66; // rcx
  char *v67; // rcx
  char *v68; // rcx
  char *v69; // rcx
  char *v70; // rcx
  char *v71; // rcx
  char *v72; // rcx
  bool v73; // r13
  void *v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rsi
  char *v79; // rcx
  int v80; // eax
  _DWORD *v81; // rdx
  unsigned __int64 v82; // r10
  __int64 v83; // r8
  __int64 v84; // rcx
  bool v85; // r13
  void *v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rsi
  char *v91; // rcx
  int v92; // eax
  _DWORD *v93; // rdx
  unsigned __int64 v94; // r10
  __int64 v95; // r8
  __int64 v96; // rcx
  void *i; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x20) != 0 )
  {
    v5 = *a2;
    i = 0LL;
    v6 = v5[17];
    v7 = *((_QWORD *)v6 + 5);
    if ( (unsigned __int64)(4096 - v7) >= 0x10
      && (v8 = *((_QWORD *)v6 + 7), *((_QWORD *)v6 + 5) = v7 + 16, (v9 = (char *)(v7 + v8)) != 0LL) )
    {
      v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 16);
    }
    else
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
        return 0;
      if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &i) )
        goto LABEL_130;
      v9 = (char *)i;
    }
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 267;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v44 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v44 + 4) = 0LL;
    *((_DWORD *)v44 + 3) = 0;
    *((_DWORD *)v44 + 1) = 308;
    *((_DWORD *)v44 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v44 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v10 = *a2;
  i = 0LL;
  v11 = v10[1];
  if ( *((_QWORD *)this + 25) )
  {
    do
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
        break;
      DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(this, v11, i);
    }
    while ( *((_QWORD *)this + 25) );
    if ( *((_QWORD *)this + 25) )
      return 0;
  }
  v12 = *((_DWORD *)this + 4);
  if ( (v12 & 0x2000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0xCuLL, &i) )
      return 0;
    v62 = (char *)i;
    *(_DWORD *)i = 12;
    *(_QWORD *)(v62 + 4) = 0LL;
    *((_DWORD *)v62 + 1) = 392;
    *((_DWORD *)v62 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x2000u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x4000) != 0 )
  {
    v20 = *((_QWORD *)this + 22);
    v21 = 0LL;
    for ( i = 0LL; v20; v20 = *(_QWORD *)(v20 + 184) )
    {
      if ( (*(_DWORD *)(v20 + 16) & 0x10) == 0 )
      {
        v22 = *a2;
        v23 = (*a2)[17];
        v24 = *((_QWORD *)v23 + 5);
        if ( (unsigned __int64)(4096 - v24) >= 0x18
          && (v25 = *((_QWORD *)v23 + 7), *((_QWORD *)v23 + 5) = v24 + 24, (v26 = (_DWORD *)(v24 + v25)) != 0LL) )
        {
          v22[19] = (struct DirectComposition::CBatch *)((char *)v22[19] + 24);
          i = v26;
        }
        else
        {
          if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
            return 0;
          if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x18uLL, &i) )
            goto LABEL_130;
          v26 = i;
        }
        *v26 = 24;
        *(_OWORD *)(v26 + 1) = 0LL;
        v26[5] = 0;
        v26[1] = 390;
        v26[2] = *((_DWORD *)this + 8);
        v26[3] = *(_DWORD *)(v20 + 32);
        if ( v21 )
          v27 = *(_DWORD *)(v21 + 32);
        else
          v27 = 0;
        v26[4] = v27;
        *((_BYTE *)v26 + 20) = 1;
        *(_DWORD *)(v20 + 16) |= 0x10u;
      }
      v21 = v20;
    }
    *((_DWORD *)this + 4) &= ~0x4000u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x80u) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x18uLL, &i) )
      return 0;
    v33 = (char *)i;
    *(_DWORD *)i = 24;
    *(_OWORD *)(v33 + 4) = 0LL;
    *((_DWORD *)v33 + 5) = 0;
    *((_DWORD *)v33 + 1) = 407;
    *((_DWORD *)v33 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v33 + 3) = *((_DWORD *)this + 18);
    *((_DWORD *)v33 + 4) = *((_DWORD *)this + 19);
    *((_DWORD *)v33 + 5) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x80u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x200000) != 0 )
  {
    v28 = *a2;
    i = 0LL;
    v29 = v28[17];
    v30 = *((_QWORD *)v29 + 5);
    if ( (unsigned __int64)(4096 - v30) >= 0x14 )
    {
      v31 = *((_QWORD *)v29 + 7);
      *((_QWORD *)v29 + 5) = v30 + 20;
      v32 = (char *)(v30 + v31);
      if ( v32 )
      {
        v28[19] = (struct DirectComposition::CBatch *)((char *)v28[19] + 20);
LABEL_52:
        *(_DWORD *)v32 = 20;
        *(_OWORD *)(v32 + 4) = 0LL;
        *((_DWORD *)v32 + 1) = 416;
        *((_DWORD *)v32 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v32 + 3) = *((_DWORD *)this + 21);
        *((_DWORD *)v32 + 4) = *((_DWORD *)this + 22);
        *((_DWORD *)this + 4) &= ~0x200000u;
        v12 = *((_DWORD *)this + 4);
        goto LABEL_12;
      }
    }
    if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
      return 0;
    if ( DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x14uLL, &i) )
    {
      v32 = (char *)i;
      goto LABEL_52;
    }
LABEL_130:
    KeBugCheck(0xC000000D);
  }
LABEL_12:
  if ( (v12 & 0x1000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x18uLL, &i) )
      return 0;
    v57 = (char *)i;
    *(_DWORD *)i = 24;
    *(_OWORD *)(v57 + 4) = 0LL;
    *((_DWORD *)v57 + 5) = 0;
    *((_DWORD *)v57 + 1) = 412;
    *((_DWORD *)v57 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v57 + 3) = *((_DWORD *)this + 23);
    *((_DWORD *)v57 + 4) = *((_DWORD *)this + 24);
    *((_DWORD *)v57 + 5) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) &= ~0x1000000u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x2000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x14uLL, &i) )
      return 0;
    v43 = (char *)i;
    *(_DWORD *)i = 20;
    *(_OWORD *)(v43 + 4) = 0LL;
    *((_DWORD *)v43 + 1) = 413;
    *((_DWORD *)v43 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v43 + 3) = *((_DWORD *)this + 26);
    *((_DWORD *)v43 + 4) = *((_DWORD *)this + 27);
    *((_DWORD *)this + 4) &= ~0x2000000u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x100) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v35 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v35 + 4) = 0LL;
    *((_DWORD *)v35 + 3) = 0;
    *((_DWORD *)v35 + 1) = 419;
    *((_DWORD *)v35 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v35 + 3) = 0;
    v36 = *((_QWORD *)this + 17);
    if ( v36 )
      *((_DWORD *)v35 + 3) = *(_DWORD *)(v36 + 32);
    *((_DWORD *)this + 4) &= ~0x100u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x200) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x14uLL, &i) )
      return 0;
    v51 = (char *)i;
    *(_DWORD *)i = 20;
    *(_OWORD *)(v51 + 4) = 0LL;
    *((_DWORD *)v51 + 1) = 420;
    *((_DWORD *)v51 + 2) = *((_DWORD *)this + 8);
    v52 = *((_QWORD *)this + 18);
    if ( v52 )
      v53 = *(_DWORD *)(v52 + 32);
    else
      v53 = 0;
    *((_DWORD *)v51 + 3) = v53;
    v51[16] = *((_BYTE *)this + 312) >> 7;
    *((_DWORD *)this + 4) &= ~0x200u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x400) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v54 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v54 + 4) = 0LL;
    *((_DWORD *)v54 + 3) = 0;
    *((_DWORD *)v54 + 1) = 401;
    *((_DWORD *)v54 + 2) = *((_DWORD *)this + 8);
    v55 = *((_QWORD *)this + 19);
    if ( v55 )
      v56 = *(_DWORD *)(v55 + 32);
    else
      v56 = 0;
    *((_DWORD *)v54 + 3) = v56;
    *((_DWORD *)this + 4) &= ~0x400u;
    v12 = *((_DWORD *)this + 4);
  }
  if ( (v12 & 0x4000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v59 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v59 + 4) = 0LL;
    *((_DWORD *)v59 + 3) = 0;
    *((_DWORD *)v59 + 1) = 422;
    *((_DWORD *)v59 + 2) = *((_DWORD *)this + 8);
    v60 = *((_QWORD *)this + 28);
    if ( v60 )
      v61 = *(_DWORD *)(v60 + 32);
    else
      v61 = 0;
    *((_DWORD *)v59 + 3) = v61;
    *((_DWORD *)this + 4) &= ~0x4000000u;
  }
  v13 = *((_DWORD *)this + 92);
  if ( (v13 & 4) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v63 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v63 + 4) = 0LL;
    *((_DWORD *)v63 + 3) = 0;
    *((_DWORD *)v63 + 1) = 395;
    *((_DWORD *)v63 + 2) = *((_DWORD *)this + 8);
    v64 = *((_QWORD *)this + 29);
    if ( v64 )
      v65 = *(_DWORD *)(v64 + 32);
    else
      v65 = 0;
    *((_DWORD *)v63 + 3) = v65;
    *((_DWORD *)this + 92) &= ~4u;
    v13 = *((_DWORD *)this + 92);
  }
  if ( (v13 & 8) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x1CuLL, &i) )
      return 0;
    v66 = (char *)i;
    *(_DWORD *)i = 28;
    *(_OWORD *)(v66 + 4) = 0LL;
    *(_QWORD *)(v66 + 20) = 0LL;
    *((_DWORD *)v66 + 1) = 396;
    *((_DWORD *)v66 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v66 + 12) = *((_OWORD *)this + 15);
    *((_DWORD *)this + 92) &= ~8u;
  }
  v14 = *((_DWORD *)this + 4);
  if ( (v14 & 0x1000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v39 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v39 + 4) = 0LL;
    *((_DWORD *)v39 + 3) = 0;
    *((_DWORD *)v39 + 1) = 397;
    *((_DWORD *)v39 + 2) = *((_DWORD *)this + 8);
    v40 = *((_QWORD *)this + 20);
    if ( v40 )
      v41 = *(_DWORD *)(v40 + 32);
    else
      v41 = 0;
    *((_DWORD *)v39 + 3) = v41;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x800) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v45 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v45 + 4) = 0LL;
    *((_DWORD *)v45 + 3) = 0;
    *((_DWORD *)v45 + 1) = 399;
    *((_DWORD *)v45 + 2) = *((_DWORD *)this + 8);
    v46 = *((_QWORD *)this + 21);
    if ( v46 )
      v47 = *(_DWORD *)(v46 + 32);
    else
      v47 = 0;
    *((_DWORD *)v45 + 3) = v47;
    *((_DWORD *)this + 4) &= ~0x800u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x8000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x34uLL, &i) )
      return 0;
    v34 = (char *)i;
    *(_DWORD *)i = 52;
    *(_OWORD *)(v34 + 4) = 0LL;
    *(_OWORD *)(v34 + 20) = 0LL;
    *(_OWORD *)(v34 + 36) = 0LL;
    *((_DWORD *)v34 + 1) = 414;
    *((_DWORD *)v34 + 2) = *((_DWORD *)this + 8);
    if ( *((_DWORD *)this + 65) != -1 )
    {
      *((_DWORD *)v34 + 3) |= 2u;
      *((_DWORD *)v34 + 4) = *((_DWORD *)this + 65);
    }
    if ( *((_DWORD *)this + 64) != -1 )
    {
      *((_DWORD *)v34 + 3) |= 8u;
      *((_DWORD *)v34 + 5) = *((_DWORD *)this + 64);
    }
    if ( *((_DWORD *)this + 66) != -1 )
    {
      *((_DWORD *)v34 + 3) |= 0x10u;
      *((_DWORD *)v34 + 8) = *((_DWORD *)this + 66);
    }
    if ( *((_DWORD *)this + 67) != -1 )
    {
      *((_DWORD *)v34 + 3) |= 0x20u;
      *((_DWORD *)v34 + 9) = *((_DWORD *)this + 67);
    }
    if ( *((_DWORD *)this + 68) != -1 )
    {
      *((_DWORD *)v34 + 3) |= 0x40u;
      *((_DWORD *)v34 + 10) = *((_DWORD *)this + 68);
    }
    if ( *((_DWORD *)this + 69) != -1 )
    {
      *((_DWORD *)v34 + 3) |= 0x80u;
      *((_DWORD *)v34 + 11) = *((_DWORD *)this + 69);
    }
    *((_DWORD *)this + 4) &= ~0x8000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x10000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v38 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v38 + 4) = 0LL;
    *((_DWORD *)v38 + 3) = 0;
    *((_DWORD *)v38 + 1) = 409;
    *((_DWORD *)v38 + 2) = *((_DWORD *)this + 8);
    v38[12] = (*((_BYTE *)this + 312) & 0x10) != 0;
    v38[13] = (*((_BYTE *)this + 312) & 8) != 0;
    v38[14] = *((_BYTE *)this + 313) & 1;
    v38[15] = (*((_BYTE *)this + 313) & 2) != 0;
    *((_DWORD *)this + 4) &= ~0x10000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x20000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v67 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v67 + 4) = 0LL;
    *((_DWORD *)v67 + 3) = 0;
    *((_DWORD *)v67 + 1) = 391;
    *((_DWORD *)v67 + 2) = *((_DWORD *)this + 8);
    v67[12] = (*((_BYTE *)this + 312) & 0x20) != 0;
    *((_DWORD *)this + 4) &= ~0x20000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x80000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v68 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v68 + 4) = 0LL;
    *((_DWORD *)v68 + 3) = 0;
    *((_DWORD *)v68 + 1) = 411;
    *((_DWORD *)v68 + 2) = *((_DWORD *)this + 8);
    v68[12] = (*((_BYTE *)this + 312) & 2) != 0;
    v68[13] = (*((_BYTE *)this + 312) & 4) != 0;
    *((_DWORD *)this + 4) &= ~0x80000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x40000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x24uLL, &i) )
      return 0;
    v69 = (char *)i;
    *(_DWORD *)i = 36;
    *(_OWORD *)(v69 + 4) = 0LL;
    *(_OWORD *)(v69 + 20) = 0LL;
    *((_DWORD *)v69 + 1) = 404;
    *((_DWORD *)v69 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v69 + 7) = *((_DWORD *)this + 76);
    *(_OWORD *)(v69 + 12) = *((_OWORD *)this + 18);
    *((_DWORD *)v69 + 8) = *((_DWORD *)this + 77);
    *((_DWORD *)this + 4) &= ~0x40000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x100000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v48 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v48 + 4) = 0LL;
    *((_DWORD *)v48 + 3) = 0;
    *((_DWORD *)v48 + 1) = 405;
    *((_DWORD *)v48 + 2) = *((_DWORD *)this + 8);
    v49 = *((_QWORD *)this + 27);
    if ( v49 )
      v50 = *(_DWORD *)(v49 + 32);
    else
      v50 = 0;
    *((_DWORD *)v48 + 3) = v50;
    *((_DWORD *)this + 4) &= ~0x100000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x400000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v42 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v42 + 4) = 0LL;
    *((_DWORD *)v42 + 3) = 0;
    *((_DWORD *)v42 + 1) = 408;
    *((_DWORD *)v42 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v42 + 3) = *((_DWORD *)this + 28);
    *((_DWORD *)this + 4) &= ~0x400000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x800000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v37 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v37 + 4) = 0LL;
    *((_DWORD *)v37 + 3) = 0;
    *((_DWORD *)v37 + 1) = 421;
    *((_DWORD *)v37 + 2) = *((_DWORD *)this + 8);
    v37[12] = (*((_BYTE *)this + 312) & 0x40) != 0;
    *((_DWORD *)this + 4) &= ~0x800000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x8000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v70 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v70 + 4) = 0LL;
    *((_DWORD *)v70 + 3) = 0;
    *((_DWORD *)v70 + 1) = 417;
    *((_DWORD *)v70 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v70 + 3) = *((_DWORD *)this + 70);
    *((_DWORD *)this + 4) &= ~0x8000000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x10000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v71 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v71 + 4) = 0LL;
    *((_DWORD *)v71 + 3) = 0;
    *((_DWORD *)v71 + 1) = 389;
    *((_DWORD *)v71 + 2) = *((_DWORD *)this + 8);
    v71[12] = *((_BYTE *)this + 312) & 1;
    *((_DWORD *)this + 4) &= ~0x10000000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x20000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &i) )
      return 0;
    v72 = (char *)i;
    *(_DWORD *)i = 16;
    *(_QWORD *)(v72 + 4) = 0LL;
    *((_DWORD *)v72 + 3) = 0;
    *((_DWORD *)v72 + 1) = 394;
    *((_DWORD *)v72 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v72 + 3) = *((_DWORD *)this + 71);
    *((_DWORD *)this + 4) &= ~0x20000000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x40000000) != 0 )
  {
    i = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x1CuLL, &i) )
      return 0;
    v58 = (char *)i;
    *(_DWORD *)i = 28;
    *(_OWORD *)(v58 + 4) = 0LL;
    *(_QWORD *)(v58 + 20) = 0LL;
    *((_DWORD *)v58 + 1) = 400;
    *((_DWORD *)v58 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v58 + 3) = *((_DWORD *)this + 29);
    *((_DWORD *)v58 + 4) = *((_DWORD *)this + 30);
    *((_DWORD *)v58 + 5) = *((_DWORD *)this + 31);
    *((_DWORD *)v58 + 6) = *((_DWORD *)this + 32);
    *((_DWORD *)this + 4) &= ~0x40000000u;
  }
  v15 = *((_DWORD *)this + 92);
  v16 = *((_DWORD *)this + 8);
  if ( (v15 & 1) != 0 )
  {
    *((_DWORD *)this + 92) = v15 & 0xFFFFFFFE;
    v73 = *((_QWORD *)this + 42) == 0LL;
    while ( *((_QWORD *)this + 42) != *((_QWORD *)this + 40) || v73 )
    {
      v73 = 0;
      v74 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      i = v74;
      if ( (unsigned __int64)v74 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&i) )
        {
          *((_DWORD *)this + 92) |= 1u;
          break;
        }
        v74 = i;
      }
      v75 = *((_QWORD *)this + 40);
      v76 = ((unsigned __int64)v74 - 16) >> 2;
      v77 = *((_QWORD *)this + 42);
      v78 = (unsigned int)(v77 - v75);
      i = 0LL;
      if ( v77 - v75 >= v76 )
        v78 = (unsigned int)v76;
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v78 + 16),
        &i);
      v79 = (char *)i;
      *(_DWORD *)i = 4 * v78 + 16;
      *(_QWORD *)(v79 + 4) = 0LL;
      *((_DWORD *)v79 + 3) = 0;
      v80 = 415;
      if ( *((_QWORD *)this + 40) )
        v80 = 387;
      v81 = v79 + 16;
      *((_DWORD *)v79 + 1) = v80;
      v82 = (unsigned __int64)&v79[4 * v78 + 16];
      *((_DWORD *)v79 + 2) = v16;
      *((_DWORD *)v79 + 3) = 4 * v78;
      v83 = *((_QWORD *)this + 40);
      if ( (unsigned __int64)(v79 + 16) < v82 )
      {
        do
        {
          v84 = v83++;
          *v81++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 41) + 8 * v84) + 32LL);
        }
        while ( (unsigned __int64)v81 < v82 );
      }
      *((_QWORD *)this + 40) += (unsigned int)v78;
    }
  }
  if ( *((_QWORD *)this + 42) == *((_QWORD *)this + 40) )
  {
    v17 = *((_DWORD *)this + 92);
    v18 = *((_DWORD *)this + 8);
    if ( (v17 & 2) != 0 )
    {
      *((_DWORD *)this + 92) = v17 & 0xFFFFFFFD;
      v85 = *((_QWORD *)this + 45) == 0LL;
      while ( *((_QWORD *)this + 45) != *((_QWORD *)this + 43) || v85 )
      {
        v85 = 0;
        v86 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
        i = v86;
        if ( (unsigned __int64)v86 < 0x14 )
        {
          if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&i) )
          {
            *((_DWORD *)this + 92) |= 2u;
            break;
          }
          v86 = i;
        }
        v87 = *((_QWORD *)this + 43);
        v88 = ((unsigned __int64)v86 - 16) >> 2;
        v89 = *((_QWORD *)this + 45);
        v90 = (unsigned int)(v89 - v87);
        i = 0LL;
        if ( v89 - v87 >= v88 )
          v90 = (unsigned int)v88;
        DirectComposition::CBatch::EnsureBatchBuffer(
          (struct DirectComposition::CBatch **)a2,
          (unsigned int)(4 * v90 + 16),
          &i);
        v91 = (char *)i;
        *(_DWORD *)i = 4 * v90 + 16;
        *(_QWORD *)(v91 + 4) = 0LL;
        *((_DWORD *)v91 + 3) = 0;
        v92 = 402;
        if ( *((_QWORD *)this + 43) )
          v92 = 386;
        v93 = v91 + 16;
        *((_DWORD *)v91 + 1) = v92;
        v94 = (unsigned __int64)&v91[4 * v90 + 16];
        *((_DWORD *)v91 + 2) = v18;
        *((_DWORD *)v91 + 3) = 4 * v90;
        v95 = *((_QWORD *)this + 43);
        if ( (unsigned __int64)(v91 + 16) < v94 )
        {
          do
          {
            v96 = v95++;
            *v93++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 8 * v96) + 32LL);
          }
          while ( (unsigned __int64)v93 < v94 );
        }
        *((_QWORD *)this + 43) += (unsigned int)v90;
      }
    }
    if ( *((_QWORD *)this + 45) == *((_QWORD *)this + 43) )
      return 1;
  }
  return 0;
}
