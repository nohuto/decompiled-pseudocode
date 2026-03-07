__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // rbx
  int v8; // r12d
  __int64 v10; // rcx
  int VirtualRegion; // eax
  __int64 v12; // rbx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  struct _MDL *v22; // rdx
  int v24; // [rsp+20h] [rbp-38h]

  v4 = (__int64 *)(a1 + 800);
  v5 = a2;
  v6 = 0;
  v7 = a3;
  v8 = a4;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v10 = *v4;
    if ( (*(_BYTE *)(*v4 + 6021) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v10, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v10, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1824);
    if ( !*(_BYTE *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) & 0x1FFF;
    v6 = 1;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v13 = 0;
  else
    v13 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v14 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(*v4, v5, 0, a4, v8 | (v13 << 7) | 0x10u);
  v12 = v14;
  if ( v14 )
  {
    if ( ((v14 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*v4, v5) )
      {
        SMKM_STORE<SM_TRAITS>::SmStMapRegion(*v4, v5, 0, v15, 2);
        return v12;
      }
      v12 = -1LL;
      if ( *(_BYTE *)(a1 + 776) )
        v17 = 0;
      else
        v17 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
      v18 = *v4;
      if ( (*(_BYTE *)(*v4 + 6021) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v18, v5, v16, v18, v24, (16 * v17) | 4);
      }
      else
      {
        v19 = *(_QWORD *)(v18 + 6216);
        v20 = *(_QWORD *)(v19 + 8 * v5);
        v21 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
        v22 = (struct _MDL *)(v20 & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)(v19 + 8 * v5) = v21;
        if ( (v21 & 3) == 0 )
          SmFpFree(v18 + 6608, 5, (__int64)KeGetCurrentThread(), v22);
      }
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v5, 1);
      v12 = (v12 != 1) - 1LL;
    }
  }
  if ( v6 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
  return v12;
}
