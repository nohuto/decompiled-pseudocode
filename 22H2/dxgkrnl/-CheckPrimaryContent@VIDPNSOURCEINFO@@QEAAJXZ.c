/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02BA00C
 * Callers:
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02BA1B4 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C00020A0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0002CB4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C011662C (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02BA390 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  unsigned int v20; // ebx
  ULONG_PTR Count; // rsi
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // [rsp+20h] [rbp-28h] BYREF
  int v27; // [rsp+28h] [rbp-20h]
  _QWORD v28[3]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v28,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                   *(struct _KTHREAD ***)this,
                                                   *((_DWORD *)this + 2));
    v16 = DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v16[1].Count;
      v27 = 0;
      v26 = Count;
      if ( Count != *(_QWORD *)this )
      {
        v22 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v26) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v22 >= 0xA )
          {
            v20 = -2147483631;
            v25 = WdLogNewEntry5_WdError(v24, v23);
            *(_QWORD *)(v25 + 24) = Count;
            WdLogEvent5_WdError(v25);
            goto LABEL_15;
          }
        }
      }
      v20 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v16);
LABEL_15:
      ExReleaseRundownProtection(v16 + 11);
      if ( v26 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v26);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15, v14);
      v18 = 2LL;
      *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 2);
      v19 = (_QWORD *)(v17 + 32);
      do
      {
        *v19++ = *((int *)this + 5);
        --v18;
      }
      while ( v18 );
      WdLogEvent5_WdError(v17);
      v20 = -1071775482;
    }
    if ( v28[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
    return v20;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v10, v9, v11, v12);
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
