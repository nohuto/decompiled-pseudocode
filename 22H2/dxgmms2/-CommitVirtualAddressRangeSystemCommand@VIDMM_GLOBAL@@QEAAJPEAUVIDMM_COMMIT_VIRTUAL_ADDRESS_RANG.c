/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072874
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0073560 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0001484 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006F458 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006FBAC (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00867FC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v5; // edi
  bool v6; // zf
  struct _KTHREAD **v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v12; // rcx
  unsigned int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 **v16; // rdx
  __int64 v17; // rcx
  int v19; // r9d
  unsigned __int64 v20; // r14
  struct _VIDMM_GLOBAL_ALLOC *v21; // rdi
  int v22; // ebp
  struct _MDL *FullMDL; // rax
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+28h] [rbp-60h]
  struct VIDMM_ALLOC **v29; // [rsp+38h] [rbp-50h]
  char v30[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v31; // [rsp+58h] [rbp-30h]
  int v32; // [rsp+60h] [rbp-28h]

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 == -56LL;
  v7 = (struct _KTHREAD **)(*(_QWORD *)a2 + 56LL);
  v31 = (DXGPUSHLOCK *)v7;
  if ( !v6 && v7[1] == KeGetCurrentThread() )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7, a2, a3);
    *(_QWORD *)(v26 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v26);
  }
  DXGPUSHLOCK::AcquireExclusive(v31);
  v10 = *((_QWORD *)a2 + 3);
  v32 = 2;
  if ( !v10 || **(_QWORD **)(v10 + 16) && **((_QWORD **)a2 + 1) )
  {
    v11 = *((_QWORD *)a2 + 1);
    switch ( (int)(*(_DWORD *)(v11 + 64) << 28) >> 28 )
    {
      case 1:
        v12 = *(struct _VIDMM_GLOBAL_ALLOC ****)(v11 + 56);
        if ( (*((_DWORD *)v12 + 7) & 3) == 2 )
        {
          v20 = *(_QWORD *)(v11 + 72);
          v21 = **v12;
          v22 = *(_DWORD *)(*((_QWORD *)v21 + 16) + 80LL) & 0x1001;
          if ( v22 )
          {
            FullMDL = VidMmGetFullMDL(**v12, 0LL);
            v11 = *((_QWORD *)a2 + 1);
            v24 = (__int64)FullMDL;
          }
          else
          {
            v20 += *((_QWORD *)v21 + 17);
            v24 = 0LL;
          }
          if ( v22 )
            v25 = 0;
          else
            v25 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)v21 + 16));
          v13 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  *(_QWORD *)a2,
                  v11,
                  *((_DWORD *)v21 + 19) & 0x3F,
                  v25,
                  v20,
                  v24,
                  1,
                  a3,
                  0LL);
        }
        else
        {
          v13 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *(CVirtualAddressAllocator **)a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v11,
                  a3,
                  1);
        }
        goto LABEL_10;
      case 2:
        goto LABEL_22;
      case 6:
        v19 = -2;
        v29 = a3;
        v28 = 0LL;
        goto LABEL_23;
      case 7:
LABEL_22:
        v19 = 0;
        v29 = a3;
        v28 = *((_QWORD *)a2 + 2);
LABEL_23:
        v13 = CVirtualAddressAllocator::CommitVirtualAddressRange(*(_QWORD *)a2, v11, 0LL, v19, 0LL, v28, 1, v29, 0LL);
LABEL_10:
        v5 = v13;
        break;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v27);
  }
  if ( v5 == -1073741267 && *((_BYTE *)a2 + 32) )
    goto LABEL_45;
  v14 = (__int64 *)*((_QWORD *)a2 + 3);
  if ( v14 )
  {
    v15 = *v14;
    if ( *v14 )
    {
      if ( *(__int64 **)(v15 + 8) != v14 || (v16 = (__int64 **)v14[1], *v16 != v14) )
        __fastfail(3u);
      *v16 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      v14[1] = 0LL;
    }
    v17 = *((_QWORD *)a2 + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 128), 0xFFFFFFFF) == 1 && v17 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v17);
    operator delete(*((void **)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  if ( v5 == -1073741267 )
  {
LABEL_45:
    if ( !*((_BYTE *)a2 + 32) )
      v5 = -1073741823;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v5;
}
