/*
 * XREFs of DxgkLock2Internal @ 0x1C019DDA0
 * Callers:
 *     DxgkLock2 @ 0x1C019E150 (DxgkLock2.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0385DF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DxgkLock2Internal(struct DXGDEVICE *a1, __int64 a2, __int64 a3, struct _D3DKMT_LOCK2 *a4)
{
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  struct _EX_RUNDOWN_REF *v12; // rdx
  unsigned int v13; // ebx
  bool v14; // zf
  struct _EX_RUNDOWN_REF *v15; // rax
  ULONG_PTR Count; // rcx
  int v17; // edx
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rdx
  int v21; // ecx
  struct DXGDEVICE *v22; // r9
  struct DXGTHREAD *DxgThread; // rax
  unsigned int v25; // [rsp+28h] [rbp-50h]
  unsigned int v26; // [rsp+30h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v27; // [rsp+90h] [rbp+18h] BYREF
  struct DXGTHREAD *v28; // [rsp+98h] [rbp+20h] BYREF

  hAllocation = a4->hAllocation;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a3 + 248));
  v9 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v9 >= *(_DWORD *)(a3 + 296) )
    goto LABEL_7;
  v10 = *(_QWORD *)(a3 + 280) + 16LL * v9;
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v10 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v10 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v11 = *(_DWORD *)(v10 + 8) & 0x1F;
  if ( !v11 )
    goto LABEL_7;
  if ( v11 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(struct _EX_RUNDOWN_REF **)v10;
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27, v12);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 264));
  ExReleasePushLockSharedEx(a3 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v27 )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(3LL, a4->hAllocation, -1073741811LL);
    goto LABEL_36;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(3LL, a1, v27, -1073741811LL);
    goto LABEL_36;
  }
  if ( !*(_BYTE *)(a2 + 209) && !v27[3].Count )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(3LL, a4->hAllocation, v27, -1073741811LL);
    goto LABEL_36;
  }
  v14 = (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() == 0;
  v15 = v27;
  Count = v27[5].Count;
  if ( v14 )
  {
    if ( !Count )
      goto LABEL_22;
    v19 = *(_DWORD *)(Count + 4);
    if ( (v19 & 1) == 0 || (v19 & 2) != 0 || (*(_DWORD *)(*(_QWORD *)(Count + 56) + 12LL) & 0x600) != 0 )
      goto LABEL_22;
    goto LABEL_28;
  }
  if ( Count )
  {
    v17 = *(_DWORD *)(Count + 4);
    if ( (v17 & 1) != 0 && (v17 & 2) == 0 )
    {
      if ( *(_BYTE *)(a2 + 209) )
      {
LABEL_23:
        v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(a2 + 4472),
                (struct DXGPROCESS *)a3,
                a1,
                a4,
                0,
                v25,
                v26);
        goto LABEL_35;
      }
      v14 = (*(unsigned __int8 (__fastcall **)(ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 760LL) + 8LL)
                                                         + 1272LL))(v27[3].Count) == 0;
      v15 = v27;
      if ( v14 )
      {
LABEL_28:
        v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        v21 = *(_DWORD *)(v20 + 436);
        if ( (v21 & 0x10) == 0 && (v21 & 8) == 0 && (*(_DWORD *)(v20 + 2284) & 0x80u) == 0 )
        {
          v13 = -1073741811;
          WdLogSingleEntry3(3LL, a1, v15, -1073741811LL);
          goto LABEL_36;
        }
      }
    }
  }
LABEL_22:
  if ( *(_BYTE *)(a2 + 209) )
    goto LABEL_23;
  v22 = (struct DXGDEVICE *)v15[1].Count;
  if ( v22 != a1 )
  {
    v13 = -1073741811;
    WdLogSingleEntry4(3LL, v15, a1, v22, -1073741811LL);
    goto LABEL_36;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 808LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 768LL),
          v15[3].Count,
          0LL,
          &a4->pData);
LABEL_35:
  v13 = v18;
LABEL_36:
  if ( v27 )
    ExReleaseRundownProtection(v27 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v28 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v28) >= 0 )
    {
      DxgThread = v28;
      if ( v28 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v28 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
      }
    }
  }
  return v13;
}
