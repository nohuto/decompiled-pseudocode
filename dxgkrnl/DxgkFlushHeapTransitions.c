/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C01D47D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C0384544 (-VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v3; // rdi
  __int64 v4; // r8
  DXGADAPTER *v6; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGADAPTER *v8; // [rsp+48h] [rbp-20h]
  char v9; // [rsp+50h] [rbp-18h]
  struct DXGADAPTER *v10; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v6, v1, Current, &v10, 1);
  v3 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, v1, -1073741811LL);
    if ( v6 )
      DXGADAPTER::ReleaseReference(v6);
    return 3221225485LL;
  }
  v8 = v10;
  v9 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( *((_DWORD *)v3 + 50) == 1 )
  {
    v4 = *((_QWORD *)v10 + 366);
    if ( v4 )
    {
      if ( *((_BYTE *)v10 + 209) )
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions((struct DXGADAPTER *)((char *)v10 + 4472));
      else
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 760) + 8LL) + 1088LL))(*(_QWORD *)(v4 + 768));
    }
  }
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( v6 )
    DXGADAPTER::ReleaseReference(v6);
  return 0LL;
}
