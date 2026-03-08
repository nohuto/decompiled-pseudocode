/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F90C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C00332B4 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00335C8 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00339A8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00F1854 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00F1918 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(VIDMM_MEMORY_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *v4; // rbp
  VIDMM_SEGMENT ***v5; // rsi
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rcx
  PMDL v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  VIDMM_MEMORY_SEGMENT *v14; // rax
  VIDMM_MEMORY_SEGMENT **v15; // rdx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v22; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = 0LL;
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v5 = (VIDMM_SEGMENT ***)((char *)this + 504);
  v6 = *((_QWORD *)a2 + 11);
  if ( *((_BYTE *)a2 + 80) )
  {
    if ( *v5 )
    {
      v7 = VIDMM_CPU_HOST_APERTURE::MapRange(*v5, a2);
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(1LL, 1192LL);
        v28 = 0LL;
        v27 = 0LL;
        v26 = 0LL;
        v25 = 1192LL;
        DxgkLogInternalTriageEvent(v8, 0x40000LL);
LABEL_28:
        if ( *((_QWORD *)a2 + 59) )
          VIDMM_CPU_HOST_APERTURE::UnmapRange((VIDMM_CPU_HOST_APERTURE *)*v5, a2);
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        goto LABEL_32;
      }
      v9 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
             (VIDMM_CPU_HOST_APERTURE *)*v5,
             *(void **)(v6 + 16),
             (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 496),
             *((_QWORD *)a2 + 24),
             *((_QWORD *)a2 + 2));
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 16);
      v11 = *((_QWORD *)a2 + 24);
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 436LL) & 8) != 0 )
        v9 = VidMmiBuildMdlFromMdl(v10, *((_QWORD *)a2 + 2), *(struct _MDL **)(*((_QWORD *)a2 + 25) + 32LL), v11 / 4096);
      else
        v9 = VidMmiBuildMdlForContiguousMmIo(
               v10,
               *((_QWORD *)a2 + 2),
               (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 25) + 32LL) + v11));
    }
    v4 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(1LL, 1249LL);
      v28 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      v25 = 1249LL;
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
      v7 = -1073741801;
      goto LABEL_28;
    }
  }
  v7 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, a2, v4, 0);
  if ( v7 < 0 )
    goto LABEL_28;
  v13 = *((_QWORD *)a2 + 23);
  v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408);
  *((_QWORD *)a2 + 23) = 0LL;
  *((_QWORD *)a2 + 17) = v13;
  *((_DWORD *)a2 + 28) = 2;
  *((_BYTE *)a2 + 82) = 1;
  v15 = (VIDMM_MEMORY_SEGMENT **)*((_QWORD *)this + 21);
  if ( *v15 != (VIDMM_MEMORY_SEGMENT *)((char *)this + 160) )
    __fastfail(3u);
  *(_QWORD *)v14 = (char *)this + 160;
  *((_QWORD *)a2 + 52) = v15;
  *v15 = v14;
  *((_QWORD *)this + 21) = v14;
  if ( !*((_DWORD *)a2 + 16) || (v16 = VIDMM_SEGMENT::DriverId(this), (v17 & 0x1F) == v16) || ((v17 >> 6) & 0x1F) == v16 )
    v18 = 0x1000000;
  else
    v18 = 0;
  *((_DWORD *)a2 + 17) = v18 | *((_DWORD *)a2 + 17) & 0xFEFFFFFF;
  if ( v6 && *(_QWORD *)(v6 + 8) )
    VidMmRecordAlloc(*((_QWORD *)this + 1), (__int64)a2, v6, this, *((_QWORD *)a2 + 2), 0);
  *(_QWORD *)(*((_QWORD *)this + 1) + 40216LL) += *((_QWORD *)a2 + 2) >> 12;
  v19 = *((_QWORD *)this + 1);
  _InterlockedOr(v24, 0);
  ++*(_QWORD *)(v19 + 40);
  v20 = 1616LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v20 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1592) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v22 + 232) += *((_QWORD *)a2 + 2);
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 44760LL) += *((_QWORD *)a2 + 2);
LABEL_32:
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  return (unsigned int)v7;
}
