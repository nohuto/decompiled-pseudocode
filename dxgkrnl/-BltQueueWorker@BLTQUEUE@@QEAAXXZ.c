void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  char v2; // r12
  __int64 v3; // r14
  char *v4; // rbx
  ULONG v5; // r13d
  struct _KEVENT *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  LARGE_INTEGER v17; // rax
  __int64 v18; // r10
  __int64 v19; // r9
  LONGLONG v20; // r8
  unsigned __int64 i; // rbx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 j; // rbx
  unsigned __int64 v31; // rcx
  __int128 v32; // xmm1
  __int64 v33; // xmm0_8
  LARGE_INTEGER PerformanceCounter; // rax
  bool v35; // zf
  int v36; // eax
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  int v45; // r9d
  int v46; // r9d
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // eax
  BLTQUEUE *v52; // rcx
  const wchar_t *v53; // r9
  PVOID v54; // rsi
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  struct DXGADAPTER *v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // r9d
  KPROCESSOR_MODE WaitMode[8]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-D8h]
  __int128 v64; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66[3]; // [rsp+78h] [rbp-88h] BYREF
  int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+A8h] [rbp-58h]
  char v69[8]; // [rsp+B0h] [rbp-50h] BYREF
  DXGPUSHLOCK *v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+C0h] [rbp-40h]
  int v72; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v73; // [rsp+E0h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v75[144]; // [rsp+110h] [rbp+10h] BYREF
  PVOID Object[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v77; // [rsp+1B0h] [rbp+B0h]
  __int128 v78; // [rsp+1C0h] [rbp+C0h]
  __int128 v79; // [rsp+1D0h] [rbp+D0h]
  __int128 v80; // [rsp+1E0h] [rbp+E0h]
  __int128 v81; // [rsp+1F0h] [rbp+F0h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+200h] [rbp+100h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&v73, 0, sizeof(v73));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v73, SynchronizationEvent, 0);
  *((_QWORD *)this + 77) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 496), 0, 0);
  v2 = 0;
  v64 = 0LL;
  v3 = 0LL;
LABEL_2:
  v4 = (char *)this + 520;
  while ( 1 )
  {
    *(_OWORD *)Object = 0LL;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)this + 145, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    v5 = 2;
    Object[0] = v4;
    if ( (v64 & 1) != 0 )
      v6 = (struct _KEVENT *)*((_QWORD *)&v64 + 1);
    else
      v6 = &v73;
    Object[1] = v6;
    if ( (v64 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0LL, (unsigned int)((v64 & 2) == 0) + 1);
    if ( (*((_DWORD *)this + 238) & 2) != 0 )
    {
      if ( this != (BLTQUEUE *)-2864LL && *((struct _KTHREAD **)this + 359) == KeGetCurrentThread() )
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
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 2864, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v37 = *((_DWORD *)this + 722);
          if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"g", v8, v37);
        }
        ExAcquirePushLockSharedEx((char *)this + 2864, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)this + 720);
      v9 = *((_QWORD *)this + 364);
      if ( *(_QWORD *)(v9 + 48) && !*(_BYTE *)(v9 + 56) && *(_BYTE *)(v9 + 57) == 1 )
      {
        v5 = 3;
        *(_QWORD *)&v77 = *(_QWORD *)v9;
      }
      if ( *(_QWORD *)(v9 + 112) && !*(_BYTE *)(v9 + 120) && *(_BYTE *)(v9 + 121) == 1 )
      {
        v38 = v5++;
        Object[v38] = *(PVOID *)(v9 + 64);
      }
      if ( *(_QWORD *)(v9 + 176) && !*(_BYTE *)(v9 + 184) && *(_BYTE *)(v9 + 185) == 1 )
      {
        v39 = v5++;
        Object[v39] = *(PVOID *)(v9 + 128);
      }
      if ( *(_QWORD *)(v9 + 240) && !*(_BYTE *)(v9 + 248) && *(_BYTE *)(v9 + 249) == 1 )
      {
        v40 = v5++;
        Object[v40] = *(PVOID *)(v9 + 192);
      }
      if ( *(_QWORD *)(v9 + 304) && !*(_BYTE *)(v9 + 312) && *(_BYTE *)(v9 + 313) == 1 )
      {
        v41 = v5++;
        Object[v41] = *(PVOID *)(v9 + 256);
      }
      if ( *(_QWORD *)(v9 + 368) && !*(_BYTE *)(v9 + 376) && *(_BYTE *)(v9 + 377) == 1 )
      {
        v42 = v5++;
        Object[v42] = *(PVOID *)(v9 + 320);
      }
      if ( *(_QWORD *)(v9 + 432) && !*(_BYTE *)(v9 + 440) && *(_BYTE *)(v9 + 441) == 1 )
      {
        v43 = v5++;
        Object[v43] = *(PVOID *)(v9 + 384);
      }
      if ( *(_QWORD *)(v9 + 496) && !*(_BYTE *)(v9 + 504) && *(_BYTE *)(v9 + 505) == 1 )
      {
        v44 = v5++;
        Object[v44] = *(PVOID *)(v9 + 448);
      }
      _InterlockedDecrement((volatile signed __int32 *)this + 720);
      ExReleasePushLockSharedEx((char *)this + 2864, 0LL);
      KeLeaveCriticalRegion();
      if ( v5 > 2 )
      {
        v2 = 0;
      }
      else
      {
        v2 = 1;
        v10 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
        v11 = v5;
        v12 = v5 + 1;
        Object[v11] = v10;
        Object[v12] = (PVOID)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
        v5 = v12 + 1;
      }
      if ( v5 > 0xC )
      {
        WdLogSingleEntry1(1LL, 2123LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nObjects <= NumWaitBlocks", 2123LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( this != (BLTQUEUE *)-408LL && *((struct _KTHREAD **)this + 52) == KeGetCurrentThread() )
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
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 408, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v45 = *((_DWORD *)this + 108);
          if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v45);
        }
        ExAcquirePushLockExclusiveEx((char *)this + 408, 0LL);
      }
      *((_QWORD *)this + 52) = KeGetCurrentThread();
      v67 = 2;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 2864, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v46 = *((_DWORD *)this + 722);
          if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v46);
        }
        ExAcquirePushLockSharedEx((char *)this + 2864, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)this + 720);
      v68 = 1;
      PerformanceFrequency.QuadPart = 0LL;
      v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v18 = *((_QWORD *)this + 58);
      if ( v18 > 0 )
      {
        v19 = *((_QWORD *)this + 57);
        if ( v19 > 0 && v17.QuadPart > v19 )
        {
          v20 = 10000000 * ((v17.QuadPart - v19) % v18 - v18);
          if ( PerformanceFrequency.QuadPart == 10000000 )
            v3 = v20 / 10000000;
          else
            v3 = v20 / PerformanceFrequency.QuadPart;
        }
      }
      for ( i = 0LL; i < 0x200; i += 64LL )
      {
        v22 = *((_QWORD *)this + 364);
        if ( *(_QWORD *)(i + v22 + 48) && !*(_BYTE *)(i + v22 + 56) && *(_BYTE *)(i + v22 + 57) == 1 )
        {
          v47 = *(_QWORD *)(i + v22 + 32);
          v48 = 0LL;
          v49 = *(_QWORD *)(i + v22);
          v50 = v3 + v47;
          if ( v50 <= 0 )
            v48 = v50;
          ExSetTimer(v49, v48, 0LL, 0LL, *(_QWORD *)WaitMode, *(_QWORD *)Alertable);
        }
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16), v3);
      _InterlockedDecrement((volatile signed __int32 *)this + 720);
      v3 = 0LL;
      ExReleasePushLockSharedEx((char *)this + 2864, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)this + 52) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 408, 0LL);
      KeLeaveCriticalRegion();
      v4 = (char *)this + 520;
    }
    v23 = KeWaitForMultipleObjects(v5, Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v24 = v23;
    v25 = 0LL;
    v64 = 0LL;
    if ( v23 )
    {
      if ( v23 == 1 )
      {
        v26 = 1;
      }
      else if ( v2 )
      {
        if ( v23 == 2 )
        {
          v26 = 2;
        }
        else
        {
          if ( v23 != 3 )
            goto LABEL_121;
          v26 = 3;
        }
      }
      else
      {
        if ( (unsigned int)(v23 - 2) > 8 )
        {
LABEL_121:
          v26 = (v23 != 257) + 5;
          goto LABEL_45;
        }
        v26 = 4;
        v25 = v24;
      }
    }
    else
    {
      v26 = 0;
    }
LABEL_45:
    if ( v26 == 2 )
    {
      if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
      {
        BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
      }
      else
      {
        BLTQUEUE::ProcessBltQueue(this, 1LL, &v64);
        if ( !*((_DWORD *)this + 99) && (v64 & 3) == 0 && ++*((_DWORD *)this + 100) > 0xAu )
          BLTQUEUE::StopVSync(this, 0LL, 8LL);
      }
      if ( this != (BLTQUEUE *)-2864LL && *((struct _KTHREAD **)this + 359) == KeGetCurrentThread() )
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
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 2864, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v61 = *((_DWORD *)this + 722);
          if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v28, (const EVENT_DESCRIPTOR *)"g", v29, v61);
        }
        ExAcquirePushLockSharedEx((char *)this + 2864, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)this + 720);
      v72 = 1;
      for ( j = 0LL; j < 0x200; j += 64LL )
      {
        v31 = j + *((_QWORD *)this + 364);
        if ( *(_QWORD *)(v31 + 48) )
        {
          if ( *(_BYTE *)(v31 + 56) == 1 )
          {
            *(_QWORD *)(v31 + 48) = 0LL;
            LOBYTE(v27) = 1;
            *(_BYTE *)(j + *((_QWORD *)this + 364) + 56) = 0;
            ExDeleteTimer(*(_QWORD *)(j + *((_QWORD *)this + 364)), v27, 0LL, 0LL);
          }
          else
          {
            *(_BYTE *)(v31 + 57) = 1;
          }
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)this + 720);
      ExReleasePushLockSharedEx((char *)this + 2864, 0LL);
      KeLeaveCriticalRegion();
      v4 = (char *)this + 520;
    }
    else
    {
      switch ( v26 )
      {
        case 0:
          v32 = *(_OWORD *)((char *)this + 584);
          *(_OWORD *)((char *)this + 792) = *(_OWORD *)((char *)this + 568);
          v33 = *((_QWORD *)this + 75);
          *(_OWORD *)((char *)this + 808) = v32;
          *((_QWORD *)this + 103) = v33;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v35 = *((_BYTE *)this + 568) == 0;
          *((LARGE_INTEGER *)this + 98) = PerformanceCounter;
          if ( !v35 )
          {
            KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 73) + 40LL) + 56LL));
            *((_DWORD *)this + 238) |= 1u;
            *((_BYTE *)this + 568) = 0;
LABEL_127:
            BLTQUEUE::FinishCommand(this, 0);
            goto LABEL_65;
          }
          if ( *((_BYTE *)this + 569) )
          {
            BLTQUEUE::ResetWorker(this);
          }
          else if ( *((_BYTE *)this + 572) )
          {
            BLTQUEUE::ResetInternal(this);
            *((_BYTE *)this + 572) = 0;
            BLTQUEUE::FinishCommand(this, 0);
            PsTerminateSystemThread(0);
          }
          else if ( *((_BYTE *)this + 570) )
          {
            BLTQUEUE::UpdateDisplayModeInfoWorker(this);
          }
          else if ( *((_BYTE *)this + 571) )
          {
            v36 = *((_DWORD *)this + 99) + 1;
            *((_DWORD *)this + 100) = 0;
            *((_DWORD *)this + 99) = v36;
            BLTQUEUE::StartVSync(this, 0LL, 5LL);
            *((_BYTE *)this + 571) = 0;
          }
          else
          {
            if ( *((_BYTE *)this + 576) )
            {
              BLTQUEUE::StopVSync(this, 0LL, 9LL);
              BLTQUEUE::RecreateVsyncSource((__int64)this, 0, 9);
              *((_BYTE *)this + 576) = 0;
              goto LABEL_127;
            }
            if ( *((_BYTE *)this + 577) )
            {
              BLTQUEUE::StopVSync(this, 0LL, 15LL);
              BLTQUEUE::RecreateVsyncSource((__int64)this, 0, 15);
              *((_BYTE *)this + 577) = 0;
              goto LABEL_127;
            }
          }
LABEL_65:
          if ( *((_BYTE *)this + 575) )
          {
            BLTQUEUE::DiscardPendingPresent(this);
            *(_QWORD *)((char *)this + 484) = 0LL;
            *((_BYTE *)this + 575) = 0;
            BLTQUEUE::FinishCommand(this, 0);
          }
          else
          {
            BLTQUEUE::ProcessBltQueue(this, 0LL, &v64);
          }
          break;
        case 1:
          BLTQUEUE::ProcessBltQueue(this, 2LL, &v64);
          continue;
        case 3:
          v51 = *((_DWORD *)this + 34);
          if ( v51 == 1 )
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
          }
          else if ( v51 == 3 )
          {
            BLTQUEUE::StopVSync(this, 0LL, 3LL);
            BLTQUEUE::RecreateVsyncSource((__int64)this, 1, 3);
            BLTQUEUE::StartVSync(this, 0LL, 3LL);
            BLTQUEUE::LogRemoteVsyncTimeout(v52);
          }
          else
          {
            WdLogSingleEntry1(1LL, *((int *)this + 34));
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Not expecting Vsync TDR for type 0x%I64x",
              *((int *)this + 34),
              0LL,
              0LL,
              0LL,
              0LL);
          }
          continue;
        case 4:
          v54 = Object[v25];
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v69, (struct _KTHREAD **)this + 358, 0);
          DXGPUSHLOCK::AcquireShared(v70);
          v55 = 0LL;
          v71 = 1;
          v56 = *((_QWORD *)this + 364);
          while ( *(PVOID *)v56 != v54 || *(_BYTE *)(v56 + 57) != 1 )
          {
            ++v55;
            v56 += 64LL;
            if ( v55 >= 8 )
            {
              v3 = 0LL;
              goto LABEL_149;
            }
          }
          v57 = v55 << 6;
          v58 = *(struct DXGADAPTER **)((v55 << 6) + *((_QWORD *)this + 364) + 16);
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v75, v58, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v75, 0LL) < 0 )
          {
            v3 = 0LL;
          }
          else
          {
            v59 = *((_QWORD *)this + 364);
            v66[0] = (unsigned int)(*((_DWORD *)this + 714) + 1);
            v60 = *((_QWORD *)v58 + 366);
            v3 = 0LL;
            if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v60 + 736)
                                                                                                 + 8LL)
                                                                                     + 656LL))(
                   1LL,
                   v57 + v59 + 8,
                   0LL,
                   v66) < 0 )
            {
              WdLogSingleEntry1(2LL, v55);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to signal pending dod periodic frame notification id: %lu",
                v55,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 364) + v57 + 40) = v66[0];
            }
          }
          *(_BYTE *)(*((_QWORD *)this + 364) + v57 + 57) = 0;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v75);
LABEL_149:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
          goto LABEL_2;
        case 5:
          WdLogSingleEntry1(2LL, this);
          v53 = L"BLTQUEUE 0x%I64x : worker thread alerted";
          goto LABEL_137;
        default:
          WdLogSingleEntry1(2LL, this);
          v53 = L"BLTQUEUE 0x%I64x : Received invalid WaitStatus";
LABEL_137:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v53, (__int64)this, 0LL, 0LL, 0LL, 0LL);
          continue;
      }
    }
  }
}
