/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0032FF4
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00E0BDC (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C00F9E40 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00338E0 (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00339A8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B2280 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B22A0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E770C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebp
  VIDMM_CPU_HOST_APERTURE *v10; // r12
  VIDMM_CPU_HOST_APERTURE *v11; // r14
  VIDMM_CPU_HOST_APERTURE *v12; // rcx
  char *v14; // r13
  __int64 v15; // r15
  VIDMM_PROCESS *v16; // rcx
  int v17; // eax
  VIDMM_PROCESS *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE v23; // [rsp+58h] [rbp-60h] BYREF

  v3 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)a2 + 25) )
    v5 = *((_QWORD *)a2 + 24);
  else
    v5 = *((_QWORD *)a2 + 16);
  v6 = *(unsigned int *)(v3 + 376);
  v7 = (~(unsigned __int64)(unsigned int)(*(_DWORD *)(v3 + 376) - 1) & ((unsigned int)(*(_DWORD *)(v3 + 376) - 1)
                                                                      + v5
                                                                      + *((_QWORD *)a2 + 2)
                                                                      - (v5 & ~(unsigned __int64)(unsigned int)(*(_DWORD *)(v3 + 376) - 1))))
     / v6;
  v8 = *((_DWORD *)this + 15);
  v9 = v7;
  if ( v8 < (unsigned int)v7 )
  {
    v10 = (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16);
    v11 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    v12 = v11;
    if ( v11 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
LABEL_8:
      *((_DWORD *)a2 + 124) = -1;
      *((_DWORD *)a2 + 125) = -1;
      WdLogSingleEntry3(4LL, (unsigned int)v7, v8, v6);
      return 3221225495LL;
    }
    while ( 1 )
    {
      v8 += *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)v12 + 5));
      if ( v8 >= (unsigned int)v7 )
        break;
      v12 = *(VIDMM_CPU_HOST_APERTURE **)v12;
      if ( v12 == v10 )
        goto LABEL_8;
    }
    do
    {
      v14 = (char *)v11 - 480;
      v11 = *(VIDMM_CPU_HOST_APERTURE **)v11;
      v15 = *((_QWORD *)v14 + 11);
      if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v12);
        v16 = *(VIDMM_PROCESS **)(v15 + 8);
        memset(&v23, 0, sizeof(v23));
        VIDMM_PROCESS::SafeAttach(v16, &v23);
        v17 = VIDMM_GLOBAL::Rotate(
                *(_QWORD *)(*((_QWORD *)this + 6) + 8LL),
                *(_QWORD *)(*(_QWORD *)(v15 + 8) + 24LL),
                *(_QWORD *)(v15 + 24),
                3LL,
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                v14);
        v18 = (VIDMM_PROCESS *)(v17 + 0x80000000);
        if ( (int)v18 >= 0 && v17 != -1073741558 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v17, 0LL);
        }
        *(_BYTE *)(v15 + 32) &= ~1u;
        VIDMM_PROCESS::SafeDetach(v18, &v23);
      }
      VIDMM_CPU_HOST_APERTURE::UnmapRange(this, (struct _VIDMM_GLOBAL_ALLOC *)v14);
      VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(this, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v14 + 496));
    }
    while ( *((_DWORD *)this + 15) < v9 && v11 != v10 );
  }
  v19 = *((unsigned int *)this + 16);
  v20 = v9 - 1;
  LODWORD(v22) = *((_DWORD *)this + 16);
  if ( v9 != 1 )
  {
    do
    {
      v19 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v19);
      --v20;
    }
    while ( v20 );
  }
  v21 = *((_QWORD *)this + 5);
  HIDWORD(v22) = v19;
  *((_DWORD *)this + 16) = *(_DWORD *)(v21 + 4 * v19);
  *(_DWORD *)(v21 + 4LL * (unsigned int)v19) = v9;
  *((_DWORD *)this + 15) -= v9;
  *((_QWORD *)a2 + 62) = v22;
  return 0LL;
}
