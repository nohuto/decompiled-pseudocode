/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007EC8
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C0042710 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C0121E38 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C0121EEC (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C003E644 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F9304 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLINTERRUPT2 a2,
        char a3,
        unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *v18; // r14
  struct DXGTHREAD *v19; // rax
  int v20; // r12d
  unsigned int *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v37; // eax
  signed __int64 v38; // rax
  __int64 v39; // rcx
  LARGE_INTEGER v40; // rbx
  struct _KDPC *v41; // r8
  struct _KTIMER *v42; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v44; // rax
  int v45; // eax
  struct DXGPROCESS *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v51; // rcx
  _QWORD *v52; // rax
  unsigned __int8 v53; // cl
  _QWORD *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rcx
  unsigned int i; // edx
  __int64 v59; // rcx
  unsigned int j; // r14d
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+3Ch] [rbp-9Dh]
  int v63; // [rsp+40h] [rbp-99h] BYREF
  __int64 v64; // [rsp+48h] [rbp-91h]
  char v65; // [rsp+50h] [rbp-89h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v67[4]; // [rsp+70h] [rbp-69h] BYREF
  char v68; // [rsp+80h] [rbp-59h]
  struct _KAPC_STATE v69; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v70[8]; // [rsp+B8h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF

  v63 = -1;
  InterruptState = a2.InterruptState;
  v64 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 5054LL);
  if ( !bTracingEnabled )
  {
LABEL_69:
    if ( a2.InterruptType != DXGK_INTERRUPT_CRTC_VSYNC )
      goto LABEL_9;
    goto LABEL_6;
  }
  if ( a2.InterruptType != DXGK_INTERRUPT_CRTC_VSYNC )
    goto LABEL_9;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qq_EtwWriteTransfer(v9, v8, v10, a4, InterruptState);
    goto LABEL_69;
  }
LABEL_6:
  if ( !a3 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3936, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)this + 990) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread);
      ExAcquirePushLockExclusiveEx((char *)this + 3936, 0LL);
    }
    *((_QWORD *)this + 493) = KeGetCurrentThread();
  }
LABEL_9:
  v12 = *((_QWORD *)this + 338);
  if ( !v12
    || (v13 = *(_QWORD *)(v12 + 624)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v12 + 616) + 8LL) + 72LL))(v13)
    && *((struct _KTHREAD **)this + 339) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)this + 10) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread);
      KeWaitForSingleObject((char *)this + 240, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 33), 1u);
  }
  if ( *((int *)this + 649) >= 2700 && *((_QWORD *)this + 167) )
  {
    v67[1] = InterruptState;
    v67[0] = a2.InterruptType;
    v67[2] = a4;
    _InterlockedIncrement((volatile signed __int32 *)this + 1091);
    CurrentIrql = KeGetCurrentIrql();
    v18 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v18 = Current) != 0LL) )
      v20 = *((_DWORD *)Current + 8);
    else
      v20 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v70, this);
    v24 = (*((int (__fastcall **)(_QWORD, _DWORD *))this + 167))(*((_QWORD *)this + 34), v67);
    if ( v70[0] )
      KeUnstackDetachProcess(&ApcState);
    v23 = KeGetCurrentIrql();
    v25 = CurrentIrql == (unsigned __int8)v23;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1091);
    CurrentIrql = KeGetCurrentIrql();
    v18 = 0LL;
    if ( CurrentIrql < 2u && (v19 = DXGTHREAD::GetCurrent(), (v18 = v19) != 0LL) )
      v20 = *((_DWORD *)v19 + 8);
    else
      v20 = 0;
    v68 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v44 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v44 + 24) = 2238LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v21 = (unsigned int *)DXGGLOBAL::m_pGlobal;
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 387) )
      {
        v45 = *((_DWORD *)this + 87);
        if ( (v45 & 0x20) == 0 && (v45 & 4) == 0 )
        {
          v46 = DXGPROCESS::GetCurrent();
          if ( v46 )
          {
            if ( !*((_BYTE *)v46 + 344) && !*((_BYTE *)v46 + 345) )
            {
              v48 = v21[387];
              if ( (_DWORD)v48 == 2 || (_DWORD)v48 == 1 && *((_BYTE *)v46 + 477) )
              {
                Global = DXGGLOBAL::GetGlobal(v48, v47);
                SessionData = DXGGLOBAL::GetSessionData(Global);
                if ( SessionData )
                {
                  v51 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2337);
                  if ( v51 )
                  {
                    KeStackAttachProcess(v51, &v69);
                    v68 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v24 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 100))(*((_QWORD *)this + 34), a2);
    if ( v68 )
      KeUnstackDetachProcess(&v69);
    v25 = CurrentIrql == KeGetCurrentIrql();
  }
  if ( !v25 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v52[3] = 275LL;
    v52[4] = 16LL;
    v52[5] = this;
    v52[6] = CurrentIrql;
    v53 = KeGetCurrentIrql();
    v52[7] = v53;
    WdLogEvent5_WdCriticalError(v52);
  }
  if ( v18 && *((_DWORD *)v18 + 8) != v20 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v54[3] = 275LL;
    v54[4] = 38LL;
    v54[5] = *((int *)v18 + 8);
    v54[6] = v20;
    v54[7] = 0LL;
    WdLogEvent5_WdCriticalError(v54);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1091);
  if ( (_DWORD)v24 != -1073741823 && (_DWORD)v24 != -1073741822 && (_DWORD)v24 )
  {
    v55 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v55 + 24) = v24;
    WdLogEvent5_WdError(v55);
  }
  v26 = *((_QWORD *)this + 338);
  if ( !v26
    || (v27 = *(_QWORD *)(v26 + 624)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v26 + 616) + 8LL) + 72LL))(v27)
    && *((struct _KTHREAD **)this + 339) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 33));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v24 < 0 )
    {
LABEL_49:
      *((_QWORD *)this + 493) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 3936, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_50;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 496, &LockHandle);
    v30 = a4;
    if ( (*((_DWORD *)this + 642) & 0x10) == 0 )
    {
      **((_DWORD **)this + 486) = InterruptState;
LABEL_44:
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
      {
        if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
        {
          if ( (_DWORD)v30 == -3 )
          {
            for ( i = 0; i < *((_DWORD *)this + 362); *(_QWORD *)(*((_QWORD *)this + 497) + 8 * v59) = 0LL )
              v59 = i++;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 497) + 8 * v30) = 0LL;
          }
        }
        else
        {
          **((_QWORD **)this + 497) = 0LL;
        }
      }
      v31 = *((_QWORD *)this + 337);
      if ( v31 && InterruptState == DXGK_INTERRUPT_ENABLE && *(_QWORD *)(v31 + 912) )
        *(_BYTE *)(v31 + 856) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v32) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v32);
      }
      goto LABEL_49;
    }
    if ( a4 == -3 )
    {
      v56 = 0;
      if ( !*((_DWORD *)this + 362) )
        goto LABEL_44;
      do
      {
        v57 = v56++;
        *(_DWORD *)(*((_QWORD *)this + 486) + 4 * v57) = InterruptState;
      }
      while ( v56 < *((_DWORD *)this + 362) );
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 486) + 4LL * a4) = InterruptState;
    }
    v30 = a4;
    goto LABEL_44;
  }
LABEL_50:
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28);
  v34 = InterruptState;
  v33[3] = (int)v24;
  v33[4] = a2.InterruptType;
  v33[5] = InterruptState;
  if ( (int)v24 >= 0 && InterruptState == DXGK_INTERRUPT_DISABLE && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( a4 == -3 || (v37 = a4, (*((_DWORD *)this + 642) & 0x10) == 0) )
      v37 = 0;
    v34 = *((_QWORD *)this + 498);
    v38 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v34 + 8LL * v37),
            *(_QWORD *)(v34 + 8LL * v37),
            *(_QWORD *)(v34 + 8LL * v37));
    v39 = *((unsigned int *)this + 998);
    if ( v38 )
      v40.QuadPart = -(v38 * v39);
    else
      v40.QuadPart = (unsigned int)(-166667 * v39);
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( (*((_DWORD *)this + 642) & 0x10) == 0 )
    {
      v41 = (struct _KDPC *)*((_QWORD *)this + 488);
      v42 = (struct _KTIMER *)*((_QWORD *)this + 487);
LABEL_65:
      KeSetTimer(v42, v40, v41);
      goto LABEL_52;
    }
    if ( a4 != -3 )
    {
      v41 = (struct _KDPC *)(((unsigned __int64)a4 << 6) + *((_QWORD *)this + 488));
      v42 = (struct _KTIMER *)(*((_QWORD *)this + 487) + ((unsigned __int64)a4 << 6));
      goto LABEL_65;
    }
    for ( j = 0; j < *((_DWORD *)this + 362); ++j )
      KeSetTimer(
        (PKTIMER)(*((_QWORD *)this + 487) + ((unsigned __int64)j << 6)),
        v40,
        (PKDPC)(((unsigned __int64)j << 6) + *((_QWORD *)this + 488)));
  }
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v34);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit);
  return (unsigned int)v24;
}
