/*
 * XREFs of HvSnapshotHiveToOffsetArray @ 0x140AF2D84
 * Callers:
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

__int64 __fastcall HvSnapshotHiveToOffsetArray(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  const void *v5; // r11
  unsigned int v8; // r10d
  __int64 CellMap; // rax
  int v10; // r10d
  int v11; // eax
  unsigned int v12; // r14d
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  const void *v16; // rdx
  unsigned int v17; // r12d
  unsigned int v18; // r8d
  unsigned int v19; // esi
  unsigned int v20; // r15d
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rax
  int v24; // r8d
  char *v25; // rbx
  unsigned int v26; // edx
  char *v28; // [rsp+60h] [rbp+8h]
  unsigned int v29; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+78h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 280);
  v4 = 0;
  v5 = *(const void **)(a1 + 64);
  v8 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(a1, v8);
      if ( *(_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 1852400232 )
        break;
      if ( *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 4) != v10 )
        break;
      v11 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      v8 = v11 + v10;
      if ( v8 > v3 || (v11 & 0xFFF) != 0 )
        break;
      if ( v8 >= v3 )
        goto LABEL_7;
    }
    return (unsigned int)-1073741492;
  }
  else
  {
LABEL_7:
    v12 = 4096;
    memmove(*(void **)(a3 + 8), v5, 0x1000uLL);
    v13 = *(_DWORD **)(a3 + 8);
    v13[2] = v13[1];
    v13[10] = v3;
    v14 = HvpHeaderCheckSum(v13);
    *(_DWORD *)(v15 + 508) = v14;
    v16 = 0LL;
    v17 = 0;
    v18 = *(_DWORD *)(a3 + 16);
    v19 = 0;
    v28 = 0LL;
    v29 = v18;
    if ( *(_DWORD *)(a1 + 280) )
    {
      v20 = 0;
      do
      {
        if ( v12 == v18 )
        {
          ++v20;
          v12 = 0;
          v18 = *(_DWORD *)(a3 + 24LL * v20 + 16);
          v29 = v18;
        }
        if ( v19 )
        {
          v21 = v19;
          if ( v19 > v18 )
            v21 = v18;
          v22 = v21;
          memmove(*(void **)(a3 + 24LL * v20 + 8), v16, v21);
          v19 -= v22;
          v12 += v22;
          v17 += v22;
        }
        else
        {
          v23 = HvpGetCellMap(a1, v17);
          if ( !v23 )
            return (unsigned int)-1073741275;
          v25 = (char *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
          v28 = v25;
          v26 = *((_DWORD *)v25 + 2);
          v19 = v24 - v12 < v26 ? v26 - (v24 - v12) : 0;
          if ( v26 > v24 - v12 )
            v26 = v24 - v12;
          v30 = v26;
          memmove((void *)(*(_QWORD *)(a3 + 24LL * v20 + 8) + v12), v25, v26);
          v12 += v30;
          v17 += v30;
          if ( v19 )
            v28 = &v25[v30];
        }
        v18 = v29;
        v16 = v28;
      }
      while ( v17 < *(_DWORD *)(a1 + 280) );
    }
  }
  return v4;
}
