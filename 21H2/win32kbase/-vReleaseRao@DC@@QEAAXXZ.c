/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  unsigned int v1; // eax
  GdiHandleManager *v3; // r13
  unsigned int v4; // eax
  __int64 v5; // r14
  int v6; // r15d
  unsigned int v7; // esi
  unsigned int v8; // ecx
  __int64 v9; // r10
  unsigned int v10; // r8d
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rax
  DC *v16; // rdx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000);
  v5 = *((_QWORD *)v3 + 2);
  v6 = *(unsigned __int16 *)(v5 + 2);
  v7 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v7 + ((v6 + 0xFFFF) << 16) )
  {
    v11 = 0LL;
  }
  else
  {
    if ( v4 >= v7 )
      v8 = ((v4 - v7) >> 16) + 1;
    else
      v8 = 0;
    v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
    if ( v8 )
      v10 = v4 + ((1 - v8) << 16) - v7;
    else
      v10 = v4;
    v11 = 0LL;
    if ( v10 < *(_DWORD *)(v9 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                   + 16LL * (unsigned __int8)v10
                   + 8) )
    {
      v11 = *(_QWORD *)v9 + 24LL * v10;
    }
    LOWORD(v6) = *(_WORD *)(v5 + 2);
  }
  v12 = GdiHandleManager::DecodeIndex(v3, v4);
  v13 = v12;
  if ( v12 >= v7 + (((unsigned __int16)v6 + 0xFFFF) << 16) )
    goto LABEL_20;
  if ( v12 >= v7 )
    v14 = ((v12 - v7) >> 16) + 1;
  else
    v14 = 0;
  v15 = *(_QWORD *)(v5 + 8LL * v14 + 8);
  if ( v14 )
    v13 = ((1 - v14) << 16) - v7 + (unsigned int)v13;
  if ( (unsigned int)v13 >= *(_DWORD *)(v15 + 20) )
LABEL_20:
    v16 = 0LL;
  else
    v16 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
  if ( v16 != this )
    v11 = 0LL;
  *(_BYTE *)(v11 + 15) |= 4u;
}
