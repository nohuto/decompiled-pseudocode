/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0046AF0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  GdiHandleManager *v2; // r15
  unsigned int v3; // eax
  __int64 v4; // r14
  unsigned int v5; // r8d
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax
  DC *v15; // rdx

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v3 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000);
  v4 = *((_QWORD *)v2 + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  v7 = v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16);
  if ( v3 >= v7 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( v3 >= v6 )
      v8 = ((v3 - v6) >> 16) + 1;
    else
      v8 = 0;
    v9 = *(_QWORD *)(v4 + 8LL * v8 + 8);
    if ( v8 )
      v3 += ((1 - v8) << 16) - v6;
    v10 = 0LL;
    if ( v3 < *(_DWORD *)(v9 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                   + 16LL * (unsigned __int8)v3
                   + 8) )
    {
      v10 = *(_QWORD *)v9 + 24LL * v3;
    }
  }
  v11 = GdiHandleManager::DecodeIndex(v2, v5);
  v12 = v11;
  if ( v11 >= v7 )
    goto LABEL_19;
  if ( v11 >= v6 )
    v13 = ((v11 - v6) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v4 + 8LL * v13 + 8);
  if ( v13 )
    v12 = ((1 - v13) << 16) - v6 + (unsigned int)v12;
  if ( (unsigned int)v12 >= *(_DWORD *)(v14 + 20) )
LABEL_19:
    v15 = 0LL;
  else
    v15 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
  if ( v15 != this )
    v10 = 0LL;
  *(_BYTE *)(v10 + 15) |= 4u;
}
