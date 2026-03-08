/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1C0186370
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
  struct OBJECT *v13; // rcx
  GdiHandleManager *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // r13
  GdiHandleEntryDirectory **v30; // rbx
  unsigned int v31; // eax
  GdiHandleEntryDirectory *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r13
  unsigned int v36; // eax
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  unsigned int v39; // edi
  unsigned int v40; // r12d
  __int64 v41; // rcx
  __int64 v42; // r8
  __int128 *v43; // rbx
  unsigned int v44; // eax
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int128 *v48; // r9
  __int64 v49; // rax
  __int128 v50; // xmm3
  __int64 v51; // xmm2_8
  __int64 v52; // rcx
  __int16 v53; // r8
  __int16 v54; // dx
  struct GdiHandleEntryTable *v56; // [rsp+30h] [rbp-40h] BYREF
  __int64 v57; // [rsp+38h] [rbp-38h]
  __int64 v58; // [rsp+40h] [rbp-30h] BYREF
  int v59; // [rsp+48h] [rbp-28h]
  __int64 v60; // [rsp+58h] [rbp-18h] BYREF
  int v61; // [rsp+60h] [rbp-10h]
  GdiHandleManager *v62; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v60 = 0LL;
  v61 = 0;
  v9 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v60, v9, 0, 0, 0);
  if ( v61 )
  {
    v58 = 0LL;
    v59 = 0;
    v10 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v58, v10, 0, 0, 0);
    v11 = v59;
    if ( v59 )
    {
      if ( *((_DWORD *)HANDLELOCK::pObj((HANDLELOCK *)&v60) + 2) == a2 )
      {
        v12 = a5;
        if ( *(_BYTE *)(v60 + 14) == a5 )
        {
          v13 = HANDLELOCK::pObj((HANDLELOCK *)&v58);
          if ( *((_DWORD *)v13 + 2) == a4 && *(_BYTE *)(v58 + 14) == v12 )
          {
            v57 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
            v62 = *(GdiHandleManager **)(v57 + 8008);
            v14 = v62;
            v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v62, v9);
            v16 = *((_QWORD *)v14 + 2);
            v5 = 1;
            v17 = v15;
            v18 = *(_DWORD *)(v16 + 2056);
            v19 = v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16);
            if ( v15 >= v19 )
              goto LABEL_15;
            if ( v15 >= v18 )
              v20 = ((v15 - v18) >> 16) + 1;
            else
              v20 = 0LL;
            v21 = *(_QWORD *)(v16 + 8 * v20 + 8);
            if ( (_DWORD)v20 )
              v17 = ((1 - (_DWORD)v20) << 16) - v18 + v15;
            if ( (unsigned int)v17 >= *(_DWORD *)(v21 + 20) )
LABEL_15:
              v22 = 0LL;
            else
              v22 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
            v23 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v62, v10);
            v24 = v23;
            if ( v23 >= v19 )
              goto LABEL_24;
            if ( v23 >= v18 )
              v25 = ((v23 - v18) >> 16) + 1;
            else
              v25 = 0LL;
            v26 = *(_QWORD *)(v16 + 8 * v25 + 8);
            if ( (_DWORD)v25 )
              v24 = ((1 - (_DWORD)v25) << 16) - v18 + v23;
            if ( (unsigned int)v24 >= *(_DWORD *)(v26 + 20) )
LABEL_24:
              v27 = 0LL;
            else
              v27 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
            v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v62, v9);
            v56 = 0LL;
            LODWORD(v62) = 0;
            if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
                   (GdiHandleEntryDirectory *)v16,
                   v28,
                   &v56,
                   (unsigned int *)&v62)
              && (unsigned int)v62 < *((_DWORD *)v56 + 5) )
            {
              *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v56 + 3) + 8 * ((unsigned __int64)(unsigned int)v62 >> 8))
                        + 16LL * (unsigned __int8)v62
                        + 8) = v27;
            }
            v29 = v57;
            v30 = *(GdiHandleEntryDirectory ***)(v57 + 8008);
            v31 = GdiHandleManager::DecodeIndex(v30, v10);
            v32 = v30[2];
            v56 = 0LL;
            LODWORD(v62) = 0;
            if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v32, v31, &v56, (unsigned int *)&v62)
              && (unsigned int)v62 < *((_DWORD *)v56 + 5) )
            {
              *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v56 + 3) + 8 * ((unsigned __int64)(unsigned int)v62 >> 8))
                        + 16LL * (unsigned __int8)v62
                        + 8) = v22;
            }
            v33 = v58;
            v34 = *(_QWORD *)(v60 + 16);
            *(_QWORD *)(v60 + 16) = *(_QWORD *)(v58 + 16);
            *(_QWORD *)(v33 + 16) = v34;
            v35 = *(_QWORD *)(v29 + 8008);
            v36 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v35, v9);
            v37 = *(_QWORD *)(v35 + 16);
            v38 = v36;
            v39 = *(_DWORD *)(v37 + 2056);
            v40 = v39 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16);
            if ( v36 >= v40 )
              goto LABEL_39;
            if ( v36 >= v39 )
              v41 = ((v36 - v39) >> 16) + 1;
            else
              v41 = 0LL;
            v42 = *(_QWORD *)(v37 + 8 * v41 + 8);
            if ( (_DWORD)v41 )
              v38 = ((1 - (_DWORD)v41) << 16) - v39 + v36;
            if ( (unsigned int)v38 >= *(_DWORD *)(v42 + 20) )
LABEL_39:
              v43 = 0LL;
            else
              v43 = *(__int128 **)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * (v38 >> 8))
                                 + 16LL * (unsigned __int8)v38
                                 + 8);
            v44 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v35, v10);
            v45 = v44;
            if ( v44 >= v40 )
              goto LABEL_48;
            if ( v44 >= v39 )
              v46 = ((v44 - v39) >> 16) + 1;
            else
              v46 = 0LL;
            v47 = *(_QWORD *)(v37 + 8 * v46 + 8);
            if ( (_DWORD)v46 )
              v45 = ((1 - (_DWORD)v46) << 16) - v39 + v44;
            if ( (unsigned int)v45 >= *(_DWORD *)(v47 + 20) )
LABEL_48:
              v48 = 0LL;
            else
              v48 = *(__int128 **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * (v45 >> 8))
                                 + 16LL * (unsigned __int8)v45
                                 + 8);
            v49 = v60;
            v50 = *v43;
            v51 = *((_QWORD *)v43 + 2);
            *v43 = *v48;
            *((_QWORD *)v43 + 2) = *((_QWORD *)v48 + 2);
            *v48 = v50;
            *((_QWORD *)v48 + 2) = v51;
            if ( *(_BYTE *)(v49 + 14) == 5 && *(_BYTE *)(v58 + 14) == 5 )
            {
              v52 = *((_QWORD *)v43 + 85);
              *((_QWORD *)v43 + 85) = *((_QWORD *)v48 + 85);
              *((_QWORD *)v48 + 85) = v52;
            }
            v53 = *((_WORD *)v48 + 7);
            v54 = *((_WORD *)v43 + 7);
            *((_WORD *)v43 + 7) = v54 & 0x4000 | v53 & 0x8000;
            *((_WORD *)v48 + 7) = v53 & 0x4000 | v54 & 0x8000;
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v58);
      v11 = v59;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
    if ( v11 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v58);
  }
  if ( v61 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
  return v5;
}
