/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00C6C2C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0064910 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF358 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B1074 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B32B0 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 **v19; // rsi
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 *v28; // r8
  __int64 **v29; // rsi
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 **v33; // rcx
  __int64 *v34; // rax
  __int64 result; // rax
  __int64 *v36; // rcx
  __int64 *v37; // rax
  _QWORD *v38; // [rsp+20h] [rbp-20h]
  _QWORD *v39; // [rsp+28h] [rbp-18h]
  __int64 v40; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v41; // [rsp+38h] [rbp-8h]
  __int64 v42; // [rsp+90h] [rbp+50h]

  v42 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
LABEL_3:
    a3 = v42;
  }
  v6 = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 136);
LABEL_5:
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    v9 = a2 & 8;
    if ( (a2 & 8) == 0 || *v8 == a3 )
    {
      v39 = v8 + 5;
      v10 = (_QWORD *)v8[5];
      if ( (_QWORD *)*v39 != v39 )
      {
        while ( 1 )
        {
          v11 = v10;
          v10 = (_QWORD *)*v10;
          v38 = v11 + 2;
          v12 = (_QWORD *)v11[2];
          if ( (_QWORD *)*v38 != v38 )
            break;
LABEL_26:
          if ( v10 == v39 )
          {
            a3 = v42;
            v6 = (_QWORD *)(a1 + 136);
            goto LABEL_5;
          }
        }
        while ( 1 )
        {
          v13 = (__int64)(v12 - 7);
          v12 = (_QWORD *)*v12;
          v14 = **(_QWORD **)v13;
          if ( (*(_DWORD *)(v14 + 80) & 0x400) == 0 )
            break;
LABEL_25:
          if ( v12 == v38 )
            goto LABEL_26;
        }
        v15 = **(unsigned int **)(v14 + 496);
        if ( (v15 & 0x40000000) != 0 && (int)v15 >= 0 && !(_DWORD)v9 )
        {
          v16 = WdLogNewEntry5_WdWarning(v9, v15);
          *(_QWORD *)(v16 + 24) = v13;
          WdLogEvent5_WdWarning(v16);
          if ( VIDMM_GLOBAL::InvalidateOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (DXGFASTMUTEX **)v14) )
            goto LABEL_3;
          v9 = a2 & 8;
        }
        if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          if ( (_DWORD)v9 )
          {
            v17 = WdLogNewEntry5_WdError(v9, v15, a3, a4);
            *(_QWORD *)(v17 + 24) = v13;
            WdLogEvent5_WdError(v17);
LABEL_24:
            v9 = a2 & 8;
            goto LABEL_25;
          }
          VIDMM_GLOBAL::UnpinOneAllocation(*(struct VIDMM_ALLOC ***)(a1 + 8), v13, 3LL, 0);
        }
        if ( (**(_DWORD **)(v14 + 496) & 0x10000000) == 0
          && (*(_DWORD *)(v14 + 76) & 0x100) == 0
          && (*(_DWORD *)(v13 + 28) & 3) != 0 )
        {
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v13);
        }
        goto LABEL_24;
      }
    }
  }
  v18 = &v40;
  v41 = &v40;
  v40 = (__int64)&v40;
  v19 = (__int64 **)(a1 + 160);
  while ( 1 )
  {
    v20 = *v19;
    if ( *v19 == (__int64 *)v19 )
      break;
    v21 = (__int64)(v20 - 47);
    if ( (*(_DWORD *)v20[15] & 0x10000000) == 0
      && (*(_DWORD *)(v21 + 80) & 0x400) == 0
      && (*(_DWORD *)(v21 + 76) & 0x100) == 0
      && ((a2 & 4) == 0 || *(_QWORD *)(v21 + 16) + *(_QWORD *)(v21 + 136) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v21 + 152) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v21, a2, a4);
      v18 = v41;
    }
    v22 = (__int64 *)*v20;
    if ( *v20 )
    {
      if ( (__int64 *)v22[1] != v20 )
        goto LABEL_73;
      v23 = (__int64 **)v20[1];
      if ( *v23 != v20 )
        goto LABEL_73;
      *v23 = v22;
      v22[1] = (__int64)v23;
      v24 = v41;
      if ( (__int64 *)*v41 != &v40 )
        goto LABEL_73;
      v20[1] = (__int64)v41;
      *v20 = (__int64)&v40;
      v18 = v20;
      *v24 = (__int64)v20;
      v41 = v20;
    }
  }
  if ( (__int64 *)v40 != &v40 )
  {
    v25 = *(__int64 **)(a1 + 168);
    if ( (__int64 **)v20[1] != v19 )
      goto LABEL_73;
    if ( (__int64 **)*v25 != v19 )
      goto LABEL_73;
    if ( *(__int64 **)(v40 + 8) != &v40 )
      goto LABEL_73;
    if ( (__int64 *)*v18 != &v40 )
      goto LABEL_73;
    *v25 = (__int64)&v40;
    v26 = v41;
    *(_QWORD *)(a1 + 168) = v41;
    *v26 = (__int64)v19;
    v27 = v40;
    v41 = v25;
    if ( *(__int64 **)(v40 + 8) != &v40 || (__int64 *)*v25 != &v40 )
      goto LABEL_73;
    *v25 = v40;
    *(_QWORD *)(v27 + 8) = v25;
  }
  v28 = &v40;
  v41 = &v40;
  v40 = (__int64)&v40;
  v29 = (__int64 **)(a1 + 176);
  while ( 1 )
  {
    v30 = *v29;
    if ( *v29 == (__int64 *)v29 )
      break;
    v31 = (__int64)(v30 - 47);
    if ( (*(_DWORD *)v30[15] & 0x10000000) == 0
      && (*(_DWORD *)(v31 + 76) & 0x100) == 0
      && ((a2 & 4) == 0
       || (*(_DWORD *)(a1 + 80) & 0x200) == 0
       || *(_QWORD *)(v31 + 16) + *(_QWORD *)(v31 + 136) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v31 + 152) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v31, a2, a4);
      v28 = v41;
    }
    v32 = (__int64 *)*v30;
    if ( *v30 )
    {
      if ( (__int64 *)v32[1] != v30 )
        goto LABEL_73;
      v33 = (__int64 **)v30[1];
      if ( *v33 != v30 )
        goto LABEL_73;
      *v33 = v32;
      v32[1] = (__int64)v33;
      v34 = v41;
      if ( (__int64 *)*v41 != &v40 )
        goto LABEL_73;
      v30[1] = (__int64)v41;
      *v30 = (__int64)&v40;
      v28 = v30;
      *v34 = (__int64)v30;
      v41 = v30;
    }
  }
  result = v40;
  if ( (__int64 *)v40 != &v40 )
  {
    v36 = *(__int64 **)(a1 + 184);
    if ( (__int64 **)v30[1] == v29
      && (__int64 **)*v36 == v29
      && *(__int64 **)(v40 + 8) == &v40
      && (__int64 *)*v28 == &v40 )
    {
      *v36 = (__int64)&v40;
      v37 = v41;
      *(_QWORD *)(a1 + 184) = v41;
      *v37 = (__int64)v29;
      result = v40;
      v41 = v36;
      if ( *(__int64 **)(v40 + 8) == &v40 && (__int64 *)*v36 == &v40 )
      {
        *v36 = v40;
        *(_QWORD *)(result + 8) = v36;
        return result;
      }
    }
LABEL_73:
    __fastfail(3u);
  }
  return result;
}
