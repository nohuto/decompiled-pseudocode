/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009B76C
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0096A78 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0096EB4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009AA38 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F6618 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(_QWORD *a1, __int64 a2)
{
  int *v2; // rax
  __int64 v4; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v6; // r13
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  struct VIDMM_RECYCLE_RANGE *v17; // r9
  struct VIDMM_RECYCLE_RANGE *v18; // r10
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  char v20; // r15
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v22; // eax
  int v23; // r14d
  VIDMM_RECYCLE_RANGE *v24; // rbp
  VIDMM_RECYCLE_RANGE *v25; // r12
  _QWORD *v26; // rcx
  char v27; // di
  struct VIDMM_RECYCLE_RANGE *v28; // rax
  struct VIDMM_RECYCLE_RANGE *v29; // rsi
  unsigned int v30; // edi
  _QWORD *v31; // rcx
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF

  v2 = (int *)a1[4];
  v4 = *(_QWORD *)(a2 + 136);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v2 + 1);
  if ( *a1 == 1LL )
  {
    v15 = a1[4];
    if ( v4 )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v15, 2, v4);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v6, (struct VIDMM_RECYCLE_MULTIRANGE *)v4);
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v15, 2LL, a2);
    }
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct VIDMM_RECYCLE_RANGE *)a2);
    return 2LL;
  }
  v7 = *v2;
  if ( v7 != 2 && v7 != 1 )
    return 0LL;
  if ( (unsigned __int64)qword_1C0076288 <= 0x53333333 )
    v8 = dword_1C0076498;
  else
    v8 = dword_1C0076488;
  v9 = a1[6];
  v10 = a1[5];
  v11 = (unsigned int)(v8 << 20);
  v12 = a1[6] - v10;
  if ( v4 && v12 > v11 && *(_QWORD *)(v4 + 40) == v9 )
  {
    v13 = 1;
    goto LABEL_8;
  }
  v13 = 0;
  if ( v4 || *(_QWORD *)(a2 + 40) != v9 || v12 <= v11 )
  {
LABEL_8:
    if ( v13 )
    {
      v17 = *(struct VIDMM_RECYCLE_RANGE **)(v4 + 64);
      v18 = *(struct VIDMM_RECYCLE_RANGE **)(v4 + 72);
      NextRange = v17;
      v32 = 0LL;
      while ( !*((_DWORD *)NextRange + 16) )
      {
        if ( NextRange == v18 )
        {
          v16 = *((_QWORD *)v17 + 4);
          goto LABEL_27;
        }
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
    }
    return 0LL;
  }
  v16 = *(_QWORD *)(a2 + 32);
  v32 = 0LL;
LABEL_27:
  v32 = v16;
  v33 = v9 - v16;
  if ( v16 != v10 )
  {
    v20 = 0;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v22 = (*((__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64))VirtualMemoryInterface + 2))(
            -1LL,
            &v32,
            &v33,
            0x8000LL);
    if ( v22 >= 0 )
    {
      a1[6] = v32;
      goto LABEL_32;
    }
    WdLogSingleEntry4(3LL, v32, a1, v22, **(_QWORD **)(*(_QWORD *)(a1[4] + 8LL) + 8LL));
    return 0LL;
  }
  v20 = 1;
LABEL_32:
  if ( v13 )
  {
    v23 = *(_DWORD *)(v4 + 88);
    v24 = *(VIDMM_RECYCLE_RANGE **)(v4 + 64);
    v25 = *(VIDMM_RECYCLE_RANGE **)(v4 + 72);
    if ( v23 != 2 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v23, v4);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v6, (struct VIDMM_RECYCLE_MULTIRANGE *)v4);
    v26 = (_QWORD *)*((_QWORD *)v24 + 16);
    v27 = 0;
    *v26 = a1 + 9;
    a1[10] = v26;
    while ( 1 )
    {
      v28 = VIDMM_RECYCLE_RANGE::GetNextRange(v24);
      if ( v24 == v25 )
        v27 = 1;
      v29 = v28;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, v24);
      if ( v27 )
        break;
      v24 = v29;
    }
  }
  else
  {
    v30 = *(_DWORD *)(a2 + 88);
    if ( v30 != 2 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v30, a2);
    v31 = *(_QWORD **)(a2 + 128);
    *v31 = a1 + 9;
    a1[10] = v31;
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct VIDMM_RECYCLE_RANGE *)a2);
  }
  return (unsigned int)(v20 != 0) + 1;
}
