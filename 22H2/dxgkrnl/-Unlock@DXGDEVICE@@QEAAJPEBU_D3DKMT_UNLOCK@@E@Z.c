/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DE810 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock @ 0x1C010CE30 (DxgkLock.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C01527E0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C0152950 (DxgkUnlock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01968D4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02BA248 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BD1B4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FF9E0 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C00020A0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024DD9C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0275940 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3, __int64 a4)
{
  const struct _D3DKMT_UNLOCK *v4; // rsi
  __int64 NumAllocations; // rcx
  int v7; // r13d
  __int64 v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  const struct DXGALLOCATION *DisplayedPrimary; // rcx
  __int64 v14; // r8
  struct DXGALLOCATION *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  struct DXGALLOCATION *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // r12
  int CurrentProcessSessionId; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rdi
  void *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int *ThreadProperty; // rdi
  __int64 v43; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  D3DKMT_HANDLE hDevice; // eax
  __int64 v49; // rbx
  struct DXGPROCESS *Current; // rax
  _QWORD *v51; // rax
  unsigned int v52; // r12d
  unsigned int v53; // r12d
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  struct _D3DKMT_UNLOCK2 v60; // [rsp+30h] [rbp-58h] BYREF
  struct DXGALLOCATION *v61; // [rsp+38h] [rbp-50h] BYREF
  const struct DXGALLOCATION *v62; // [rsp+40h] [rbp-48h]
  char v63; // [rsp+A0h] [rbp+18h]
  unsigned int v64; // [rsp+A8h] [rbp+20h]

  v63 = a3;
  v4 = a2;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (a2 = (const struct _D3DKMT_UNLOCK *)a2->phAllocations) == 0LL )
  {
    v46 = WdLogNewEntry5_WdWarning(NumAllocations, a2, a3);
    *(_QWORD *)(v46 + 24) = this;
    *(_QWORD *)(v46 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v46);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v60.hDevice = v8;
      if ( (unsigned int)v8 >= v4->NumAllocations )
        return (unsigned int)v7;
      if ( (_BYTE)a3 )
      {
        v9 = (unsigned int *)&v4->phAllocations[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (unsigned int *)MmUserProbeAddress;
        v10 = *v9;
        v64 = *v9;
      }
      else
      {
        v10 = v4->phAllocations[v8];
        v64 = v10;
      }
      v11 = v10 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v61, v10);
      v15 = v61;
      if ( !v61 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v12, v14);
        v51[3] = this;
        v51[4] = v10;
        v51[5] = -1073741811LL;
LABEL_56:
        WdLogEvent5_WdWarning(v51);
        LODWORD(v20) = -1073741811;
        goto LABEL_16;
      }
      if ( !*((_QWORD *)v61 + 3) )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v12, v14);
        v51[3] = this;
        v51[4] = v10;
        v51[5] = v61;
        v51[6] = -1073741811LL;
        goto LABEL_56;
      }
      if ( !*((_DWORD *)this + 108) )
      {
        DisplayedPrimary = (const struct DXGALLOCATION *)*((_QWORD *)v61 + 6);
        v52 = *((_DWORD *)DisplayedPrimary + 1);
        if ( (v52 & 4) != 0 )
        {
          if ( v63 )
          {
            v53 = (v52 >> 6) & 0xF;
            DisplayedPrimary = (const struct DXGALLOCATION *)*((_QWORD *)this + 231);
            v62 = DisplayedPrimary;
            if ( DisplayedPrimary )
              break;
          }
        }
      }
LABEL_13:
      if ( *((DXGDEVICE **)v15 + 1) != this )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v12, v14);
        v55[3] = v61;
        v55[4] = this;
        v55[5] = *((_QWORD *)v61 + 1);
        v55[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v55);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v61, v56);
        return 3221225485LL;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              *((_QWORD *)v15 + 3),
              v11,
              0LL,
              0LL);
      v20 = v16;
      if ( v16 < 0 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v57[3] = this;
        v57[4] = v10;
        v57[5] = v61;
        v57[6] = v20;
        WdLogEvent5_WdWarning(v57);
      }
LABEL_16:
      if ( v7 >= 0 )
        v7 = v20;
      v21 = v61;
      if ( v61 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v61 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v21, v17) + 311) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v58 = WdLogNewEntry5_WdAssertion(v23, v22);
          *(_QWORD *)(v58 + 24) = 507LL;
          WdLogEvent5_WdAssertion(v58);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v23, v22);
        CurrentProcess = PsGetCurrentProcess(v27, v26, v28, v29);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( CurrentProcessSessionId )
        {
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            if ( ProcessDxgProcess )
            {
              v32 = *(void **)(ProcessDxgProcess + 88);
              if ( v32 )
              {
                if ( v32 != &gDxgkWin32kEngInterface )
                {
                  v33 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v43 = PsGetCurrentProcess(v35, v34, v36, v37),
                        ProcessSessionId = PsGetProcessSessionIdEx(v43),
                        CurrentThreadProcess = PsGetCurrentThreadProcess(),
                        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                  {
                    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( ThreadWin32Thread )
                      v33 = *ThreadWin32Thread;
                  }
                  if ( v33 )
                  {
                    ThreadProperty = *(int **)(v33 + 80);
                    goto LABEL_33;
                  }
                }
              }
            }
          }
        }
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
LABEL_33:
          if ( ThreadProperty )
          {
            if ( ThreadProperty[8] )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39);
              v59[3] = 275LL;
              v59[4] = 38LL;
              v59[5] = ThreadProperty[8];
              v59[6] = 0LL;
              v59[7] = 0LL;
              WdLogEvent5_WdCriticalError(v59);
            }
          }
        }
      }
      v8 = (unsigned int)(v8 + 1);
      LOBYTE(a3) = v63;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DisplayedPrimary) )
    {
      v54 = WdLogNewEntry5_WdAssertion(DisplayedPrimary, v12);
      *(_QWORD *)(v54 + 24) = 366LL;
      WdLogEvent5_WdAssertion(v54);
    }
    if ( *((_DWORD *)this + 144) == 1 && ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v62 + 337), this, v53) )
    {
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v53);
      v15 = v61;
      if ( DisplayedPrimary != v61 )
      {
LABEL_67:
        v10 = v64;
        goto LABEL_13;
      }
      DXGDEVICE::UpdateDodFrontBuffer(this, v61);
    }
    v15 = v61;
    goto LABEL_67;
  }
  if ( (_DWORD)NumAllocations == 1 )
  {
    v60 = 0LL;
    if ( (_BYTE)a3 )
    {
      NumAllocations = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (const struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
      hDevice = a2->hDevice;
    }
    else
    {
      hDevice = a2->hDevice;
    }
    v60.hAllocation = hDevice;
    v49 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(NumAllocations, (__int64)a2, a3, a4);
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v49 + 4240),
             Current,
             this,
             &v60,
             1u);
  }
  else
  {
    v47 = WdLogNewEntry5_WdError(NumAllocations, a2);
    *(_QWORD *)(v47 + 24) = this;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    return 3221225485LL;
  }
}
