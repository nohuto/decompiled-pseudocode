/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C0360780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AB8 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0047708 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C0059F40 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C007C5B0 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DCCAC (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r8
  DxgkCompositionObject *v14; // r13
  struct _KPROCESS *v15; // r12
  DXGSESSIONMGR *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v23; // eax
  unsigned __int8 v24; // r15
  struct IPairedSurfaceObject *v25; // r12
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // [rsp+50h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-C0h] BYREF
  int v32; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-B0h]
  char v34; // [rsp+70h] [rbp-A8h]
  struct IPairedSurfaceObject *v35; // [rsp+78h] [rbp-A0h] BYREF
  DxgkCompositionObject *v36; // [rsp+80h] [rbp-98h] BYREF
  void *v37; // [rsp+88h] [rbp-90h] BYREF
  _BYTE v38[16]; // [rsp+98h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF
  char v40; // [rsp+D8h] [rbp-40h]

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2215;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2215);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2215);
  v36 = 0LL;
  v37 = 0LL;
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid parameters. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_47:
      if ( v9 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v32);
    }
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_47;
    }
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v38, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  v10 = (*((_DWORD *)Current + 106) >> 2) & 1;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) && v10 )
  {
    v30 = 0LL;
    LODWORD(v11) = DxgkGetSessionTokenManager(&v30);
    v12 = v30;
    if ( (int)v11 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      LODWORD(v11) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v13, &v36);
      v14 = v36;
      if ( (int)v11 >= 0 )
      {
        v35 = 0LL;
        v15 = 0LL;
        Object = 0LL;
        v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v19, v20);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v16, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
        {
          LODWORD(v11) = DXGSESSIONDATA::ReferenceDwmProcess(
                           SessionDataForSpecifiedSession,
                           (struct _EPROCESS **)&Object);
          v15 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v11) = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Fail to reference Dwm process. Returning 0x%I64x",
            -1073741790LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v11 >= 0 )
        {
          v40 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v15);
          v23 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(v14, &v35, &v37);
          v11 = v23;
          if ( v23 >= 0 )
          {
            v24 = 0;
            v25 = v35;
            do
            {
              v26 = CompositionSurfaceObject::Pair(v14, v25);
              v11 = v26;
              if ( v26 == -1073740528 )
              {
                if ( v24 )
                {
                  LODWORD(v11) = -1073741823;
                  WdLogSingleEntry1(3LL, -1073741823LL);
                }
                else
                {
                  WdLogSingleEntry1(3LL, 1480LL);
                  if ( (int)CPushLock::AcquireLockExclusive((DxgkCompositionObject *)((char *)v14 + 48)) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v14 + 40));
                    CPushLock::ReleaseLock((DxgkCompositionObject *)((char *)v14 + 48));
                  }
                  v24 = 1;
                }
              }
              else if ( v26 < 0 )
              {
                WdLogSingleEntry2(2LL, v26, v24);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fail on CompositionSurfaceObject::Pair. Returning 0x%I64x",
                  v11,
                  v24,
                  0LL,
                  0LL,
                  0LL);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v25 + 16LL))(v25);
              }
            }
            while ( (_DWORD)v11 == -1073740528 );
            v35 = 0LL;
            v12 = v30;
            v15 = (struct _KPROCESS *)Object;
          }
          else
          {
            WdLogSingleEntry1(2LL, v23);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail on DxgkCreateRemoteCompositionSurfaceObjectForPairing. Returning 0x%I64x",
              v11,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( v40 )
          {
            KeUnstackDetachProcess(&ApcState);
            v40 = 0;
          }
        }
        if ( v15 )
        {
          ObfDereferenceObject(v15);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v14);
        v36 = 0LL;
      }
    }
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v30 = 0LL;
    }
  }
  else
  {
    LODWORD(v11) = -1073741790;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v37;
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v32);
  return (unsigned int)v11;
}
