__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r13d
  unsigned __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // r14
  int v10; // edi
  int v11; // edi
  __int64 v12; // rbp
  __int16 v13; // cx
  int v14; // edx
  unsigned int IsCurrentRegion; // eax
  unsigned int v16; // edi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  struct _MDL *v24; // r10
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v28[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+8h]

  v27 = 0LL;
  v5 = a4 & 2 | 1;
  v28[0] = 0LL;
  v29 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 2) != 0 )
  {
    v9 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v10 = ST_STORE<SM_TRAITS>::StDmpSinglePageLookup((__int64 *)a1, a2, a3, &v27);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v9 = v27;
  }
  v11 = *(_DWORD *)v9 & *(_DWORD *)(a1 + 808);
  v12 = (unsigned int)(*(_DWORD *)v9 >> *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v29 = SmSetThreadSystemPagePriority(v28, 0LL, 0LL);
    v8 = 1;
  }
  *(_DWORD *)a5 = *(_DWORD *)v9;
  v13 = 4096;
  v14 = *(_DWORD *)(v9 + 4) & 0xFFF;
  if ( v14 )
    v13 = v14;
  *(_WORD *)(a5 + 4) = v13;
  *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
  if ( *(_BYTE *)(a1 + 776) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) )
    {
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v9 + 12);
      *(_DWORD *)(a5 + 12) = *(unsigned __int16 *)(v9 + 6);
    }
  }
  else
  {
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(v9 + 8);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v16 = 16 * v11;
  }
  else
  {
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v12);
    v16 = 16 * v11;
    if ( IsCurrentRegion != 8 )
    {
      v17 = *(_QWORD *)(a1 + 16LL * IsCurrentRegion + 1256) + v16;
      goto LABEL_22;
    }
  }
  v18 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(*(_QWORD *)(a1 + 800), v12, v16, a4, 1);
  v7 = v18;
  if ( v18 <= 3 )
  {
    v10 = -1073741550;
    if ( v18 == 1 )
      v10 = -2147483634;
    goto LABEL_29;
  }
  v17 = v18;
LABEL_22:
  *(_QWORD *)(a2 + 56) = a3;
  v10 = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(a1, *(_QWORD *)(a2 + 16), v17 | v5, a4, *(_QWORD *)(a3 + 8), a5, a2);
  if ( v10 >= 0 )
    v10 = 0;
  if ( v7 )
  {
    v20 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v20 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v20, v12, v19, v20, v26, 0);
    }
    else
    {
      v21 = *(_QWORD *)(v20 + 6216);
      v22 = *(_QWORD *)(v21 + 8 * v12);
      v23 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      v24 = (struct _MDL *)(v22 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)(v21 + 8 * v12) = v23;
      if ( (v23 & 3) == 0 )
        SmFpFree(v20 + 6608, 5, (__int64)KeGetCurrentThread(), v24);
    }
  }
LABEL_29:
  if ( v8 )
    SmSetThreadSystemPagePriority(v28, v29, 1LL);
  return (unsigned int)v10;
}
