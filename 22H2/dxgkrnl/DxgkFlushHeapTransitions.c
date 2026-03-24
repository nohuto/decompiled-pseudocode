/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C015FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C0248E18 (-VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  DXGADAPTER *v17; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGADAPTER *v19; // [rsp+48h] [rbp-20h]
  char v20; // [rsp+50h] [rbp-18h]
  struct DXGADAPTER *v21; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v4 = *a1;
  v21 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, MmUserProbeAddress, a3, a4);
  if ( !Current )
  {
    v15 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v17, (unsigned int)v4, Current, &v21, 1);
  v12 = v21;
  if ( !v21 )
  {
    v16 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    if ( v17 )
      DXGADAPTER::ReleaseReference(v17);
    return 3221225485LL;
  }
  v19 = v21;
  v20 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( *((_DWORD *)v12 + 50) == 1 )
  {
    v13 = *((_QWORD *)v21 + 338);
    if ( v13 )
    {
      if ( *((_BYTE *)v21 + 209) )
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions((struct DXGADAPTER *)((char *)v21 + 4240));
      else
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 640) + 8LL) + 1096LL))(*(_QWORD *)(v13 + 648));
    }
  }
  if ( v20 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( v17 )
    DXGADAPTER::ReleaseReference(v17);
  return 0LL;
}
