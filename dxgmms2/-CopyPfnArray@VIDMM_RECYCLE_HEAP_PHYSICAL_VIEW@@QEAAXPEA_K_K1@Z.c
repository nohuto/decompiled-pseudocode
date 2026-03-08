/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0096624
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00965A0 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C00F5E30 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C001A980 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0097648 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r8
  char v7; // r9
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // rax
  VIDMM_MDL_RANGE *v9; // rdi
  VIDMM_MDL_RANGE *v11; // rcx
  char v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  struct VIDMM_MDL_RANGE *NextRange; // rax

  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v7 = 0;
  v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v9 = 0LL;
  if ( v8 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_14;
  do
  {
    if ( v7 )
      break;
    v11 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v8 - 24);
    v8 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v8;
    if ( *((_QWORD *)v11 + 2) > a3 )
    {
      v7 = 1;
      v9 = v11;
    }
  }
  while ( v8 != v6 );
  if ( !v9 || *((_QWORD *)v9 + 1) > a3 )
  {
LABEL_14:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 17LL, v9, 0LL);
  }
  v12 = 0;
  v13 = a3;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *((_QWORD *)v9 + 1);
    v16 = *((_QWORD *)v9 + 2);
    v17 = (v13 - v15) >> 12;
    if ( a4 <= v16 )
    {
      v16 = a4;
      v12 = 1;
    }
    v18 = ((v16 - v15) >> 12) - v17;
    memmove(&a2[v14], (const void *)(*(_QWORD *)v9 + 8 * (v17 + 6)), 8 * v18);
    v13 = *((_QWORD *)v9 + 2);
    v14 += v18;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v9);
    v9 = NextRange;
    if ( v12 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v13 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 18LL, NextRange, 0LL);
    }
  }
  if ( v14 != (a4 - a3) >> 12 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 19LL, v14, 0LL);
  }
}
