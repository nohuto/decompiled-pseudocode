/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E71B8
 * Callers:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C00FA464 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL ***this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  VIDMM_GLOBAL **v6; // rdx
  VIDMM_GLOBAL *v7; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(v4);
    v5[3] = *((_QWORD *)a2 + 30);
    v5[4] = *((unsigned int *)a2 + 58);
    v5[5] = *((int *)a2 + 59);
  }
  v6 = this[472];
  v7 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 208);
  if ( *v6 != (VIDMM_GLOBAL *)(this + 471) )
    __fastfail(3u);
  *(_QWORD *)v7 = this + 471;
  *((_QWORD *)a2 + 27) = v6;
  *v6 = v7;
  this[472] = (VIDMM_GLOBAL **)v7;
}
