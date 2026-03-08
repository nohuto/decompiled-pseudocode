/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C018A710 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C01D8DE0 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A8950 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1C02B5F20 (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0325CC0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // r12
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // r14
  __int64 v20; // rax
  struct _KEVENT **v21; // rdi
  __int64 v22; // rcx
  struct _KEVENT *v23; // rbx
  struct _KEVENT *v24; // rcx
  volatile signed __int64 *Blink; // rax
  volatile signed __int64 *v26; // rax
  struct _LIST_ENTRY *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _LIST_ENTRY *v30; // rbx
  struct _LIST_ENTRY *v31; // rax
  OUTPUTDUPL_MGR *v32; // rcx
  struct DXGGLOBAL *Global; // rsi
  struct _KTHREAD **v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct OUTPUTDUPL_MGR_INDIRECT *i; // rdi
  int *v38; // rbx
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 CurrentProcessSessionId; // r12
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rax
  OUTPUTDUPL_MGR *v52; // rcx
  struct DXGADAPTER *v53; // rcx
  struct DXGADAPTER *v54; // rcx
  unsigned int *v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rdi
  int v58; // eax
  unsigned int v59; // r13d
  volatile signed __int64 *v60; // rax
  ADAPTER_RENDER **v61; // rcx
  int v63; // r9d
  int v64; // r9d
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  void *v68; // rax
  int v69; // r9d
  __int64 v70; // rbx
  unsigned int v71; // edi
  struct _KEVENT *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // [rsp+68h] [rbp-A0h]
  int v76; // [rsp+6Ch] [rbp-9Ch]
  __int64 v77; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v78; // [rsp+78h] [rbp-90h] BYREF
  char v79; // [rsp+80h] [rbp-88h]
  unsigned int v80; // [rsp+88h] [rbp-80h]
  volatile signed __int64 *v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+98h] [rbp-70h] BYREF
  char v83; // [rsp+A0h] [rbp-68h]
  unsigned int v84; // [rsp+A8h] [rbp-60h]
  void *v85; // [rsp+B0h] [rbp-58h]
  unsigned int *v86; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGALLOCATION **v87; // [rsp+C0h] [rbp-48h]
  unsigned int *v88; // [rsp+C8h] [rbp-40h]
  ADAPTER_RENDER **v89; // [rsp+D0h] [rbp-38h]
  void *v90; // [rsp+D8h] [rbp-30h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v91; // [rsp+E8h] [rbp-20h]
  struct DXGPROCESS *v92; // [rsp+F0h] [rbp-18h]
  _QWORD v93[5]; // [rsp+F8h] [rbp-10h] BYREF
  char v94[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v95; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v96; // [rsp+130h] [rbp+28h]
  char v97; // [rsp+138h] [rbp+30h]
  char *v98; // [rsp+140h] [rbp+38h]
  char v99[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v100; // [rsp+168h] [rbp+60h]
  struct DXGADAPTER *v101; // [rsp+170h] [rbp+68h]
  char v102; // [rsp+178h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+78h]
  __int64 v104; // [rsp+1A0h] [rbp+98h]
  char v105; // [rsp+1A8h] [rbp+A0h]
  _BYTE v106[256]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v107[512]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v10 = a5;
  v11 = a2;
  v92 = a1;
  v80 = a5;
  v84 = a3;
  v86 = a4;
  v91 = a7;
  memset(v106, 0, sizeof(v106));
  memset(v107, 0, sizeof(v107));
  v12 = 0LL;
  v88 = (unsigned int *)v106;
  v87 = (struct DXGALLOCATION **)v107;
  v85 = 0LL;
  v90 = 0LL;
  if ( a3 && a5 )
  {
    v65 = v11;
    v71 = -1073741811;
    WdLogSingleEntry2(3LL, v65, -1073741811LL);
    goto LABEL_107;
  }
  v75 = a5;
  if ( a5 >= 0x41 )
  {
    v66 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v66 = -1LL;
    v85 = (void *)operator new[](v66, 0x4B677844u, 256LL);
    v67 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v67 = -1LL;
    v68 = (void *)operator new[](v67, 0x4B677844u, 256LL);
    v90 = v68;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && v85 && v68 )
    {
      v87 = (struct DXGALLOCATION **)v68;
      v88 = (unsigned int *)v85;
    }
    else
    {
      WdLogSingleEntry1(4LL, 10276LL);
      v10 = 64;
      v80 = 64;
    }
  }
  v13 = (char *)a1 + 248;
  if ( a1 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)a1 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v69 = *((_DWORD *)a1 + 68);
      if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (const EVENT_DESCRIPTOR *)"g", v15, v69);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 66);
  v16 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v16 >= *((_DWORD *)a1 + 74) )
    goto LABEL_25;
  v17 = *((_QWORD *)a1 + 35) + 16LL * v16;
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v17 + 8) & 0x60) )
    goto LABEL_25;
  if ( (*(_DWORD *)(v17 + 8) & 0x2000) != 0 )
    goto LABEL_25;
  v18 = *(_DWORD *)(v17 + 8) & 0x1F;
  if ( !v18 )
    goto LABEL_25;
  if ( v18 != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  v19 = *(_QWORD *)v17;
  v77 = v19;
  v12 = v19;
  if ( !v19 )
  {
LABEL_25:
    _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
    v81 = (volatile signed __int64 *)(v12 + 64);
    ExReleasePushLockSharedEx(v13, 0LL);
    KeLeaveCriticalRegion();
    v70 = v11;
    v71 = -1073741811;
    WdLogSingleEntry2(2LL, v70, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v70,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_107;
  }
  v81 = (volatile signed __int64 *)(v19 + 64);
  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
  _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  v20 = *(_QWORD *)(v19 + 16);
  v21 = (struct _KEVENT **)(v19 + 16);
  v89 = (ADAPTER_RENDER **)(v19 + 16);
  v22 = *(_QWORD *)(v20 + 16);
  if ( *(int *)(v22 + 2552) >= 0x2000 || *(_BYTE *)(v22 + 2852) )
    v76 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v76 = 0;
  v23 = *v21;
  if ( *(_DWORD *)(v19 + 464) == 2 )
  {
    if ( KeReadStateEvent(v23 + 5) )
      goto LABEL_17;
    v72 = v23 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v23 + 4) )
      goto LABEL_17;
    v72 = v23 + 4;
  }
  KeWaitForSingleObject(v72, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v76 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
      KeLeaveCriticalRegion();
      v77 = v19;
      v81 = (volatile signed __int64 *)(v19 + 64);
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v73, (const EVENT_DESCRIPTOR *)"g", v74, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
    DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
  }
  v24 = *v21;
  Blink = (volatile signed __int64 *)(*v21)->Header.WaitListHead.Blink;
  v96 = (struct DXGADAPTER *)Blink;
  v97 = 0;
  v98 = 0LL;
  if ( Blink )
  {
    _InterlockedIncrement64(Blink + 3);
    v24 = *v21;
    v95 = -1LL;
  }
  v26 = *(volatile signed __int64 **)(v19 + 1880);
  if ( v26 )
  {
    v101 = *(struct DXGADAPTER **)(v19 + 1880);
    v102 = 0;
    v103 = 0LL;
LABEL_27:
    _InterlockedIncrement64(v26 + 3);
    v100 = -1LL;
    goto LABEL_28;
  }
  v26 = (volatile signed __int64 *)v24->Header.WaitListHead.Blink;
  v101 = (struct DXGADAPTER *)v26;
  v102 = 0;
  v103 = 0LL;
  if ( v26 )
    goto LABEL_27;
LABEL_28:
  v104 = v19;
  v27 = *(struct _LIST_ENTRY **)(v19 + 1880);
  if ( v27 == (*v21)->Header.WaitListHead.Blink || !v27 )
  {
    v105 = 0;
    goto LABEL_30;
  }
  v105 = 1;
  COREACCESS::AcquireShared((COREACCESS *)v99, 0LL);
  if ( *((_DWORD *)v101 + 50) == 1 )
  {
    v77 = v19;
    v81 = (volatile signed __int64 *)(v19 + 64);
LABEL_30:
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v96 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v96 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (const EVENT_DESCRIPTOR *)"g", v29, 72);
        KeWaitForSingleObject((char *)v96 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v96, 0LL);
    }
    v98 = 0LL;
    v97 = 1;
    if ( *(_DWORD *)(v104 + 608) == 1 )
    {
      v30 = *(struct _LIST_ENTRY **)(v19 + 1880);
      if ( !v30 )
      {
        v30 = (*v21)->Header.WaitListHead.Blink;
        if ( !v30 )
        {
          WdLogSingleEntry1(1LL, 11140LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11140LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v31 = v30[182].Blink;
      if ( !v31
        || (v32 = (OUTPUTDUPL_MGR *)v31[7].Blink) == 0LL
        || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v32, (struct DXGDEVICE *)v19) >= 0 )
      {
        v93[0] = *(struct _LIST_ENTRY **)((char *)&v30[25].Flink + 4);
        v93[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
        v93[2] = v19;
        Global = DXGGLOBAL::GetGlobal();
        v79 = 0;
        v78 = (struct _KTHREAD **)((char *)Global + 1552);
        if ( Global == (struct DXGGLOBAL *)-1552LL )
        {
          WdLogSingleEntry1(1LL, 592LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v78[3] == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 599LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
        }
        v34 = v78;
        KeEnterCriticalRegion();
        if ( v34[3] == KeGetCurrentThread() )
        {
          if ( *((int *)v34 + 8) <= 0 )
          {
            WdLogSingleEntry1(1LL, 491LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*((_DWORD *)v34 + 8);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34 + 1, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v64 = *((_DWORD *)v34 + 9);
              if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v35, (const EVENT_DESCRIPTOR *)"g", v36, v64);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v34 + 2);
            ExAcquirePushLockExclusiveEx(v34 + 1, 0LL);
          }
          if ( v34[3] )
          {
            WdLogSingleEntry1(1LL, 515LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *((_DWORD *)v34 + 8) )
          {
            WdLogSingleEntry1(1LL, 516LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
          }
          v34[3] = KeGetCurrentThread();
          *((_DWORD *)v34 + 8) = 1;
        }
        v79 = 1;
        for ( i = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 200);
              i != (struct DXGGLOBAL *)((char *)Global + 1600) && i;
              i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
        {
          if ( lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v93) < 0 )
          {
            if ( v79 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v78);
            goto LABEL_59;
          }
        }
        if ( v79 )
        {
          v38 = (int *)v78;
          v79 = 0;
          if ( v78[3] != KeGetCurrentThread() )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v78, 0LL, 0LL);
          if ( v38[8] <= 0 )
          {
            WdLogSingleEntry1(1LL, 535LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
          }
          v39 = v38[8]-- == 1;
          if ( v39 )
          {
            *((_QWORD *)v38 + 3) = 0LL;
            ExReleasePushLockExclusiveEx(v38 + 2, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
LABEL_59:
      v42 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( !v42 )
        goto LABEL_176;
      CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v41, v40, v43, v44);
      v82 = v42 + 88;
      v83 = 0;
      if ( v42 == -88 )
      {
        WdLogSingleEntry1(1LL, 592LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(struct _KTHREAD **)(v82 + 24) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 599LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v83 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v82, 0LL, 0LL);
      v46 = v82;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v46 + 24) == KeGetCurrentThread() )
      {
        if ( *(int *)(v46 + 32) <= 0 )
        {
          WdLogSingleEntry1(1LL, 491LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
        }
        ++*(_DWORD *)(v46 + 32);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46 + 8, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v63 = *(_DWORD *)(v46 + 36);
            if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, v63);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v46 + 16));
          ExAcquirePushLockExclusiveEx(v46 + 8, 0LL);
        }
        if ( *(_QWORD *)(v46 + 24) )
        {
          WdLogSingleEntry1(1LL, 515LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v46 + 32) )
        {
          WdLogSingleEntry1(1LL, 516LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
        }
        *(_QWORD *)(v46 + 24) = KeGetCurrentThread();
        *(_DWORD *)(v46 + 32) = 1;
      }
      v83 = 1;
      if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v42 + 80) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v82);
        v50 = 0LL;
      }
      else
      {
        _mm_lfence();
        v49 = v82;
        v50 = *(_QWORD *)(*(_QWORD *)(v42 + 48) + 8 * CurrentProcessSessionId);
        v83 = 0;
        if ( *(struct _KTHREAD **)(v82 + 24) != KeGetCurrentThread() )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v82, 0LL, 0LL);
        if ( *(int *)(v49 + 32) <= 0 )
        {
          WdLogSingleEntry1(1LL, 535LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
        }
        v39 = (*(_DWORD *)(v49 + 32))-- == 1;
        if ( v39 )
        {
          *(_QWORD *)(v49 + 24) = 0LL;
          ExReleasePushLockExclusiveEx(v49 + 8, 0LL);
        }
        KeLeaveCriticalRegion();
      }
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 8);
        if ( v51 )
        {
          v52 = *(OUTPUTDUPL_MGR **)(v51 + 120);
          if ( v52 )
            OUTPUTDUPL_MGR::CleanUpPendingList(v52, (struct DXGDEVICE *)v19);
        }
        else
        {
          WdLogSingleEntry1(2LL, 3909LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL",
            3909LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
LABEL_176:
        WdLogSingleEntry1(2LL, 3902LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3902LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v94);
      if ( v105 )
        COREACCESS::Release((COREACCESS *)v99);
    }
    goto LABEL_85;
  }
  COREACCESS::Release((COREACCESS *)v99);
  v77 = v19;
  v81 = (volatile signed __int64 *)(v19 + 64);
LABEL_85:
  v53 = v101;
  if ( v101 )
  {
    if ( v102 )
    {
      COREACCESS::Release((COREACCESS *)v99);
      v53 = v101;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
  }
  v54 = v96;
  if ( v96 )
  {
    if ( v97 )
    {
      v97 = 0;
      v54 = v96;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v96 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v96, v98);
        v54 = v96;
      }
      v98 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
  }
  v55 = v86;
  v56 = a5;
  while ( 1 )
  {
    v57 = v10;
    if ( v56 < v10 )
      v57 = v56;
    v58 = DxgkDestroyAllocationInternal(
            v92,
            (struct DXGDEVICE *)v19,
            v88,
            v87,
            v84,
            (const unsigned int **)&v86,
            v57,
            a6,
            v55,
            v91,
            a8);
    v59 = v58;
    if ( v58 < 0 )
      break;
    v55 += v57;
    v10 = v80;
    v39 = v75 == (_DWORD)v57;
    v56 = v75 - v57;
    v75 -= v57;
    if ( v39 )
    {
      v71 = 0;
      goto LABEL_103;
    }
  }
  WdLogSingleEntry1(3LL, v58);
  v71 = v59;
LABEL_103:
  if ( v76 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v19 + 160));
    ExReleasePushLockSharedEx(v19 + 144, 0LL);
    KeLeaveCriticalRegion();
    v60 = v81;
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
    KeLeaveCriticalRegion();
    v60 = (volatile signed __int64 *)(v77 + 64);
  }
  v61 = v89;
  if ( _InterlockedExchangeAdd64(v60, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*v61, (struct DXGDEVICE *)v19);
LABEL_107:
  if ( v90 )
    operator delete(v90);
  if ( v85 )
    operator delete(v85);
  return v71;
}
