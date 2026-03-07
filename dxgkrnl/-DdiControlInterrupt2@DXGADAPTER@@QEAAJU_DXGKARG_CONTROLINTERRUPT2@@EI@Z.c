__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLINTERRUPT2 a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // r12
  unsigned int v6; // esi
  unsigned int v7; // r13d
  __int64 v9; // r15
  unsigned int v10; // eax
  int v11; // esi
  _QWORD *v12; // rdi
  LARGE_INTEGER v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  KIRQL v25; // al
  __int64 v26; // rsi
  struct DXGTHREAD *v27; // rdi
  struct DXGTHREAD *v28; // rax
  __int64 v29; // r12
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  volatile signed __int64 *v36; // rdx
  signed __int64 v37; // rsi
  signed __int64 v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // r11
  unsigned int v45; // eax
  unsigned int v46; // eax
  LARGE_INTEGER v47; // rdi
  struct _KDPC *v48; // r8
  struct _KTIMER *v49; // rcx
  unsigned int i; // edi
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r8
  __int64 v54; // r9
  struct DXGTHREAD *v55; // rdi
  struct DXGTHREAD *Current; // rax
  int v57; // esi
  KIRQL v58; // al
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // eax
  struct DXGPROCESS *v66; // rax
  int v67; // ecx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v70; // rcx
  KIRQL v71; // al
  unsigned int j; // edx
  __int64 v73; // rcx
  unsigned int k; // edx
  __int64 v75; // rcx
  KIRQL CurrentIrql; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v78; // [rsp+70h] [rbp-98h] BYREF
  __int64 v79; // [rsp+78h] [rbp-90h]
  _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v81; // [rsp+88h] [rbp-80h] BYREF
  __int64 v82; // [rsp+90h] [rbp-78h]
  char v83; // [rsp+98h] [rbp-70h]
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v85[4]; // [rsp+B8h] [rbp-50h] BYREF
  char v86; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE v87; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v88[8]; // [rsp+100h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+0h] BYREF

  v4 = a3;
  v6 = a4;
  v7 = 0;
  v78 = (unsigned __int64)a2;
  v81 = -1;
  v82 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v83 = 1;
    v81 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5054LL);
  }
  else
  {
    v83 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry(&v81, 5054LL);
  v9 = SHIDWORD(v78);
  if ( (*((_DWORD *)this + 698) & 0x10) == 0 )
  {
    v10 = 0;
    goto LABEL_5;
  }
  if ( v6 != -3 )
  {
    v10 = v6;
LABEL_5:
    v11 = *(_DWORD *)(*((_QWORD *)this + 514) + 4LL * v10);
    v12 = (_QWORD *)(*((_QWORD *)this + 527) + 112LL * v10);
    PerformanceFrequency.QuadPart = 0LL;
    v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( HIDWORD(v78) )
    {
      if ( HIDWORD(v78) == 1 )
      {
        if ( !v11 )
        {
          v78 = 0LL;
          if ( (int)RtlULongLongMult(v13.QuadPart - *v12, 0x3E8uLL, &v78) < 0 )
          {
            v52 = 1000 * (v14 % v16) / v16;
            *((_QWORD *)&v17 + 1) = v14 % v16;
            v14 = 1000 * (v14 / v16);
            v18 = v14 + v52;
          }
          else if ( v16 == 10000000 )
          {
            v17 = v78 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
            v18 = v78 / 0x989680;
          }
          else
          {
            *((_QWORD *)&v17 + 1) = v78 % v16;
            v18 = v78 / v16;
          }
          v12[2] += v18;
LABEL_12:
          *v12 = v15;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
            McTemplateK0qxxx_EtwWriteTransfer(v14, DWORD2(v17), v18, v9, v12[2], v12[3], v12[4]);
        }
LABEL_14:
        v6 = a4;
        goto LABEL_15;
      }
      if ( HIDWORD(v78) != 2 || v11 != 1 )
        goto LABEL_14;
      v78 = 0LL;
      if ( (int)RtlULongLongMult(v13.QuadPart - *v12, 0x3E8uLL, &v78) < 0 )
      {
        v53 = 1000 * (v14 % v44) / v44;
        *((_QWORD *)&v17 + 1) = v14 % v44;
        v14 = 1000 * (v14 / v44);
        v18 = v14 + v53;
      }
      else if ( v44 == 10000000 )
      {
        v17 = v78 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
        v18 = v78 / 0x989680;
      }
      else
      {
        *((_QWORD *)&v17 + 1) = v78 % v44;
        v18 = v78 / v44;
      }
    }
    else
    {
      if ( (unsigned int)(v11 - 1) > 1 )
        goto LABEL_14;
      v78 = 0LL;
      if ( (int)RtlULongLongMult(v13.QuadPart - *v12, 0x3E8uLL, &v78) < 0 )
      {
        v51 = 1000 * (v14 % v43) / v43;
        *((_QWORD *)&v17 + 1) = v14 % v43;
        v14 = 1000 * (v14 / v43);
        v18 = v14 + v51;
      }
      else if ( v43 == 10000000 )
      {
        v17 = v78 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
        v18 = v78 / 0x989680;
      }
      else
      {
        *((_QWORD *)&v17 + 1) = v78 % v43;
        v18 = v78 / v43;
      }
      if ( v11 != 1 )
      {
        v12[4] += v18;
        goto LABEL_12;
      }
    }
    v12[3] += v18;
    goto LABEL_12;
  }
  for ( i = 0; i < *((_DWORD *)this + 418); ++i )
    VSYNC_TIME_STATS::VSyncStateChange(
      (VSYNC_TIME_STATS *)(*((_QWORD *)this + 527) + 112LL * i),
      *(enum _DXGK_CRTC_VSYNC_STATE *)(*((_QWORD *)this + 514) + 4LL * i),
      SHIDWORD(v78));
LABEL_15:
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v4 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 4160, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v54 = *((unsigned int *)this + 1046);
        if ( (_DWORD)v54 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, "g", v20, v54);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 4160, 0LL);
    }
    *((_QWORD *)this + 521) = KeGetCurrentThread();
  }
  v21 = *((_QWORD *)this + 366);
  if ( !v21
    || (v22 = *(_QWORD *)(v21 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v21 + 736) + 8LL) + 72LL))(v22)
    && *((struct _KTHREAD **)this + 367) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 248)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, "g", v24, 73LL);
      KeWaitForSingleObject((char *)this + 248, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 34), 1u);
  }
  if ( *((int *)this + 705) >= 2700 && *((_QWORD *)this + 174) )
  {
    v85[0] = a2.InterruptType;
    v85[1] = v9;
    v85[2] = v6;
    _InterlockedIncrement((volatile signed __int32 *)this + 1153);
    CurrentIrql = KeGetCurrentIrql();
    v55 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v55 = Current) != 0LL) )
      v57 = *((_DWORD *)Current + 12);
    else
      v57 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v88, this);
    v30 = (*((int (__fastcall **)(_QWORD, _DWORD *))this + 174))(*((_QWORD *)this + 35), v85);
    if ( v88[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v58 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v58);
    }
    if ( v55 && *((_DWORD *)v55 + 12) != v57 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v55 + 12), v57, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)this + 1153);
    if ( (_DWORD)v30 != -1073741823 && (_DWORD)v30 != -1073741822 )
    {
      if ( (_DWORD)v30 )
      {
        WdLogSingleEntry1(2LL, v30);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            goto LABEL_148;
        }
      }
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1153);
    v25 = KeGetCurrentIrql();
    v26 = v25;
    v27 = 0LL;
    if ( v25 < 2u && (v28 = DXGTHREAD::GetCurrent(), (v27 = v28) != 0LL) )
      LODWORD(v79) = *((_DWORD *)v28 + 12);
    else
      LODWORD(v79) = 0;
    v86 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2406LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v63,
              v62,
              v64,
              0,
              2,
              -1,
              (__int64)L"m_pGlobal != NULL",
              102,
              0,
              0,
              0,
              0);
        }
      }
      v29 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
      if ( *(_DWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 1684LL) )
      {
        v65 = *((_DWORD *)this + 109);
        if ( (v65 & 0x20) == 0 && (v65 & 4) == 0 )
        {
          v66 = DXGPROCESS::GetCurrent();
          if ( v66 )
          {
            if ( (*((_BYTE *)v66 + 424) & 1) == 0 && (*((_DWORD *)v66 + 106) & 2) == 0 )
            {
              v67 = *(_DWORD *)(v29 + 1684);
              if ( v67 == 2 || v67 == 1 && *((_BYTE *)v66 + 589) )
              {
                Global = DXGGLOBAL::GetGlobal();
                SessionData = DXGGLOBAL::GetSessionData(Global);
                if ( SessionData )
                {
                  v70 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2340);
                  if ( v70 )
                  {
                    KeStackAttachProcess(v70, &v87);
                    v86 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v30 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 111))(*((_QWORD *)this + 35), a2);
    if ( v86 )
      KeUnstackDetachProcess(&v87);
    if ( (_BYTE)v26 != KeGetCurrentIrql() )
    {
      v71 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v26, v71);
    }
    if ( v27 && *((_DWORD *)v27 + 12) != (_DWORD)v79 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v27 + 12), (int)v79, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)this + 1153);
    if ( (_DWORD)v30 )
    {
      if ( (_DWORD)v30 != -1073741823 && (_DWORD)v30 != -1073741822 )
      {
        WdLogSingleEntry1(2LL, v30);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
LABEL_148:
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v60,
              v59,
              v61,
              0,
              0,
              -1,
              (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
              v30,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  v31 = *((_QWORD *)this + 366);
  if ( !v31
    || (v32 = *(_QWORD *)(v31 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v31 + 736) + 8LL) + 72LL))(v32)
    && *((struct _KTHREAD **)this + 367) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 34));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v30 >= 0 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 524, &LockHandle);
      if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
      {
        if ( a4 == -3 )
        {
          for ( j = 0; j < *((_DWORD *)this + 418); *(_DWORD *)(*((_QWORD *)this + 514) + 4 * v73) = v9 )
            v73 = j++;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 514) + 4LL * a4) = v9;
        }
      }
      else
      {
        **((_DWORD **)this + 514) = v9;
      }
      if ( (_DWORD)v9 == 1 )
      {
        if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
        {
          if ( a4 == -3 )
          {
            for ( k = 0; k < *((_DWORD *)this + 418); *(_QWORD *)(*((_QWORD *)this + 525) + 8 * v75) = 0LL )
              v75 = k++;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 525) + 8LL * a4) = 0LL;
          }
        }
        else
        {
          **((_QWORD **)this + 525) = 0LL;
        }
      }
      v33 = *((_QWORD *)this + 365);
      if ( v33 && !(_DWORD)v9 && *(_QWORD *)(v33 + 1016) )
        *(_BYTE *)(v33 + 960) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_DWORD)v9 != 2 )
      {
        LOBYTE(v34) = (_DWORD)v9 == 0;
        PoNotifyVSyncChange(v34);
      }
    }
    *((_QWORD *)this + 521) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 4160, 0LL);
    KeLeaveCriticalRegion();
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdTrace();
  LOBYTE(v37) = 0;
  v35[3] = (int)v30;
  LODWORD(v38) = a2.InterruptType;
  v35[4] = a2.InterruptType;
  v35[5] = v9;
  if ( (int)v30 < 0 || (_DWORD)v9 != 1 || a2.InterruptType != DXGK_INTERRUPT_CRTC_VSYNC )
    goto LABEL_58;
  v39 = a4;
  if ( a4 == -3 || (v45 = a4, (*((_DWORD *)this + 698) & 0x10) == 0) )
    v45 = 0;
  v36 = (volatile signed __int64 *)(*((_QWORD *)this + 526) + 8LL * v45);
  v38 = *v36;
  v37 = _InterlockedCompareExchange64(v36, v38, v38);
  v46 = *((_DWORD *)this + 1056);
  if ( v37 )
    v47.QuadPart = -(v37 * v46);
  else
    v47.QuadPart = -166667 * v46;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  if ( (*((_DWORD *)this + 698) & 0x10) == 0 )
  {
    v48 = (struct _KDPC *)*((_QWORD *)this + 516);
    v49 = (struct _KTIMER *)*((_QWORD *)this + 515);
LABEL_88:
    KeSetTimer(v49, v47, v48);
    goto LABEL_58;
  }
  if ( a4 != -3 )
  {
    v48 = (struct _KDPC *)(((unsigned __int64)a4 << 6) + *((_QWORD *)this + 516));
    v49 = (struct _KTIMER *)(*((_QWORD *)this + 515) + ((unsigned __int64)a4 << 6));
    goto LABEL_88;
  }
  if ( !*((_DWORD *)this + 418) )
    goto LABEL_59;
  do
  {
    KeSetTimer(
      (PKTIMER)(*((_QWORD *)this + 515) + ((unsigned __int64)v7 << 6)),
      v47,
      (PKDPC)(((unsigned __int64)v7 << 6) + *((_QWORD *)this + 516)));
    ++v7;
  }
  while ( v7 < *((_DWORD *)this + 418) );
LABEL_58:
  v39 = a4;
LABEL_59:
  if ( bTracingEnabled
    && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0qqx_EtwWriteTransfer(v38, (_DWORD)v36, v39, v39, v9, v37);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81);
  if ( v83 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v81);
  return (unsigned int)v30;
}
