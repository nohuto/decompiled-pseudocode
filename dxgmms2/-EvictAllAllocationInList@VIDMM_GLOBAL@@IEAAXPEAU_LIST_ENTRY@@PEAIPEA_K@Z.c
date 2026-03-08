/*
 * XREFs of ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00E26AC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E06A8 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllMemoryAllocationInList@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E27A0 (-EvictAllMemoryAllocationInList@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2878 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllAllocationInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v5; // r14d
  unsigned __int64 v6; // r15
  unsigned int *i; // r13
  char *p_Blink; // rbp
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v16; // [rsp+20h] [rbp-48h]

  Flink = a2->Flink;
  v5 = 0;
  v6 = 0LL;
  for ( i = a3; Flink != a2; *((_QWORD *)p_Blink + 44) = 0LL )
  {
    p_Blink = (char *)&Flink[-22].Blink;
    v11 = Flink[-14].Flink;
    v12 = Flink;
    Flink = Flink->Flink;
    v6 += *((_QWORD *)p_Blink + 2);
    LOBYTE(a3) = 1;
    LOBYTE(v16) = 0;
    ++v5;
    ((void (__fastcall *)(struct _LIST_ENTRY *, char *, unsigned int *, _QWORD, int, _QWORD))v11->Flink[3].Flink)(
      v11,
      p_Blink,
      a3,
      0LL,
      v16,
      0LL);
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v13, &EventEvictAllocation, (__int64)a3, p_Blink);
    v14 = v12->Flink;
    if ( v12->Flink->Blink != v12 || (Blink = v12->Blink, Blink->Flink != v12) )
      __fastfail(3u);
    Blink->Flink = v14;
    v14->Blink = Blink;
    v12->Flink = 0LL;
  }
  *i = v5;
  *a4 = v6;
}
