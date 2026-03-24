/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C02B9600
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00118B4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00170E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00266C4 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0040EA8 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C004D8F0 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0066624 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028CF00 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  struct DXGPROCESS *Current; // rbx
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct _KPROCESS *v15; // rdi
  DXGSESSIONMGR *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int8 v28; // r14
  struct IPairedSurfaceObject *v29; // r12
  DxgkCompositionObject *v30; // r15
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  DxgkCompositionObject *v40; // [rsp+20h] [rbp-88h] BYREF
  struct IPairedSurfaceObject *v41; // [rsp+28h] [rbp-80h] BYREF
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  void *v43; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF
  char v46; // [rsp+80h] [rbp-28h]

  v4 = (_QWORD *)a2;
  v40 = 0LL;
  v43 = 0LL;
  if ( a1 && a2 && (Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4)) != 0LL )
  {
    KeEnterCriticalRegion();
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    v7 = *((_BYTE *)Current + 346);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44, v8);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 104) && (v7 || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      LODWORD(v14) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v11, &v40);
      if ( (int)v14 >= 0 )
      {
        v41 = 0LL;
        v15 = 0LL;
        Object = 0LL;
        v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 102);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v16, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
        {
          LODWORD(v14) = DXGSESSIONDATA::ReferenceDwmProcess(
                           SessionDataForSpecifiedSession,
                           (struct _EPROCESS **)&Object);
          v15 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v14) = -1073741790;
          v23 = WdLogNewEntry5_WdError(v22, v21);
          *(_QWORD *)(v23 + 24) = -1073741790LL;
          WdLogEvent5_WdError(v23);
        }
        if ( (int)v14 >= 0 )
        {
          v46 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v15);
          v24 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(&v41, &v43);
          v14 = v24;
          if ( v24 >= 0 )
          {
            v28 = 0;
            v29 = v41;
            do
            {
              v30 = v40;
              v31 = CompositionSurfaceObject::Pair(v40, v29);
              v14 = v31;
              if ( v31 == -1073740528 )
              {
                if ( v28 )
                {
                  LODWORD(v14) = -1073741823;
                  v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
                  *(_QWORD *)(v36 + 24) = -1073741823LL;
                  WdLogEvent5_WdWarning(v36);
                }
                else
                {
                  v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
                  *(_QWORD *)(v35 + 24) = 1467LL;
                  WdLogEvent5_WdWarning(v35);
                  if ( (int)CPushLock::AcquireLockExclusive((DxgkCompositionObject *)((char *)v30 + 48)) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v30 + 40));
                    CPushLock::ReleaseLock((DxgkCompositionObject *)((char *)v30 + 48));
                  }
                  v28 = 1;
                }
              }
              else if ( v31 < 0 )
              {
                v37 = WdLogNewEntry5_WdError(v33, v32);
                *(_QWORD *)(v37 + 24) = v14;
                *(_QWORD *)(v37 + 32) = v28;
                WdLogEvent5_WdError(v37);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v29 + 16LL))(v29);
              }
            }
            while ( (_DWORD)v14 == -1073740528 );
            v41 = 0LL;
          }
          else
          {
            v27 = WdLogNewEntry5_WdError(v26, v25);
            *(_QWORD *)(v27 + 24) = v14;
            WdLogEvent5_WdError(v27);
          }
          if ( v46 )
          {
            KeUnstackDetachProcess(&ApcState);
            v46 = 0;
          }
        }
        if ( v15 )
        {
          ObfDereferenceObject(v15);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v40);
        v40 = 0LL;
      }
    }
    else
    {
      LODWORD(v14) = -1073741790;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *v4 = v43;
    KeLeaveCriticalRegion();
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(a1, a2);
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
  }
  return (unsigned int)v14;
}
