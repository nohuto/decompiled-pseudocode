/*
 * XREFs of DxgkOpenResourceFromNtHandleInternal @ 0x1C0184A40
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0184A20 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037DB50 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0022A58 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0185A34 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01A314C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C034AFB8 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C034BA24 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandleInternal(ULONG64 a1, __int64 a2, __int64 a3)
{
  KPROCESSOR_MODE v5; // si
  struct DXGPROCESS *Current; // rdx
  ULONG64 v7; // rax
  BOOL v8; // r13d
  HANDLE v9; // r12
  NTSTATUS v10; // eax
  int v11; // r14d
  DXGKEYEDMUTEX **v12; // rsi
  DXGKEYEDMUTEX *v13; // rcx
  _DWORD *v14; // rdx
  _DWORD *v15; // rdx
  struct DXGPROCESS *v16; // r12
  DXGPUSHLOCK *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // r14
  struct DXGGLOBAL *Global; // rax
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGGLOBAL *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  unsigned int v38; // edi
  DXGGLOBAL *v39; // rax
  unsigned int v40; // [rsp+60h] [rbp-108h] BYREF
  int v41; // [rsp+68h] [rbp-100h] BYREF
  __int64 v42; // [rsp+70h] [rbp-F8h]
  char v43; // [rsp+78h] [rbp-F0h]
  PVOID Object; // [rsp+80h] [rbp-E8h] BYREF
  char v45; // [rsp+88h] [rbp-E0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-D8h] BYREF
  PVOID v47; // [rsp+98h] [rbp-D0h]
  char v48[8]; // [rsp+A0h] [rbp-C8h] BYREF
  char v49; // [rsp+A8h] [rbp-C0h]
  struct DXGPROCESS *v50; // [rsp+B0h] [rbp-B8h]
  _DWORD *v51; // [rsp+B8h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+C0h] [rbp-A8h]
  __int128 v53; // [rsp+D0h] [rbp-98h]
  __int128 v54; // [rsp+E0h] [rbp-88h]
  __int128 v55; // [rsp+F0h] [rbp-78h]
  __int128 v56; // [rsp+100h] [rbp-68h]
  void *v57[2]; // [rsp+110h] [rbp-58h]
  unsigned int v58[18]; // [rsp+120h] [rbp-48h]
  KPROCESSOR_MODE v59; // [rsp+180h] [rbp+18h]
  unsigned int v60; // [rsp+188h] [rbp+20h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2076);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2076);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v59 = v5;
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v50 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(3LL, 11711LL);
LABEL_47:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v41);
    return 3221225485LL;
  }
  if ( v5 )
  {
    v7 = a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v7;
    v53 = *(_OWORD *)(v7 + 16);
    v54 = *(_OWORD *)(v7 + 32);
    v55 = *(_OWORD *)(v7 + 48);
    v56 = *(_OWORD *)(v7 + 64);
    *(_OWORD *)v57 = *(_OWORD *)(v7 + 80);
    *(_QWORD *)v58 = *(_QWORD *)(v7 + 96);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a1;
    v53 = *(_OWORD *)(a1 + 16);
    v54 = *(_OWORD *)(a1 + 32);
    v55 = *(_OWORD *)(a1 + 48);
    v56 = *(_OWORD *)(a1 + 64);
    *(_OWORD *)v57 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v58 = *(_QWORD *)(a1 + 96);
  }
  v8 = 0;
  v51 = (_DWORD *)((char *)Current + 424);
  if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
  {
    v25 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&Object,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v27 = ((unsigned int)a2 >> 6) & 0xFFFFFF;
    if ( v27 < *(_DWORD *)(v25 + 16) )
    {
      v28 = *(_DWORD *)(*(_QWORD *)v25 + 16LL * v27 + 8);
      if ( (unsigned int)a2 >> 30 == ((v28 >> 5) & 3) && (v28 & 0x2000) == 0 )
      {
        v29 = v28 & 0x1F;
        if ( v29 )
        {
          if ( v29 == 4 )
          {
            v12 = *(DXGKEYEDMUTEX ***)(*(_QWORD *)v25 + 16LL * v27);
            goto LABEL_44;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v12 = 0LL;
LABEL_44:
    v47 = v12;
    if ( v12 )
    {
      if ( v45 )
      {
        _InterlockedDecrement((volatile signed __int32 *)Object + 4);
        ExReleasePushLockSharedEx(Object, 0LL);
        KeLeaveCriticalRegion();
      }
      goto LABEL_12;
    }
    WdLogSingleEntry1(3LL, a2);
    if ( v45 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Object + 4);
      ExReleasePushLockSharedEx(Object, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_47;
  }
  Object = 0LL;
  v9 = Handle[1];
  v10 = ObReferenceObjectByHandle(
          Handle[1],
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          v5,
          &Object,
          &HandleInformation);
  v11 = v10;
  v12 = (DXGKEYEDMUTEX **)Object;
  v47 = Object;
  if ( v10 != -1073741788 )
  {
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(3LL, v9, v10);
LABEL_31:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v41);
      }
      return (unsigned int)v11;
    }
    v8 = (HandleInformation.GrantedAccess & 1) == 0;
LABEL_12:
    v60 = 0;
    v40 = 0;
    v13 = v12[3];
    if ( !v13 || (v11 = DXGKEYEDMUTEX::Open(v13, &v60, v57[1], v58[0], 1), v11 >= 0) )
    {
      if ( v12[4] )
      {
        v34 = DXGGLOBAL::GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, v34, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
        v11 = DXGSYNCOBJECT::Open(v12[4], 0LL, 0LL, 0LL, &v40, 0LL, 0LL, 0, 0LL, 0, DXGDEVICE::DestroyFlagsDefault);
        if ( v11 < 0 )
        {
          if ( v49 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
          goto LABEL_28;
        }
        if ( v49 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
      }
      if ( v59 )
      {
        v14 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v14 = (_DWORD *)MmUserProbeAddress;
        *v14 = v60;
        v15 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v15 = (_DWORD *)MmUserProbeAddress;
        *v15 = v40;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v60;
        *(_DWORD *)(a1 + 100) = v40;
      }
      v11 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, 0LL, v12, v8);
      if ( v11 >= 0 )
      {
        v16 = v50;
        v17 = (struct DXGPROCESS *)((char *)v50 + 248);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v50 + 248));
        v18 = (v40 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v18 < *((_DWORD *)v16 + 74) )
        {
          v19 = *((_QWORD *)v16 + 35);
          if ( ((v40 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
            && (*(_DWORD *)(v19 + 16 * v18 + 8) & 0x1F) != 0 )
          {
            v20 = 2 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v19 + 16 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 217LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                217LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v16 + 35) + 8 * v20 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v17 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v17, 0LL);
        KeLeaveCriticalRegion();
        v21 = v60;
        if ( v60 )
        {
          DXGPUSHLOCK::AcquireExclusive(v17);
          v35 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v35 < *((_DWORD *)v16 + 74) )
          {
            v36 = *((_QWORD *)v16 + 35);
            if ( (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
              && (*(_DWORD *)(v36 + 16 * v35 + 8) & 0x1F) != 0 )
            {
              v37 = 2 * ((v21 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v36 + 8 * v37 + 8) & 0x2000) == 0 )
              {
                WdLogSingleEntry1(1LL, 217LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                  217LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *(_DWORD *)(*((_QWORD *)v16 + 35) + 8 * v37 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)v17 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v17, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_28:
    if ( v11 < 0 )
    {
      if ( v60 )
        DXGKEYEDMUTEX::DestroyLocal(v60);
      v38 = v40;
      if ( v40 )
      {
        v39 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v39, v12[4], v38);
      }
    }
    if ( (*v51 & 0x10) == 0 )
      ObfDereferenceObject(v12);
    goto LABEL_31;
  }
  WdLogSingleEntry2(3LL, v9, -1073741788LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v32) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v41);
  }
  return 3221225508LL;
}
