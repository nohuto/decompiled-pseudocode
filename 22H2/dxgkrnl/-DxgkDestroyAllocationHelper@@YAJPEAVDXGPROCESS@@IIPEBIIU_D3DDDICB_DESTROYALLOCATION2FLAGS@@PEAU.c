/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114E00
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C0115940 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C0115BA0 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0005324 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x1C011591C (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE--_ENSURE_POINTER_DEREFERENCE.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C0123BA0 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0123C80 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_ @ 0x1C0210D40 (_lambda_f082766c36497653ae8a33afcd4107b6_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  unsigned int v9; // r15d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int **v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  int v18; // r12d
  SIZE_T v19; // rax
  SIZE_T v20; // rax
  struct DXGALLOCATION **v21; // rax
  __int64 v22; // rax
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // ebx
  bool v40; // zf
  struct _KEVENT *v41; // rsi
  struct _KEVENT *v42; // rcx
  __int64 v43; // rcx
  unsigned __int8 v44; // bl
  __int64 v45; // r8
  __int64 v46; // rcx
  volatile signed __int64 *v47; // rax
  volatile signed __int64 *v48; // rax
  volatile signed __int64 *v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  struct DXGGLOBAL *Global; // rsi
  __int64 v59; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rax
  struct _KTHREAD **v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r8
  int v69; // r9d
  __int64 v70; // rax
  __int64 v71; // rax
  struct OUTPUTDUPL_MGR_INDIRECT **v72; // rsi
  struct OUTPUTDUPL_MGR_INDIRECT *i; // rbx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER *v75; // rcx
  struct DXGADAPTER *v76; // rcx
  unsigned int *v77; // r14
  __int64 v78; // rsi
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r15
  struct _KTHREAD **v84; // rbx
  _QWORD *v85; // rax
  int v86; // eax
  __int64 v87; // rax
  int v88; // eax
  __int64 v89; // rax
  unsigned int v91; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD **v92; // [rsp+68h] [rbp-98h] BYREF
  char v93; // [rsp+70h] [rbp-90h]
  unsigned int v94; // [rsp+78h] [rbp-88h]
  unsigned int *v95; // [rsp+80h] [rbp-80h] BYREF
  __int64 v96; // [rsp+88h] [rbp-78h] BYREF
  struct DXGALLOCATION **v97; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v98; // [rsp+98h] [rbp-68h] BYREF
  struct DXGALLOCATION **v99; // [rsp+A0h] [rbp-60h]
  unsigned int *v100; // [rsp+A8h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v101; // [rsp+B0h] [rbp-50h]
  struct DXGPROCESS *v102; // [rsp+B8h] [rbp-48h]
  struct DXGALLOCATION ***v103; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int **v104; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v105; // [rsp+D8h] [rbp-28h] BYREF
  int v106; // [rsp+E0h] [rbp-20h]
  _QWORD v107[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v108[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v109; // [rsp+110h] [rbp+10h]
  struct DXGADAPTER *v110; // [rsp+118h] [rbp+18h]
  char v111; // [rsp+120h] [rbp+20h]
  char *v112; // [rsp+128h] [rbp+28h]
  char v113[8]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v114; // [rsp+150h] [rbp+50h]
  struct DXGADAPTER *v115; // [rsp+158h] [rbp+58h]
  char v116; // [rsp+160h] [rbp+60h]
  __int64 v117; // [rsp+168h] [rbp+68h]
  __int64 v118; // [rsp+188h] [rbp+88h]
  char v119; // [rsp+190h] [rbp+90h]
  _BYTE v120[256]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v121[512]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v9 = a5;
  v11 = a2;
  v102 = a1;
  v94 = a3;
  v91 = a5;
  v101 = a7;
  v98 = a4;
  memset(v120, 0, sizeof(v120));
  memset(v121, 0, sizeof(v121));
  v14 = &v95;
  v95 = 0LL;
  v97 = 0LL;
  v100 = (unsigned int *)v120;
  v99 = (struct DXGALLOCATION **)v121;
  v103 = &v97;
  v104 = &v95;
  if ( !a3 || !a5 )
  {
    v17 = a5;
    v18 = 1;
    if ( a5 >= 0x41 )
    {
      v19 = 4LL * a5;
      if ( !is_mul_ok(a5, 4uLL) )
        v19 = -1LL;
      v95 = (unsigned int *)operator new[](v19, 0x4B677844u, PagedPool);
      v20 = 8LL * a5;
      if ( !is_mul_ok(a5, 8uLL) )
        v20 = -1LL;
      v21 = (struct DXGALLOCATION **)operator new[](v20, 0x4B677844u, PagedPool);
      v97 = v21;
      if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v14 = (unsigned int **)v95) != 0LL && v21 )
      {
        v99 = v21;
        v100 = v95;
      }
      else
      {
        v22 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v22 + 24) = 10081LL;
        WdLogEvent5_WdEvent(v22);
        v9 = 64;
        v91 = 64;
      }
    }
    v23 = (char *)a1 + 208;
    if ( a1 != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)a1 + 27) == KeGetCurrentThread() )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14, v12);
      *(_QWORD *)(v24 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *((_DWORD *)a1 + 58);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockSharedEx((char *)a1 + 208, 0LL);
    }
    v28 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *((_DWORD *)a1 + 64) )
    {
      v29 = *((_QWORD *)a1 + 30);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
        && (v30 & 0x2000) == 0
        && (v30 & 0x1F) != 0 )
      {
        v31 = v30 & 0x1F;
        if ( (_BYTE)v31 == 3 )
        {
          v33 = *(_QWORD *)(v29 + 16LL * (unsigned int)v28);
          v96 = v33;
          if ( v33 )
            _InterlockedIncrement64((volatile signed __int64 *)(v33 + 64));
LABEL_30:
          ExReleasePushLockSharedEx(v23, 0LL);
          KeLeaveCriticalRegion();
          if ( !v33 )
          {
            v36 = WdLogNewEntry5_WdError(v35, v34);
            v16 = -1073741811;
            *(_QWORD *)(v36 + 24) = v11;
            *(_QWORD *)(v36 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v36);
LABEL_138:
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v96);
            goto LABEL_139;
          }
          v37 = *(_QWORD *)(v33 + 16);
          v105 = v33;
          v38 = *(_QWORD *)(v37 + 16);
          if ( *(int *)(v38 + 2328) >= 0x2000 || *(_BYTE *)(v38 + 2628) )
            v39 = *((_DWORD *)DXGGLOBAL::GetGlobal(v38, v34) + 311);
          else
            v39 = 0;
          v40 = *(_DWORD *)(v33 + 432) == 2;
          v41 = *(struct _KEVENT **)(v33 + 16);
          v106 = v39;
          if ( v40 )
          {
            if ( KeReadStateEvent(v41 + 5) )
              goto LABEL_44;
            v42 = v41 + 5;
          }
          else
          {
            if ( KeReadStateEvent(v41 + 4) )
              goto LABEL_44;
            v42 = v41 + 4;
          }
          KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
LABEL_44:
          KeEnterCriticalRegion();
          if ( v39 )
          {
            if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v33 + 144, 0LL) )
              goto LABEL_55;
            KeLeaveCriticalRegion();
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 104LL));
            v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v33 + 16) + 16LL));
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v33 + 144));
          }
          else
          {
            if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v33 + 136), 0) )
              goto LABEL_55;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 104LL));
            v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v33 + 16) + 16LL));
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v43, &EventBlockThread, v45, 40);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v33 + 136), 1u);
          }
          if ( v44 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v33 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 104LL, 0LL);
          KeLeaveCriticalRegion();
LABEL_55:
          v46 = *(_QWORD *)(v33 + 16);
          v47 = *(volatile signed __int64 **)(v46 + 16);
          v110 = (struct DXGADAPTER *)v47;
          v111 = 0;
          v112 = 0LL;
          if ( v47 )
          {
            _InterlockedIncrement64(v47 + 3);
            v46 = *(_QWORD *)(v33 + 16);
            v109 = -1LL;
          }
          v48 = *(volatile signed __int64 **)(v33 + 1848);
          v49 = v48;
          if ( !v48 )
            v49 = *(volatile signed __int64 **)(v46 + 16);
          v115 = (struct DXGADAPTER *)v49;
          v116 = 0;
          v117 = 0LL;
          if ( v49 )
          {
            _InterlockedIncrement64(v49 + 3);
            v46 = *(_QWORD *)(v33 + 16);
            v48 = *(volatile signed __int64 **)(v33 + 1848);
            v114 = -1LL;
          }
          v118 = v33;
          if ( v48 == *(volatile signed __int64 **)(v46 + 16) || !v48 )
          {
            v119 = 0;
          }
          else
          {
            v119 = 1;
            COREACCESS::AcquireShared((COREACCESS *)v113, 0LL);
            v46 = *((unsigned int *)v115 + 50);
            if ( (_DWORD)v46 != 1 )
              goto LABEL_64;
          }
          if ( v111 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v49);
            v50[5] = v108;
            v50[3] = 275LL;
            v50[4] = 4LL;
            v50[6] = 0LL;
            v50[7] = 0LL;
            WdLogEvent5_WdCriticalError(v50);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v110 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v110 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v51, &EventBlockThread, v52, 72);
              KeWaitForSingleObject((char *)v110 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v110, 0LL);
          }
          v112 = 0LL;
          v111 = 1;
          if ( *(_DWORD *)(v118 + 576) == 1 )
          {
            v53 = *(_QWORD *)(v33 + 1848);
            if ( v53 )
            {
              v54 = *(_QWORD *)(v53 + 2696);
              v55 = *(_QWORD *)(v54 + 104);
              if ( !v55 || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v55, v33) >= 0 )
              {
                v56 = *(_QWORD *)(*(_QWORD *)(v54 + 16) + 316LL);
                v107[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
                v107[0] = v56;
                v107[2] = v33;
                Global = DXGGLOBAL::GetGlobal(v56, (__int64)v49);
                v93 = 0;
                v92 = (struct _KTHREAD **)((char *)Global + 1432);
                if ( Global == (struct DXGGLOBAL *)-1432LL )
                {
                  v59 = WdLogNewEntry5_WdAssertion(0LL, v57);
                  *(_QWORD *)(v59 + 24) = 762LL;
                  WdLogEvent5_WdAssertion(v59);
                }
                CurrentThread = KeGetCurrentThread();
                if ( v92[2] == CurrentThread )
                {
                  v61 = WdLogNewEntry5_WdAssertion(CurrentThread, v57);
                  *(_QWORD *)(v61 + 24) = 769LL;
                  WdLogEvent5_WdAssertion(v61);
                }
                if ( v93 )
                {
                  v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v57);
                  v62[5] = &v92;
                  v62[3] = 275LL;
                  v62[4] = 4LL;
                  v62[6] = 0LL;
                  v62[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v62);
                }
                v63 = v92;
                KeEnterCriticalRegion();
                if ( v63[2] == KeGetCurrentThread() )
                {
                  v66 = *((_DWORD *)v63 + 6);
                  if ( v66 <= 0 )
                  {
                    v67 = WdLogNewEntry5_WdAssertion(v65, v64);
                    *(_QWORD *)(v67 + 24) = 661LL;
                    WdLogEvent5_WdAssertion(v67);
                    v66 = *((_DWORD *)v63 + 6);
                  }
                  v18 = v66 + 1;
                }
                else
                {
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v63, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v69 = *((_DWORD *)v63 + 7);
                      if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v65, &EventBlockThread, v68, v69);
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)v63 + 1);
                    ExAcquirePushLockExclusiveEx(v63, 0LL);
                  }
                  if ( v63[2] )
                  {
                    v70 = WdLogNewEntry5_WdAssertion(v65, v64);
                    *(_QWORD *)(v70 + 24) = 685LL;
                    WdLogEvent5_WdAssertion(v70);
                  }
                  if ( *((_DWORD *)v63 + 6) )
                  {
                    v71 = WdLogNewEntry5_WdAssertion(v65, v64);
                    *(_QWORD *)(v71 + 24) = 686LL;
                    WdLogEvent5_WdAssertion(v71);
                  }
                  v63[2] = KeGetCurrentThread();
                }
                *((_DWORD *)v63 + 6) = v18;
                v72 = (struct OUTPUTDUPL_MGR_INDIRECT **)((char *)Global + 1472);
                v93 = 1;
                for ( i = *v72; i != (struct OUTPUTDUPL_MGR_INDIRECT *)v72 && i; i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
                {
                  if ( lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_(i, v107) < 0 )
                  {
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v92);
                    goto LABEL_108;
                  }
                }
                if ( v93 )
                {
                  v84 = v92;
                  v93 = 0;
                  if ( v92[2] != KeGetCurrentThread() )
                  {
                    v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64);
                    v85[3] = 275LL;
                    v85[4] = 4LL;
                    v85[5] = v84;
                    v85[6] = 0LL;
                    v85[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v85);
                  }
                  v86 = *((_DWORD *)v84 + 6);
                  if ( v86 <= 0 )
                  {
                    v87 = WdLogNewEntry5_WdAssertion(v65, v64);
                    *(_QWORD *)(v87 + 24) = 705LL;
                    WdLogEvent5_WdAssertion(v87);
                    v86 = *((_DWORD *)v84 + 6);
                  }
                  v88 = v86 - 1;
                  *((_DWORD *)v84 + 6) = v88;
                  if ( !v88 )
                  {
                    v84[2] = 0LL;
                    ExReleasePushLockExclusiveEx(v84, 0LL);
                  }
                  KeLeaveCriticalRegion();
                }
              }
            }
LABEL_108:
            RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
            if ( RemoteOutputDuplMgr )
              OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, (struct DXGDEVICE *)v33);
            goto LABEL_110;
          }
          COREACCESS::Release((COREACCESS *)v108);
          if ( !v119 )
          {
LABEL_110:
            v75 = v115;
            if ( v115 )
            {
              if ( v116 )
              {
                COREACCESS::Release((COREACCESS *)v113);
                v75 = v115;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v75 + 2), v75);
            }
            v76 = v110;
            if ( v110 )
            {
              if ( v111 )
              {
                v111 = 0;
                v76 = v110;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v110 + 23) )
                {
                  DXGADAPTER::ReleaseCoreResource(v110, v112);
                  v76 = v110;
                }
                v112 = 0LL;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76 + 2), v76);
            }
            v77 = v98;
            while ( 1 )
            {
              v78 = v17;
              if ( v17 >= v9 )
                v78 = v9;
              v79 = DxgkDestroyAllocationInternal(
                      (struct _KTHREAD **)v102,
                      (struct DXGDEVICE *)v33,
                      v100,
                      v99,
                      v94,
                      (const unsigned int **)&v98,
                      v78,
                      a6,
                      (char *)v77,
                      v101,
                      a8);
              v83 = v79;
              if ( v79 < 0 )
                break;
              v9 = v91;
              v77 += v78;
              v17 -= v78;
              if ( !v17 )
              {
                v16 = 0;
                goto LABEL_137;
              }
            }
            v89 = WdLogNewEntry5_WdWarning(v81, v80, v82);
            *(_QWORD *)(v89 + 24) = v83;
            WdLogEvent5_WdWarning(v89);
            v16 = v83;
LABEL_137:
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
            goto LABEL_138;
          }
LABEL_64:
          COREACCESS::Release((COREACCESS *)v113);
          goto LABEL_110;
        }
        v32 = WdLogNewEntry5_WdError(((unsigned int)v11 >> 25) & 0x60, v31);
        *(_QWORD *)(v32 + 24) = 316LL;
        WdLogEvent5_WdError(v32);
      }
    }
    v33 = 0LL;
    v96 = 0LL;
    goto LABEL_30;
  }
  v15 = WdLogNewEntry5_WdWarning(&v95, v12, v13);
  v16 = -1073741811;
  *(_QWORD *)(v15 + 24) = v11;
  *(_QWORD *)(v15 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v15);
LABEL_139:
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v103);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v104);
  return v16;
}
