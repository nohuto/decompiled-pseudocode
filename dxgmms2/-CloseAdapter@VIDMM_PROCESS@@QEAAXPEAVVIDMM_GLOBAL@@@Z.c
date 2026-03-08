/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABBB0
 * Callers:
 *     VidMmCloseAdapter @ 0x1C00148D0 (VidMmCloseAdapter.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C004CD60 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C00A8B30 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C00A9A98 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AB020 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087B28 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C00ABE30 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C00AD588 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  struct _KTHREAD *v6; // rax
  __int64 v7; // rsi
  _DWORD *v8; // rsi
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-98h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-90h]
  int v12; // [rsp+30h] [rbp-88h]
  _QWORD v13[12]; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = this;
  }
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 32, 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v6 = this[2];
  v12 = 2;
  v7 = *((_QWORD *)v6 + v5);
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) <= 1 )
  {
    if ( *(_QWORD *)(v7 + 504) )
    {
      memset(v13, 0, 0x58uLL);
      v13[5] = *((_QWORD *)a2 + 5048);
      v13[0] = -4294967181LL;
      v13[6] = v7;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v13);
    }
    VIDMM_PROCESS::DestroyAdapterInfo((VIDMM_PROCESS *)this, v5);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v5);
    if ( *((_DWORD *)a2 + 926) )
    {
      v8 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v2++), v8[v5]);
      while ( v2 < *((_DWORD *)a2 + 926) );
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
