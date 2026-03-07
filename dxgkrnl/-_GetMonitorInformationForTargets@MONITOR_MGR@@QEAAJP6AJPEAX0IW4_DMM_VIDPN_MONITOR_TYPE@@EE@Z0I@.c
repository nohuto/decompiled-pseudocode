__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        MONITOR_MGR *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        unsigned int a4)
{
  __int64 v5; // rax
  unsigned int NextVideoPresentTarget; // ebx
  char v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _KTHREAD **v12; // rbp
  int *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  bool v22; // bp
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  MONITOR_MGR *v29; // rax
  char *v30; // rcx
  char *v31; // rdi
  char *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // esi
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  int v46; // eax
  int MonitorInstance; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  __int64 v52; // rbx
  __int64 v53; // rbx
  int v54; // [rsp+20h] [rbp-98h]
  int v55; // [rsp+28h] [rbp-90h]
  struct DXGMONITOR *v56; // [rsp+50h] [rbp-68h] BYREF
  DXGFASTMUTEX *v57; // [rsp+58h] [rbp-60h] BYREF
  __int64 v58[3]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v59; // [rsp+C0h] [rbp+8h] BYREF
  int (__high *v60)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // [rsp+C8h] [rbp+10h]
  void *v61; // [rsp+D0h] [rbp+18h]
  unsigned int v62; // [rsp+D8h] [rbp+20h] BYREF

  v62 = a4;
  v61 = a3;
  v60 = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)this + 3);
  v62 = -1;
  NextVideoPresentTarget = DmmGetNextVideoPresentTarget(*(void *const *)(v5 + 16), 0xFFFFFFFF, &v62);
  if ( (NextVideoPresentTarget & 0x80000000) != 0 )
    return NextVideoPresentTarget;
  while ( 1 )
  {
    v7 = 0;
    v8 = v62;
    v9 = 0;
    v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      goto LABEL_115;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v11 = *(_QWORD *)(v10 + 2920);
    if ( !v11 )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_115:
      NextVideoPresentTarget = -1071775742;
      goto LABEL_116;
    }
    v12 = *(struct _KTHREAD ***)(v11 + 104);
    if ( !v12 )
    {
      WdLogSingleEntry1(2LL, v10);
      NextVideoPresentTarget = -1071774923;
      goto LABEL_116;
    }
    v13 = (int *)(v12 + 5);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 5));
    _InterlockedIncrement((volatile signed __int32 *)v12[15] + 18);
    v14 = (__int64)v12[15];
    v15 = *(_QWORD *)(v14 + 24);
    v58[0] = v14;
    if ( v15 == v14 + 24 )
      break;
    v16 = v15 - 8;
    if ( !v16 )
      break;
    while ( *(_DWORD *)(v16 + 24) != (_DWORD)v8 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 != v14 + 24 )
      {
        v16 = v17 - 8;
        if ( v16 )
          continue;
      }
      goto LABEL_109;
    }
    if ( !*(_QWORD *)(v16 + 40) )
      WdLogSingleEntry0(1LL);
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
    if ( !*(_QWORD *)(v18 + 8) )
      WdLogSingleEntry0(1LL);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL);
    if ( *(_DWORD *)(v19 + 412) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v19 + 2920) + 16LL) + 2820LL) < 1105 )
    {
      v22 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v16 + 128) != -1 )
        goto LABEL_85;
      v20 = *(_DWORD *)(v16 + 408);
      if ( v20 == -1 )
      {
        v21 = *(_DWORD *)(v16 + 80);
        if ( v21 < 14 && v21 >= 4
          || v21 && (v48 = v21 - 1) != 0 && (v49 = v48 - 1) != 0 && (v50 = v49 - 1) != 0 && v50 != 11 )
        {
          v22 = 0;
          goto LABEL_26;
        }
LABEL_85:
        v22 = 1;
        goto LABEL_26;
      }
      v22 = v20 == 1;
    }
LABEL_26:
    if ( v14 )
    {
      v23 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 72));
      if ( v23 )
      {
        if ( v23 < 0 )
        {
          v52 = v23;
          WdLogSingleEntry1(2LL, v23);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v52,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v14 != -64 )
      {
        (**(void (__fastcall ***)(__int64, __int64))(v14 + 64))(v14 + 64, 1LL);
      }
    }
    if ( *((struct _KTHREAD **)v13 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v13, 0LL, 0LL);
    if ( v13[8] <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    v24 = v13[8]-- == 1;
    if ( v24 )
    {
      *((_QWORD *)v13 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    v25 = v62;
    if ( v62 == -1 )
      WdLogSingleEntry0(1LL);
    v57 = (MONITOR_MGR *)((char *)this + 80);
    if ( this == (MONITOR_MGR *)-80LL )
      WdLogSingleEntry0(1LL);
    DXGFASTMUTEX::Acquire((MONITOR_MGR *)((char *)this + 80));
    v29 = (MONITOR_MGR *)*((_QWORD *)this + 5);
    v30 = (char *)this + 40;
    if ( v29 == (MONITOR_MGR *)((char *)this + 40) )
      goto LABEL_46;
    v31 = (char *)v29 - 152;
    if ( !v29 )
      v31 = 0LL;
    if ( !v31 )
    {
LABEL_46:
      v33 = WdLogNewEntry5_WdTrace(v30, v26, v27, v28);
      *(_QWORD *)(v33 + 24) = v25;
      *(_QWORD *)(v33 + 32) = this;
      MUTEX_LOCK::~MUTEX_LOCK(&v57);
    }
    else
    {
      while ( *((_DWORD *)v31 + 45) != (_DWORD)v25 )
      {
        v32 = (char *)*((_QWORD *)v31 + 19);
        if ( v32 != v30 )
        {
          v31 = v32 - 152;
          if ( !v32 )
            v31 = 0LL;
          if ( v31 )
            continue;
        }
        goto LABEL_46;
      }
      v56 = (struct DXGMONITOR *)v31;
      if ( this == (MONITOR_MGR *)-80LL )
        WdLogSingleEntry0(1LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 10);
      v9 = *((_DWORD *)v31 + 78);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v62, 1, &v56);
      NextVideoPresentTarget = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( MonitorInstance != -1073741275 )
        {
          WdLogSingleEntry2(2LL, v62, this);
          return NextVideoPresentTarget;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    LOBYTE(v55) = v7;
    LOBYTE(v54) = v22;
    v34 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))v60)(
            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
            v61,
            v62,
            v9,
            v54,
            v55);
    v35 = v62;
    NextVideoPresentTarget = v34;
    if ( v62 == -1 || v34 < 0 )
      return NextVideoPresentTarget;
    v36 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    v62 = -1;
    if ( !v36 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      return (unsigned int)-1071775742;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v36 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v36 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v37 = *(_QWORD *)(v36 + 2920);
    if ( !v37 )
    {
      WdLogSingleEntry1(2LL, v36);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v36,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1071775742;
    }
    v38 = *(_QWORD *)(v37 + 104);
    if ( !v38 )
    {
      WdLogSingleEntry1(2LL, v36);
      return (unsigned int)-1071774923;
    }
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v38 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v38 + 120) + 72LL));
    v39 = *(_QWORD *)(v38 + 120);
    v59 = v39;
    v40 = (_QWORD *)(v39 + 24);
    if ( v35 == -1 )
    {
      if ( (_QWORD *)*v40 == v40 )
        v44 = 0LL;
      else
        v44 = *v40 - 8LL;
    }
    else
    {
      if ( (_QWORD *)*v40 == v40 || (v41 = *v40 - 8LL, *v40 == 8LL) )
      {
LABEL_105:
        auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v59);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v38 + 40));
        return (unsigned int)-1071774971;
      }
      while ( *(_DWORD *)(v41 + 24) != v35 )
      {
        v42 = *(_QWORD **)(v41 + 8);
        if ( v42 != v40 )
        {
          v41 = (__int64)(v42 - 1);
          if ( v41 )
            continue;
        }
        goto LABEL_105;
      }
      v43 = *(_QWORD *)(v41 + 8);
      v44 = v43 - 8;
      if ( v43 == v39 + 24 )
        v44 = 0LL;
    }
    if ( !v44 )
    {
      auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v59);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v38 + 40));
      return (unsigned int)-1073741275;
    }
    v62 = *(_DWORD *)(v44 + 24);
    if ( v39 )
    {
      v45 = (void (__fastcall ***)(_QWORD, __int64))(v39 + 64);
      v46 = _InterlockedDecrement((volatile signed __int32 *)(v39 + 72));
      if ( v46 )
      {
        if ( v46 < 0 )
        {
          v53 = v46;
          WdLogSingleEntry1(2LL, v46);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v53,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v45 )
      {
        (**v45)(v45, 1LL);
      }
    }
    if ( *(struct _KTHREAD **)(v38 + 64) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v38 + 40, 0LL, 0LL);
    if ( *(int *)(v38 + 72) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    v24 = (*(_DWORD *)(v38 + 72))-- == 1;
    if ( v24 )
    {
      *(_QWORD *)(v38 + 64) = 0LL;
      ExReleasePushLockExclusiveEx(v38 + 48, 0LL);
    }
    KeLeaveCriticalRegion();
  }
LABEL_109:
  if ( !v12[1] )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry2(3LL, v8, *((_QWORD *)v12[1] + 2));
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(v58);
  DXGFASTMUTEX::Release(v12 + 5);
  NextVideoPresentTarget = -1071774971;
LABEL_116:
  WdLogSingleEntry3(2LL, v62, this, (int)NextVideoPresentTarget);
  return NextVideoPresentTarget;
}
