/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0157F40
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C0283740 (DxgkPresentRedirected.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00142E8 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00650C4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C024C57C (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        HANDLE Handle,
        bool a6)
{
  __int64 v6; // rdi
  struct DXGADAPTER *v8; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // rbx
  struct _KTHREAD **v23; // rcx
  int SwapChainBindingStatus; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  NTSTATUS v35; // ebx
  __int64 v36; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct DXGPROCESS *v40; // rbx
  struct DXGPROCESS *v41; // r12
  struct DXGGLOBAL *Global; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rbx
  HANDLE hSyncObject; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct _DXGSHAREDSYNCOBJECT *v52; // rdi
  UINT64 FenceValue; // rax
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PVOID v58; // r12
  __int64 v59; // r13
  __int64 v60; // rax
  int v61; // r9d
  _QWORD *v62; // rax
  __int64 v63; // rax
  char *v64; // rdx
  char *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  char *v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  char *v75; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+38h] [rbp-28h] BYREF
  PERESOURCE *v83; // [rsp+48h] [rbp-18h] BYREF
  char v84; // [rsp+50h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v86; // [rsp+A8h] [rbp+48h] BYREF
  struct DXGADAPTER *v87; // [rsp+B0h] [rbp+50h]

  v87 = a3;
  v6 = *((_QWORD *)a3 + 338);
  v8 = a3;
  v11 = v6 + 840;
  if ( v6 != -840 && *(struct _KTHREAD **)(v6 + 848) == KeGetCurrentThread() )
  {
    v60 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v60 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v60);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 840, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v61 = *(_DWORD *)(v6 + 864);
      if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v61);
    }
    ExAcquirePushLockSharedEx(v6 + 840, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v18 = ProcessSessionId < *(_DWORD *)(v6 + 872) && *(_QWORD *)(*(_QWORD *)(v6 + 880) + 8LL * ProcessSessionId);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 16) )
  {
    v21 = *((_QWORD *)this + 1) + 136LL;
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(v21, 0LL);
    KeLeaveCriticalRegion();
    v20 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
  }
  v22 = (char *)a2 + 8;
  if ( !*((_BYTE *)a2 + 32) )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v62[3] = 275LL;
    v62[4] = 4LL;
    v62[5] = v22;
    v62[6] = 0LL;
    v62[7] = 0LL;
    WdLogEvent5_WdCriticalError(v62);
  }
  v23 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != v23[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v23, *((char **)a2 + 5));
  *((_QWORD *)a2 + 5) = 0LL;
  if ( *((_BYTE *)a2 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  if ( !Handle )
    goto LABEL_18;
  v86 = 0LL;
  v55 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v86, 0LL);
  v58 = v86;
  v59 = v55;
  if ( v55 < 0 )
  {
    v63 = WdLogNewEntry5_WdEvent(v57, v56);
    *(_QWORD *)(v63 + 24) = v59;
    WdLogEvent5_WdEvent(v63);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v64);
    return (unsigned int)v59;
  }
  else
  {
    if ( !a6 )
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(v86, Executive, 0, 1u, &Timeout);
      goto LABEL_53;
    }
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(v86, Executive, 0, 1u, &Timeout) != 258 )
    {
LABEL_53:
      ObfDereferenceObject(v58);
      v8 = v87;
LABEL_18:
      SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v18, a4);
      v29 = SwapChainBindingStatus;
      if ( SwapChainBindingStatus < 0 )
      {
        if ( SwapChainBindingStatus != -1071775733 && SwapChainBindingStatus != -1071775730 )
        {
          v66 = WdLogNewEntry5_WdEvent(v26, v25);
          *(_QWORD *)(v66 + 24) = v29;
          WdLogEvent5_WdEvent(v66);
        }
        goto LABEL_76;
      }
      if ( !a4 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v26, v25);
        *(_QWORD *)(v67 + 24) = 129LL;
        WdLogEvent5_WdAssertion(v67);
      }
      if ( !*((_BYTE *)this + 16) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
        v30 = *((_QWORD *)this + 1);
        *(_QWORD *)this = -1LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v30 + 136, 0LL);
        *((_BYTE *)this + 16) = 1;
      }
      if ( *((_BYTE *)a2 + 144) )
      {
        COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 72), 0LL);
        v25 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 200LL);
        if ( (_DWORD)v25 != 1 )
          goto LABEL_73;
      }
      if ( *((_BYTE *)a2 + 32) )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25);
        v68[3] = 275LL;
        v68[4] = 4LL;
        v68[5] = v22;
        v68[6] = 0LL;
        v68[7] = 0LL;
        WdLogEvent5_WdCriticalError(v68);
      }
      v31 = *((_QWORD *)a2 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 184) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v31 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v33, 72);
          KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), 0LL);
      }
      *((_QWORD *)a2 + 5) = 0LL;
      *((_BYTE *)a2 + 32) = 1;
      v34 = *(unsigned int *)(*((_QWORD *)a2 + 17) + 576LL);
      if ( (_DWORD)v34 == 1 )
      {
        v35 = 0;
        if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
        {
          v36 = PsGetCurrentProcess(v34, v25, v27, v28);
          ProcessDxgProcess = PsGetProcessDxgProcess(v36);
          v40 = (struct DXGPROCESS *)ProcessDxgProcess;
          if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
            || (Current = DXGTHREAD::GetCurrent(v39, v38)) == 0LL
            || (v41 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
          {
            v41 = v40;
          }
          HandleInformation = 0LL;
          Global = DXGGLOBAL::GetGlobal(v39, v38);
          v83 = (PERESOURCE *)Global;
          v84 = 0;
          if ( !Global )
          {
            v77 = WdLogNewEntry5_WdAssertion(v44, v43);
            *(_QWORD *)(v77 + 24) = 2427LL;
            WdLogEvent5_WdAssertion(v77);
            Global = (struct DXGGLOBAL *)v83;
          }
          if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
          {
            v78 = WdLogNewEntry5_WdAssertion(v46, v45);
            *(_QWORD *)(v78 + 24) = 2432LL;
            WdLogEvent5_WdAssertion(v78);
          }
          if ( v84 )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45);
            v79[5] = &v83;
            v79[3] = 275LL;
            v79[4] = 4LL;
            v79[6] = 0LL;
            v79[7] = 0LL;
            WdLogEvent5_WdCriticalError(v79);
          }
          v47 = v83;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v47[65], 1u);
          hSyncObject = a4->Token.Flip.hSyncObject;
          v84 = 1;
          Object = 0LL;
          v35 = ObReferenceObjectByHandle(
                  hSyncObject,
                  0x20000u,
                  g_pDxgkSharedSyncObjectType,
                  1,
                  &Object,
                  &HandleInformation);
          if ( v35 < 0 )
          {
            v80 = WdLogNewEntry5_WdWarning(v50, v49, v51);
            *(_QWORD *)(v80 + 24) = a4->Token.Flip.hSyncObject;
            WdLogEvent5_WdWarning(v80);
          }
          else
          {
            v52 = (struct _DXGSHAREDSYNCOBJECT *)Object;
            FenceValue = *(_QWORD *)(*(_QWORD *)Object + 112LL);
            if ( FenceValue <= a4->Token.Flip.FenceValue )
              FenceValue = a4->Token.Flip.FenceValue;
            *(_QWORD *)(*(_QWORD *)Object + 112LL) = FenceValue;
            a4->Token.Flip.hSyncObject = 0LL;
            if ( *((_BYTE *)v8 + 209) )
            {
              v35 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                      (struct DXGADAPTER *)((char *)v8 + 4240),
                      v41,
                      v52,
                      a4->Token.Flip.FenceValue);
              if ( v35 < 0 )
              {
                ObfDereferenceObject(v52);
                if ( v84 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
                LODWORD(v29) = v35;
                goto LABEL_75;
              }
            }
            ObfDereferenceObject(v52);
          }
          if ( v84 )
          {
            v84 = 0;
            ExReleaseResourceLite(v83[65]);
            KeLeaveCriticalRegion();
          }
        }
        LODWORD(v29) = v35;
        if ( v35 >= 0 )
          return (unsigned int)v29;
        goto LABEL_75;
      }
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( *((_BYTE *)a2 + 144) )
LABEL_73:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      v71 = WdLogNewEntry5_WdError(v70, v69);
      LODWORD(v29) = -1073741130;
      *(_QWORD *)(v71 + 24) = -1073741130LL;
      WdLogEvent5_WdError(v71);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v72);
LABEL_75:
      DXGADAPTERSTOPRESETLOCKSHARED::Release(this);
      COREDEVICEACCESS::Release(a2, v73);
      DxgkCancelSwapChainBinding(a4, v74);
LABEL_76:
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v75);
      return (unsigned int)v29;
    }
    ObfDereferenceObject(v58);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v65);
    return 3223191810LL;
  }
}
