/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00FA698
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00FA340 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0086FAC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4D58 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00F1754 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00FC200 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  struct _MDL *v16; // r8
  struct _MDL *v17; // r11
  struct _MDL *v18; // r9
  union _LARGE_INTEGER *v19; // rax
  struct VIDMM_SEGMENT *v20; // rdx
  union _LARGE_INTEGER *v21; // rcx
  struct VIDMM_SEGMENT *v22; // r8
  __int64 v23; // r8
  struct VIDMM_SEGMENT *v24; // [rsp+20h] [rbp-50h]
  struct _MDL *MDLForRange; // [rsp+60h] [rbp-10h] BYREF
  char v26; // [rsp+B0h] [rbp+40h] BYREF
  char v27; // [rsp+B8h] [rbp+48h]

  v5 = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)a2 + 1);
  v26 = 0;
  v9 = v7 >> 1;
  LOBYTE(v5) = *(_BYTE *)(1616LL * *((unsigned int *)this + 95) + *(_QWORD *)(v5 + 40224) + 444) & 0x10;
  MDLForRange = 0LL;
  v27 = v5;
  v12 = 0LL;
  if ( !(_BYTE)v5 || (v13 = 0x10000LL, !Use64KbPagesForTransfer(a2, this)) )
    v13 = 4096LL;
  if ( v7 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
        return;
      v15 = ~(v13 - 1) & (v13 + v9 - 1);
      if ( (*(_DWORD *)(v14 + 7056) & 0x800) == 0 || v13 == v15 )
      {
        LOBYTE(v24) = v13 == v15;
        if ( (*(int (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct VIDMM_SEGMENT *, char *, struct _MDL **))(**((_QWORD **)a2 + 30) + 96LL))(
               *((_QWORD *)a2 + 30),
               a2,
               v12,
               v15,
               v24,
               &v26,
               &MDLForRange) >= 0 )
        {
          v16 = MDLForRange;
          if ( MDLForRange || (MDLForRange = VidMmGetMDLForRange(a2, v12, v15), (v16 = MDLForRange) != 0LL) )
          {
            if ( v26 )
              goto LABEL_18;
            if ( (*(int (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 30) + 112LL))(
                   *((_QWORD *)a2 + 30),
                   a2,
                   v12,
                   v15,
                   v16) >= 0 )
            {
              v16 = MDLForRange;
LABEL_18:
              v17 = 0LL;
              if ( v27 )
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v17 = v16;
                  v18 = 0LL;
                }
                else
                {
                  v18 = v16;
                }
                v19 = &a5;
                v20 = 0LL;
                v21 = &a5;
                v22 = a4;
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v19 = 0LL;
                }
                else
                {
                  v21 = 0LL;
                  v20 = a4;
                  v22 = 0LL;
                }
              }
              else
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v21 = &a5;
                  v22 = a4;
                  v19 = (union _LARGE_INTEGER *)((char *)a2 + 232);
                  v20 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
                }
                else
                {
                  v19 = &a5;
                  v20 = a4;
                  v21 = (union _LARGE_INTEGER *)((char *)a2 + 232);
                  v22 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
                }
                v18 = 0LL;
              }
              VIDMM_GLOBAL::MemoryTransfer(*((VIDMM_GLOBAL **)this + 1), a2, v15, v12, v20, v19, v17, v22, v21, v18, 0);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 30) + 120LL))(
                *((_QWORD *)a2 + 30),
                a2,
                v12,
                v15,
                MDLForRange);
              LOBYTE(v23) = 1;
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 30) + 104LL))(
                *((_QWORD *)a2 + 30),
                a2,
                v23);
              v12 += v15;
              v9 = *((_QWORD *)a2 + 1) - v12;
              continue;
            }
          }
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 30) + 104LL))(
            *((_QWORD *)a2 + 30),
            a2,
            0LL);
        }
      }
      v9 = v15 >> 1;
    }
    while ( v12 != *((_QWORD *)a2 + 1) );
  }
}
