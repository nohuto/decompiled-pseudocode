/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C007B230
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006090 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C007B134 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3)
{
  bool v3; // zf
  DXGFASTMUTEX *v4; // rcx
  __int64 v6; // rdx
  struct _MDL *FullMDL; // rdi
  __int64 v8; // r8
  DXGFASTMUTEX *v9; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  DXGFASTMUTEX *v20; // [rsp+20h] [rbp-18h] BYREF
  char v21; // [rsp+28h] [rbp-10h]

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328) == 0LL;
  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v21 = 0;
  v20 = v4;
  if ( v3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4, a2, a3);
    *(_QWORD *)(v14 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v14);
    if ( v21 )
    {
      v17 = WdLogNewEntry5_WdCriticalError(v16, v15);
      *(_QWORD *)(v17 + 40) = &v20;
      *(_QWORD *)(v17 + 24) = 275LL;
      *(_QWORD *)(v17 + 32) = 4LL;
      *(_OWORD *)(v17 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v17);
    }
  }
  DXGFASTMUTEX::Acquire(v20);
  v21 = 1;
  FullMDL = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  if ( v21 )
  {
    v9 = v20;
    v21 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v20 + 2) != CurrentThread )
    {
      v18 = WdLogNewEntry5_WdCriticalError(CurrentThread, v6);
      *(_QWORD *)(v18 + 24) = 275LL;
      *(_QWORD *)(v18 + 32) = 4LL;
      *(_QWORD *)(v18 + 40) = v9;
      *(_OWORD *)(v18 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
    v11 = *((_DWORD *)v9 + 6);
    if ( v11 <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(CurrentThread, v6, v8);
      *(_QWORD *)(v19 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v19);
      v11 = *((_DWORD *)v9 + 6);
    }
    v12 = v11 - 1;
    *((_DWORD *)v9 + 6) = v12;
    if ( !v12 )
    {
      *((_QWORD *)v9 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return FullMDL;
}
