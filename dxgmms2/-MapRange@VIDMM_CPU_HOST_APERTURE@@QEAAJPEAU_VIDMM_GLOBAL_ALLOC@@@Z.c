/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00335C8
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00E0BDC (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F90C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0033438 (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00E6ED4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(VIDMM_SEGMENT **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  void *v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  VIDMM_SEGMENT *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  VIDMM_SEGMENT *v20; // rdx
  VIDMM_SEGMENT *v21; // rcx
  _QWORD *v22; // r14
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v24; // [rsp+38h] [rbp-40h]
  __int16 v25; // [rsp+3Ah] [rbp-3Eh]
  int v26; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  void *v28; // [rsp+48h] [rbp-30h]
  _QWORD *v29; // [rsp+50h] [rbp-28h]

  if ( *((_QWORD *)a2 + 59) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 44LL, this, a2, 0LL);
  }
  v4 = *((unsigned int *)this[6] + 94);
  v5 = *((unsigned int *)this[5] + *((unsigned int *)a2 + 125));
  v6 = v5;
  v7 = 4 * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v7 = -1LL;
  v8 = (void *)operator new[](v7, 0x36346956u, 258LL);
  if ( !v8 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  v10 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v10 = -1LL;
  v11 = (_QWORD *)operator new[](v10, 0x36346956u, 258LL);
  if ( !v11 )
  {
    WdLogSingleEntry0(3LL);
    ExFreePoolWithTag(v8, 0);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    (VIDMM_CPU_HOST_APERTURE *)this,
    (unsigned int *)v8,
    v5,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 496));
  if ( *((_QWORD *)a2 + 15) )
    v12 = *((_QWORD *)a2 + 16);
  else
    v12 = *((_QWORD *)a2 + 24);
  v13 = v12 / v4;
  v14 = v11;
  v15 = v5 + v13;
  while ( v13 < v15 )
    *v14++ = v13++;
  v16 = *((_QWORD *)a2 + 67);
  v26 = 0;
  v23 = *(_QWORD *)(v16 + 40);
  v17 = this[6];
  v27 = v5;
  v28 = v8;
  v29 = v11;
  v24 = VIDMM_SEGMENT::DriverId(v17);
  v25 = *(_WORD *)(v18 + 380);
  v19 = DxgCoreInterface[51](
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 24LL) + 2928LL),
          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v23);
  v20 = *this;
  v21 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 480);
  if ( *((VIDMM_SEGMENT ***)*this + 1) != this )
    __fastfail(3u);
  *(_QWORD *)v21 = v20;
  *((_QWORD *)a2 + 61) = this;
  *((_QWORD *)v20 + 1) = v21;
  *this = v21;
  if ( v19 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 45LL, this, a2, &v23);
  }
  if ( *(_QWORD *)(*((_QWORD *)this[6] + 1) + 41056LL) && (_DWORD)v5 )
  {
    v22 = v11;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*((_QWORD *)this[6] + 1), v24, *v22++, 1LL, 2, 0LL, v23);
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(v11, 0);
  result = 0LL;
  *((_QWORD *)a2 + 59) = v8;
  return result;
}
