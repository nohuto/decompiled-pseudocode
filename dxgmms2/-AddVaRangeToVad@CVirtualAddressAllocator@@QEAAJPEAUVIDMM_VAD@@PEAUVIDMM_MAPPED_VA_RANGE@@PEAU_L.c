/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00B3DB0
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C009C8A0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001817C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00B3E88 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct _LIST_ENTRY *a4,
        struct _LIST_ENTRY *a5)
{
  struct _VIDMM_GLOBAL_ALLOC ***VidMmAllocFromOwner; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v9; // r14
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  int v13; // esi
  struct _VIDMM_GLOBAL_ALLOC ****v14; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v15; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx

  VidMmAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC ***)GetVidMmAllocFromOwner(
                                                          (int)(*((_DWORD *)a3 + 16) << 28) >> 28,
                                                          *((_QWORD *)a3 + 7));
  v9 = VidMmAllocFromOwner;
  if ( !VidMmAllocFromOwner )
    goto LABEL_2;
  v13 = CheckUniqueGpuVaMapping(**VidMmAllocFromOwner, a3);
  if ( v13 >= 0 )
  {
    v14 = (struct _VIDMM_GLOBAL_ALLOC ****)(v9 + 16);
    v15 = v9[16];
    v16 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)a3 + 24);
    if ( v15[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v9 + 16) )
      goto LABEL_12;
    *v16 = v15;
    *((_QWORD *)a3 + 4) = v14;
    v15[1] = (struct _VIDMM_GLOBAL_ALLOC *)v16;
    *v14 = v16;
LABEL_2:
    v10 = (struct _LIST_ENTRY *)((char *)a3 + 8);
    Blink = a5->Blink;
    if ( Blink->Flink == a5 )
    {
      v10->Flink = a5;
      *((_QWORD *)a3 + 2) = Blink;
      Blink->Flink = v10;
      a5->Blink = v10;
      ++*((_DWORD *)a2 + 19);
      if ( (*((_BYTE *)a3 + 88) & 4) == 0 )
        return 0LL;
      v18 = (_QWORD *)((char *)a2 + 56);
      if ( *((_QWORD *)a2 + 7) )
        return 0LL;
      v19 = (_QWORD *)((char *)this + 128);
      v20 = *((_QWORD *)this + 16);
      if ( *(CVirtualAddressAllocator **)(v20 + 8) == (CVirtualAddressAllocator *)((char *)this + 128) )
      {
        *v18 = v20;
        *((_QWORD *)a2 + 8) = v19;
        *(_QWORD *)(v20 + 8) = v18;
        *v19 = v18;
        return 0LL;
      }
    }
LABEL_12:
    __fastfail(3u);
  }
  WdLogSingleEntry1(1LL, 9040LL);
  DxgkLogInternalTriageEvent(v17, 0x40000LL);
  return (unsigned int)v13;
}
