/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1C00BDCC0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00B9E00 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002FF20 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C00BE100 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned int v5; // esi
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  int v11; // ebx
  char v12; // bl
  GdiHandleManager *v13; // r12
  unsigned int v14; // eax
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  unsigned int v26; // eax
  GdiHandleManager *v27; // rbx
  unsigned int v28; // eax
  GdiHandleEntryDirectory *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  GdiHandleManager *v32; // r13
  unsigned int v33; // eax
  __int64 v34; // r15
  unsigned __int64 v35; // rdx
  int v36; // r12d
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // r8
  __int128 *v40; // rbx
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int128 *v45; // r9
  __int64 v46; // rax
  __int128 v47; // xmm3
  __int64 v48; // xmm2_8
  __int64 v49; // rcx
  __int16 v50; // r8
  __int16 v51; // dx
  struct GdiHandleEntryTable *v53; // [rsp+30h] [rbp-40h] BYREF
  __int64 v54; // [rsp+38h] [rbp-38h] BYREF
  int v55; // [rsp+40h] [rbp-30h]
  __int64 v56; // [rsp+50h] [rbp-20h] BYREF
  int v57; // [rsp+58h] [rbp-18h]
  unsigned int v58; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v56 = 0LL;
  v57 = 0;
  v9 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v56, v9, 0, 0, 0);
  if ( v57 )
  {
    v54 = 0LL;
    v55 = 0;
    v10 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v54, v10, 0, 0, 0);
    v11 = v55;
    if ( v55 )
    {
      if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v56) == a2 )
      {
        v12 = a5;
        if ( *(_BYTE *)(v56 + 14) == a5
          && HANDLELOCK::ShareCount((HANDLELOCK *)&v54) == a4
          && *(_BYTE *)(v54 + 14) == v12 )
        {
          v13 = gpHandleManager;
          v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v9);
          v15 = *((_QWORD *)v13 + 2);
          v5 = 1;
          v16 = v14;
          v17 = *(_DWORD *)(v15 + 2056);
          v58 = *(unsigned __int16 *)(v15 + 2);
          if ( v14 >= v17 + ((v58 + 0xFFFF) << 16) )
            goto LABEL_52;
          if ( v14 >= v17 )
            v18 = ((v14 - v17) >> 16) + 1;
          else
            v18 = 0LL;
          v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
          if ( (_DWORD)v18 )
            v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
          if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
LABEL_52:
            v20 = 0LL;
          else
            v20 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
          v21 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v13, v10);
          v22 = v21;
          if ( v21 >= v17 + (((unsigned __int16)v58 + 0xFFFF) << 16) )
            goto LABEL_54;
          if ( v21 >= v17 )
            v23 = ((v21 - v17) >> 16) + 1;
          else
            v23 = 0LL;
          v24 = *(_QWORD *)(v15 + 8 * v23 + 8);
          if ( (_DWORD)v23 )
            v22 = ((1 - (_DWORD)v23) << 16) - v17 + v21;
          if ( (unsigned int)v22 >= *(_DWORD *)(v24 + 20) )
LABEL_54:
            v25 = 0LL;
          else
            v25 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
          v26 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v13, v9);
          v53 = 0LL;
          v58 = 0;
          if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
                 (GdiHandleEntryDirectory *)v15,
                 v26,
                 &v53,
                 &v58)
            && v58 < *((_DWORD *)v53 + 5) )
          {
            *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v53 + 3) + 8 * ((unsigned __int64)v58 >> 8))
                      + 16LL * (unsigned __int8)v58
                      + 8) = v25;
          }
          v27 = gpHandleManager;
          v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v10);
          v29 = (GdiHandleEntryDirectory *)*((_QWORD *)v27 + 2);
          v53 = 0LL;
          v58 = 0;
          if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v29, v28, &v53, &v58)
            && v58 < *((_DWORD *)v53 + 5) )
          {
            *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v53 + 3) + 8 * ((unsigned __int64)v58 >> 8))
                      + 16LL * (unsigned __int8)v58
                      + 8) = v20;
          }
          v30 = v54;
          v31 = *(_QWORD *)(v56 + 16);
          *(_QWORD *)(v56 + 16) = *(_QWORD *)(v54 + 16);
          *(_QWORD *)(v30 + 16) = v31;
          v32 = gpHandleManager;
          v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v9);
          v34 = *((_QWORD *)v32 + 2);
          v35 = v33;
          v36 = *(unsigned __int16 *)(v34 + 2);
          v37 = *(_DWORD *)(v34 + 2056);
          if ( v33 >= v37 + ((v36 + 0xFFFF) << 16) )
            goto LABEL_56;
          if ( v33 >= v37 )
            v38 = ((v33 - v37) >> 16) + 1;
          else
            v38 = 0LL;
          v39 = *(_QWORD *)(v34 + 8 * v38 + 8);
          if ( (_DWORD)v38 )
            v35 = ((1 - (_DWORD)v38) << 16) - v37 + v33;
          if ( (unsigned int)v35 >= *(_DWORD *)(v39 + 20) )
LABEL_56:
            v40 = 0LL;
          else
            v40 = *(__int128 **)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
          v41 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v32, v10);
          v42 = v41;
          if ( v41 >= v37 + ((v36 + 0xFFFF) << 16) )
            goto LABEL_58;
          if ( v41 >= v37 )
            v43 = ((v41 - v37) >> 16) + 1;
          else
            v43 = 0LL;
          v44 = *(_QWORD *)(v34 + 8 * v43 + 8);
          if ( (_DWORD)v43 )
            v42 = ((1 - (_DWORD)v43) << 16) - v37 + v41;
          if ( (unsigned int)v42 >= *(_DWORD *)(v44 + 20) )
LABEL_58:
            v45 = 0LL;
          else
            v45 = *(__int128 **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42 + 8);
          v46 = v56;
          v47 = *v40;
          v48 = *((_QWORD *)v40 + 2);
          *v40 = *v45;
          *((_QWORD *)v40 + 2) = *((_QWORD *)v45 + 2);
          *v45 = v47;
          *((_QWORD *)v45 + 2) = v48;
          if ( *(_BYTE *)(v46 + 14) == 5 && *(_BYTE *)(v54 + 14) == 5 )
          {
            v49 = *((_QWORD *)v40 + 85);
            *((_QWORD *)v40 + 85) = *((_QWORD *)v45 + 85);
            *((_QWORD *)v45 + 85) = v49;
          }
          v50 = *((_WORD *)v45 + 7);
          v51 = *((_WORD *)v40 + 7);
          *((_WORD *)v40 + 7) = v51 & 0x4000 | v50 & 0x8000;
          *((_WORD *)v45 + 7) = v50 & 0x4000 | v51 & 0x8000;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v54);
      v11 = v55;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v56);
    if ( v11 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v54);
    if ( v57 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v56);
  }
  return v5;
}
