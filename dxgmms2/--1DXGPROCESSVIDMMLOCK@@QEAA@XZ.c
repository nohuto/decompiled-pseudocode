/*
 * XREFs of ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C002D82C
 * Callers:
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A2440 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK(DXGPROCESSVIDMMLOCK *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = v1 + 184;
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
