/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C01B7E10 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C01CDCF0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C01CDE70 (DxgkUnlock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02F222C (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CF2FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001B7C4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C031DA20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C038B814 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, char a3)
{
  __int64 NumAllocations; // rcx
  D3DKMT_HANDLE *phAllocations; // rdx
  signed int hDevice; // r12d
  UINT i; // r15d
  unsigned int *v9; // rdx
  struct DXGALLOCATION *v10; // rax
  DXGDEVICE *v11; // r9
  int v12; // eax
  D3DKMT_HANDLE v13; // r14d
  struct DXGTHREAD *DxgThread; // rax
  D3DKMT_HANDLE v16; // eax
  __int64 v17; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v19; // r14d
  unsigned int v20; // r14d
  __int64 v21; // r12
  struct DXGALLOCATION *DisplayedPrimary; // rcx
  unsigned int v23; // [rsp+50h] [rbp-58h]
  struct DXGTHREAD *v24; // [rsp+58h] [rbp-50h] BYREF
  struct DXGALLOCATION *v25[9]; // [rsp+60h] [rbp-48h] BYREF
  char v26; // [rsp+C0h] [rbp+18h]
  struct _D3DKMT_UNLOCK2 v27; // [rsp+C8h] [rbp+20h] BYREF

  v26 = a3;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (phAllocations = (D3DKMT_HANDLE *)a2->phAllocations) == 0LL )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    hDevice = 0;
    v27.hDevice = 0;
    for ( i = 0; ; ++i )
    {
      LODWORD(v24) = i;
      if ( i >= a2->NumAllocations )
        return (unsigned int)hDevice;
      if ( a3 )
      {
        v9 = (unsigned int *)&a2->phAllocations[i];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (unsigned int *)MmUserProbeAddress;
        v23 = *v9;
      }
      else
      {
        v23 = a2->phAllocations[i];
      }
      LODWORD(v24) = v23 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)v25, v23);
      v10 = v25[0];
      if ( !v25[0] )
      {
        WdLogSingleEntry3(3LL, this, v23, -1073741811LL);
LABEL_42:
        v13 = -1073741811;
        goto LABEL_16;
      }
      if ( !*((_QWORD *)v25[0] + 3) )
      {
        WdLogSingleEntry4(3LL, this, v23, v25[0], -1073741811LL);
        goto LABEL_42;
      }
      if ( !*((_DWORD *)this + 116) )
      {
        v19 = *(_DWORD *)(*((_QWORD *)v25[0] + 6) + 4LL);
        if ( (v19 & 4) != 0 )
        {
          if ( v26 )
            break;
        }
      }
LABEL_13:
      v11 = (DXGDEVICE *)*((_QWORD *)v10 + 1);
      if ( v11 != this )
      {
        WdLogSingleEntry4(3LL, v10, this, v11, -1073741811LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v25);
        return 3221225485LL;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                          + 8LL)
                                                                              + 264LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              *((_QWORD *)v10 + 3),
              (unsigned int)v24,
              0LL,
              0LL);
      v13 = v12;
      if ( v12 < 0 )
        WdLogSingleEntry4(3LL, this, v23, v25[0], v12);
LABEL_16:
      if ( hDevice < 0 )
        v13 = hDevice;
      hDevice = v13;
      v27.hDevice = v13;
      if ( v25[0] )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v25[0] + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
      {
        v24 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v24) >= 0 )
        {
          DxgThread = v24;
          if ( v24 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v24 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          }
        }
      }
      a3 = v26;
    }
    v20 = (v19 >> 6) & 0xF;
    v21 = *((_QWORD *)this + 235);
    if ( v21 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 235)) )
      {
        WdLogSingleEntry1(1LL, 376LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
          376LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + 152) != 1
        || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v21 + 2920), this, v20) )
      {
        goto LABEL_52;
      }
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v20);
      v10 = v25[0];
      if ( DisplayedPrimary == v25[0] )
      {
        DXGDEVICE::UpdateDodFrontBuffer(this, v25[0]);
LABEL_52:
        v10 = v25[0];
      }
    }
    hDevice = v27.hDevice;
    goto LABEL_13;
  }
  if ( (_DWORD)NumAllocations == 1 )
  {
    v27 = 0LL;
    if ( a3 )
    {
      NumAllocations = MmUserProbeAddress;
      if ( (unsigned __int64)phAllocations >= MmUserProbeAddress )
        phAllocations = (D3DKMT_HANDLE *)MmUserProbeAddress;
      v16 = *phAllocations;
    }
    else
    {
      v16 = *phAllocations;
    }
    v27.hAllocation = v16;
    v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(NumAllocations);
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4472),
             Current,
             this,
             &v27,
             1u);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: NumAllocations must be 1, returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
