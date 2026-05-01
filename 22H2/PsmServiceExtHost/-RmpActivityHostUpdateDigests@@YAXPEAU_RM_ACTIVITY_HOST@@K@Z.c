/*
 * XREFs of ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180012970
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000FE38 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800108A0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180015250 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FD90 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180016930 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180018850 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x1800375A0 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

void __fastcall RmpActivityHostUpdateDigests(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  struct _RM_ACTIVITY_HOST *v3; // rsi
  __int16 v4; // bx
  __int16 v5; // r11
  struct _RM_ACTIVITY_HOST *v6; // rdx
  char *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  char v10; // r9
  unsigned __int64 v11; // rdx
  __int16 v12; // ax
  __int16 v13; // r8
  __int16 v14; // dx
  unsigned __int64 v15; // rdx
  char v16; // r9
  __int16 v17; // r10
  __int16 v18; // bx
  __int16 v19; // ax
  __int16 v20; // bx
  __int16 v21; // ax
  __int16 v22; // bx
  __int16 v23; // bx
  __int16 v24; // ax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int16 v28; // bx
  __int64 v29; // rax
  int v30; // r11d
  char *v31; // rax
  __int16 v32; // r11
  char *v33; // rcx
  char *v34; // rbp
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // r11
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx

  v3 = a1;
  v4 = 102;
  if ( (a2 & 1) != 0 )
  {
    v31 = (char *)a1 + 1112;
    v32 = 102;
    v33 = (char *)*((_QWORD *)a1 + 139);
    if ( v33 != v31 )
    {
      v34 = v33 - 1296;
      if ( v33 != (char *)1296 )
      {
        do
        {
          if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v34) )
          {
            v35 = RmpPolicyDigestCompute();
            v32 = RmpPolicyDigestMerge(v36, v35);
          }
          v37 = *((_QWORD *)v34 + 162);
          v38 = *((_QWORD *)v34 + 165);
          v39 = 3LL * *((int *)v34 + 332) + 139;
          v34 = 0LL;
          if ( v37 != v38 + 8 * v39 )
            v34 = (char *)(v37 - 1296);
        }
        while ( v34 );
      }
    }
    *((_WORD *)v3 + 580) = v32;
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = *((_WORD *)v3 + 581);
    v6 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v3 + 142);
    v7 = 0LL;
    if ( v6 != (struct _RM_ACTIVITY_HOST *)((char *)v3 + 1136) )
      v7 = (char *)v6 - 1296;
    if ( v7 )
    {
      v8 = 0x11000002000LL;
      v9 = 0x8800001000LL;
      do
      {
        if ( *((_DWORD *)v7 + 320) == 2 || (v7[1332] & 4) != 0 )
        {
          v10 = v7[1378];
          if ( (v10 & 8) != 0 || (v11 = *((int *)v7 + 334), (unsigned int)v11 <= 0x27) && _bittest64(&v9, v11) )
          {
            v14 = *((_WORD *)v7 + 688);
            v13 = 2;
            LOBYTE(v12) = v14;
          }
          else
          {
            v12 = *((_WORD *)v7 + 688);
            if ( (v12 & 0x10) != 0 || (unsigned int)v11 <= 0x28 && _bittest64(&v8, v11) )
            {
              v13 = 4;
              LOBYTE(v14) = *((_WORD *)v7 + 688);
            }
            else
            {
              v13 = 1;
              LOBYTE(v14) = *((_WORD *)v7 + 688);
            }
          }
          if ( (v14 & 0x10) == 0 && ((v15 = *((int *)v7 + 334), (unsigned int)v15 > 0x28) || !_bittest64(&v8, v15))
            || (v10 & 0x40) != 0 )
          {
            v13 |= 8u;
          }
          v16 = v4 & (v13 | (8 * (v12 & 8 | (2 * (v12 & 3 | (8 * (((*((_DWORD *)v7 + 333) & 8) != 0) | 2)))))));
          v17 = v4 | v13 | (8 * (v12 & 8 | (2 * (v12 & 3 | (8 * ((*((_DWORD *)v7 + 333) >> 3) & 1 | 2))))));
          v18 = 0;
          if ( (v17 & 0x100) != 0 )
            v18 = 256;
          v19 = 0;
          if ( (v17 & 0x80) != 0 )
            v19 = 128;
          v20 = ((v16 & 4) != 0 ? 4 : 0) | ((v16 & 0x20) != 0 ? 0x20 : 0) | ((v16 & 0x40) != 0 ? 0x40 : 0) | v19 | v18;
          v21 = 0;
          v22 = ((v16 & 2) != 0 ? 2 : 0) | v20;
          if ( (v17 & 0x10) != 0 )
            v21 = 16;
          v23 = v21 | v22;
          v24 = 0;
          if ( (v17 & 8) != 0 )
            v24 = 8;
          v4 = ((v17 & 1) != 0) | v24 | v23;
        }
        v25 = *((_QWORD *)v7 + 162);
        v26 = *((_QWORD *)v7 + 165);
        v27 = 3LL * *((int *)v7 + 332) + 139;
        v7 = 0LL;
        if ( v25 != v26 + 8 * v27 )
          v7 = (char *)(v25 - 1296);
      }
      while ( v7 );
      v3 = a1;
    }
    *((_WORD *)v3 + 581) = v4;
    v28 = v4 & 0x80;
    v29 = *((_QWORD *)v3 + 7);
    v30 = v5 & 0x80;
    if ( v30 && !v28 )
    {
      --*(_DWORD *)(v29 + 196);
    }
    else if ( !v30 )
    {
      if ( v28 )
        ++*(_DWORD *)(v29 + 196);
    }
  }
}
