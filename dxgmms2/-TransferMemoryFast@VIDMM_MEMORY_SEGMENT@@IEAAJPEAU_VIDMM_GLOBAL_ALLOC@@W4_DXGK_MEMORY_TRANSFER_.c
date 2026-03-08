/*
 * XREFs of ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C00FA464
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00FA340 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4D58 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E71B8 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00F1754 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemoryFast(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6)
{
  __int64 v8; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  char v14; // r15
  __int64 v15; // rcx
  int v16; // edi
  struct _MDL *MDLForRange; // rax
  struct _MDL *v18; // rdx
  struct _MDL *v19; // r10
  struct _MDL *v20; // r11
  struct VIDMM_SEGMENT *v21; // rdx
  union _LARGE_INTEGER *v22; // rax
  union _LARGE_INTEGER *v23; // rcx
  struct _MDL *v24; // [rsp+68h] [rbp-30h] BYREF
  char v25; // [rsp+A0h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v8 + 7056) & 0x400) != 0 )
    return 3223191809LL;
  v12 = *((_QWORD *)a2 + 1);
  v13 = 1616LL * *((unsigned int *)this + 95);
  v25 = 0;
  v14 = *(_BYTE *)(v13 + *(_QWORD *)(v8 + 40224) + 444);
  v15 = *((_QWORD *)a2 + 30);
  v24 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, _BYTE, char *, struct _MDL **))(*(_QWORD *)v15 + 96LL))(
          v15,
          a2,
          0LL,
          v12,
          0,
          &v25,
          &v24);
  if ( v16 >= 0 )
  {
    MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    v24 = MDLForRange;
    v18 = MDLForRange;
    if ( !MDLForRange )
    {
      v16 = -1071775487;
LABEL_8:
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 30) + 104LL))(
        *((_QWORD *)a2 + 30),
        a2,
        0LL);
      return (unsigned int)v16;
    }
    if ( !v25 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(**((_QWORD **)a2 + 30) + 112LL))(
              *((_QWORD *)a2 + 30),
              a2,
              0LL,
              *((_QWORD *)a2 + 1),
              MDLForRange);
      if ( v16 < 0 )
        goto LABEL_8;
      v18 = v24;
    }
    v19 = 0LL;
    v20 = 0LL;
    if ( (v14 & 0x10) != 0 )
    {
      if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
        v19 = v18;
      else
        v20 = v18;
      v21 = 0LL;
      v22 = &a5;
      v23 = &a5;
      if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
      {
        v22 = 0LL;
      }
      else
      {
        v21 = a4;
        a4 = 0LL;
        v23 = 0LL;
      }
    }
    else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
    {
      v23 = &a5;
      v22 = (union _LARGE_INTEGER *)((char *)a2 + 232);
      v21 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
    }
    else
    {
      v21 = a4;
      v22 = &a5;
      a4 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
      v23 = (union _LARGE_INTEGER *)((char *)a2 + 232);
    }
    VIDMM_GLOBAL::MemoryTransfer(
      *((VIDMM_GLOBAL **)this + 1),
      a2,
      *((_QWORD *)a2 + 1),
      0LL,
      v21,
      v22,
      v19,
      a4,
      v23,
      v20,
      0);
    if ( (*((_DWORD *)a2 + 19) & 4) != 0 )
    {
      WdLogSingleEntry1(4LL, a2);
      *a6 = 1;
    }
    else
    {
      VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL ****)this + 1), a2);
    }
    if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
      *(_BYTE *)(*((_QWORD *)this + 1) + 40939LL) = 1;
  }
  return (unsigned int)v16;
}
