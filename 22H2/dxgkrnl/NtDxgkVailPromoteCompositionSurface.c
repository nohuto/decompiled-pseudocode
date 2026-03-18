/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C0365210
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C00108B0 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0012F7C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025738 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0048768 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005AB60 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C007D1E0 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02E1A3C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
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
  struct FlipManagerObject *v14; // r13
  struct _KPROCESS *v15; // r12
  DXGSESSIONMGR *v16; // rbx
  __int64 v17; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v20; // eax
  unsigned __int8 v21; // r15
  struct IPairedSurfaceObject *v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // [rsp+50h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-C0h] BYREF
  int v29; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-B0h]
  char v31; // [rsp+70h] [rbp-A8h]
  struct IPairedSurfaceObject *v32; // [rsp+78h] [rbp-A0h] BYREF
  struct FlipManagerObject *v33; // [rsp+80h] [rbp-98h] BYREF
  void *v34; // [rsp+88h] [rbp-90h] BYREF
  _BYTE v35[16]; // [rsp+98h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF
  char v37; // [rsp+D8h] [rbp-40h]

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2215;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2215);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2215);
  v33 = 0LL;
  v34 = 0LL;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_47:
      if ( v9 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v29);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_47;
    }
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v35, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  v10 = (*((_DWORD *)Current + 106) >> 2) & 1;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) && v10 )
  {
    v27 = 0LL;
    LODWORD(v11) = DxgkGetSessionTokenManager(&v27);
    v12 = v27;
    if ( (int)v11 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
      LODWORD(v11) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v13, &v33);
      v14 = v33;
      if ( (int)v11 >= 0 )
      {
        v32 = 0LL;
        v15 = 0LL;
        Object = 0LL;
        v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
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
          v37 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v15);
          v20 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(v14, &v32, &v34);
          v11 = v20;
          if ( v20 >= 0 )
          {
            v21 = 0;
            v22 = v32;
            do
            {
              v23 = CompositionSurfaceObject::Pair(v14, v22);
              v11 = v23;
              if ( v23 == -1073740528 )
              {
                if ( v21 )
                {
                  LODWORD(v11) = -1073741823;
                  WdLogSingleEntry1(3LL, -1073741823LL);
                }
                else
                {
                  WdLogSingleEntry1(3LL, 1480LL);
                  if ( (int)CPushLock::AcquireLockExclusive((struct FlipManagerObject *)((char *)v14 + 48)) >= 0 )
                  {
                    CCompositionSurface::UnPair((struct FlipManagerObject *)((char *)v14 + 40));
                    CPushLock::ReleaseLock((struct FlipManagerObject *)((char *)v14 + 48));
                  }
                  v21 = 1;
                }
              }
              else if ( v23 < 0 )
              {
                WdLogSingleEntry2(2LL, v23, v21);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fail on CompositionSurfaceObject::Pair. Returning 0x%I64x",
                  v11,
                  v21,
                  0LL,
                  0LL,
                  0LL);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v22 + 16LL))(v22);
              }
            }
            while ( (_DWORD)v11 == -1073740528 );
            v32 = 0LL;
            v12 = v27;
            v15 = (struct _KPROCESS *)Object;
          }
          else
          {
            WdLogSingleEntry1(2LL, v20);
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
          if ( v37 )
          {
            KeUnstackDetachProcess(&ApcState);
            v37 = 0;
          }
        }
        if ( v15 )
        {
          ObfDereferenceObject(v15);
          Object = 0LL;
        }
        FlipManagerDwmReleaseFlipManagerObject(v14);
        v33 = 0LL;
      }
    }
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v27 = 0LL;
    }
  }
  else
  {
    LODWORD(v11) = -1073741790;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v34;
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v29);
  return (unsigned int)v11;
}
