/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A2440
 * Callers:
 *     VidMmCloseAllocation @ 0x1C00173E0 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x1C00178D0 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C002D82C (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _EX_RUNDOWN_REF *a2,
        unsigned __int8 a3,
        struct _VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // r9d
  struct DXGPROCESS *Current; // [rsp+58h] [rbp+10h] BYREF

  ExWaitForRundownProtectionRelease(a2 + 29);
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( Current )
  {
    if ( *((struct _KTHREAD **)Current + 24) == KeGetCurrentThread() )
    {
      v10 = 0LL;
      Current = 0LL;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v10 + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v14 = *((_DWORD *)v10 + 52);
          if ( v14 != -1 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v14);
        }
        ExAcquirePushLockExclusiveEx((char *)v10 + 184, 0LL);
      }
      *((_QWORD *)v10 + 24) = KeGetCurrentThread();
      v10 = Current;
    }
  }
  if ( a4 )
    *a4 = 0LL;
  if ( (int)VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)a2, a4, a3, a5, a6) < 0 )
  {
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&Current);
    return 3223191810LL;
  }
  else
  {
    if ( v10 )
    {
      *((_QWORD *)v10 + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v10 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
}
