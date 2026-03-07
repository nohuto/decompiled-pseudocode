void __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  struct _MDL *v9; // rdx
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  struct _MDL *v15; // r10
  int v16; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 800);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 6021) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v3, a2, a3, v3, v16, 1u);
  }
  else
  {
    v6 = *(_QWORD *)(v3 + 6216);
    v7 = *(_QWORD *)(v6 + 8LL * a2);
    v8 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    v9 = (struct _MDL *)(v7 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v6 + 8 * v5) = v8;
    if ( (v8 & 3) == 0 )
      SmFpFree(v3 + 6608, 5, (__int64)KeGetCurrentThread(), v9);
  }
  v10 = 0;
  if ( !*(_BYTE *)(a1 + 776) )
    v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v11 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v11 + 6021) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v11, v5, a3, v11, v16, (16 * v10) | 4);
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 6216);
    v13 = *(_QWORD *)(v12 + 8 * v5);
    v14 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    v15 = (struct _MDL *)(v13 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v12 + 8 * v5) = v14;
    if ( (v14 & 3) == 0 )
      SmFpFree(v11 + 6608, 5, (__int64)KeGetCurrentThread(), v15);
  }
}
