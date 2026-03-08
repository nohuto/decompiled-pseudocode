/*
 * XREFs of ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00E7A48
 * Callers:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00E78AC (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EF24 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::SetOneAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3)
{
  int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-78h]
  _QWORD v12[12]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a3;
  if ( a3 >= 0xC8000000 && !SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    WdLogSingleEntry1(3LL, a2);
    v6 = -939524097;
  }
  memset(v12, 0, 0x58uLL);
  v7 = *a2;
  LODWORD(v12[0]) = 212;
  v12[2] = a2;
  v8 = *v7;
  LODWORD(v12[4]) = v6;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    (struct VIDMM_PAGING_QUEUE *)(a2[1][10] + 176LL * (*(_DWORD *)(v8 + 68) & 0x3F)),
    (struct _VIDMM_DEFERRED_COMMAND *)v12,
    0,
    0LL);
  if ( bTracingEnabled )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      LODWORD(v11) = a3;
      McTemplateK0pq_EtwWriteTransfer(v9, &EventSetAllocationPriority, v10, a2, v11);
    }
  }
}
