/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E5E34
 * Callers:
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00E6064 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E6990 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C002DF40 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00FCF70 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FE23C (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C010049C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::MoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        void *a10,
        __int64 a11)
{
  unsigned __int8 v11; // si
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  bool v18; // r15
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  unsigned __int64 ActiveVprEnd; // rax
  int v22; // edx
  __int64 v23; // rax

  v11 = 1;
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8LL * a4);
  v15 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 2808LL);
  v16 = *(unsigned int *)(v14 + 380);
  v17 = 344 * v16;
  v18 = (*(_DWORD *)(v15 + 344 * v16 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v15 + 344 * v16 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v19 = a7;
      VIDMM_SEGMENT::MoveResourcesForAllocationPlacement(v14, v17, a7, a8, a9, a10, a11);
    }
    else
    {
      if ( g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      v19 = a7;
    }
  }
  else
  {
    v20 = a8;
    v19 = a7;
    if ( !a8 && !a7 && a6 )
    {
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14);
      if ( v22 == 1 )
      {
        v19 = 0LL;
      }
      else if ( v22 == 2 )
      {
        v19 = v20;
        v20 = ActiveVprEnd;
      }
      else
      {
        v20 = *(_QWORD *)(v14 + 48);
        v19 = ActiveVprEnd;
      }
    }
    VIDMM_SEGMENT::DefragmentResourcesOverRange(v14, v19, v20, a9, a10, a11);
  }
  if ( v18 )
  {
    if ( *(_DWORD *)(v14 + 412) == 1 )
      v23 = *(_QWORD *)(v14 + 416);
    else
      v23 = *(_QWORD *)(v14 + 384);
    if ( v19 != v23 || v19 == VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14) )
      v11 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, v11);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)v14);
}
