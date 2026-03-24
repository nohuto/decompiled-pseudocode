/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C012A160
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244A20 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01296D4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0290DE0 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0291758 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  char CurrentThreadPreviousMode; // al
  KPROCESSOR_MODE v5; // r12
  ULONG64 v6; // rax
  HANDLE v7; // r14
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  BOOL v13; // r14d
  DXGSYNCOBJECT **v14; // r15
  DXGKEYEDMUTEX *v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGPROCESS *Current; // r14
  unsigned int v21; // ecx
  __int64 v22; // rdx
  int v23; // r8d
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  PERESOURCE *Global; // rax
  __int64 v39; // rdx
  struct DXGPROCESS *v40; // r13
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned int v47; // edi
  PERESOURCE *v48; // rax
  int v49; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-D0h]
  char v51; // [rsp+70h] [rbp-C8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v53[8]; // [rsp+80h] [rbp-B8h] BYREF
  char v54; // [rsp+88h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-A8h]
  __int128 v56; // [rsp+A0h] [rbp-98h]
  __int128 v57; // [rsp+B0h] [rbp-88h]
  __int128 v58; // [rsp+C0h] [rbp-78h]
  __int128 v59; // [rsp+D0h] [rbp-68h]
  void *v60[2]; // [rsp+E0h] [rbp-58h]
  unsigned int v61[18]; // [rsp+F0h] [rbp-48h]
  unsigned int v62; // [rsp+148h] [rbp+10h] BYREF
  unsigned int v63; // [rsp+150h] [rbp+18h] BYREF
  PVOID Object; // [rsp+158h] [rbp+20h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2076);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2076LL);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v5 = CurrentThreadPreviousMode == 1;
  HandleInformation = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v6 = a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v6;
    v56 = *(_OWORD *)(v6 + 16);
    v57 = *(_OWORD *)(v6 + 32);
    v58 = *(_OWORD *)(v6 + 48);
    v59 = *(_OWORD *)(v6 + 64);
    *(_OWORD *)v60 = *(_OWORD *)(v6 + 80);
    *(_QWORD *)v61 = *(_QWORD *)(v6 + 96);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)v60 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v61 = *(_QWORD *)(a1 + 96);
  }
  Object = 0LL;
  v7 = Handle[1];
  v8 = ObReferenceObjectByHandle(
         Handle[1],
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         v5,
         &Object,
         &HandleInformation);
  v12 = v8;
  if ( v8 != -1073741788 )
  {
    if ( v8 < 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v37 + 24) = v7;
      *(_QWORD *)(v37 + 32) = v12;
      WdLogEvent5_WdWarning(v37);
LABEL_27:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v29);
      if ( v51 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v49);
      }
      return (unsigned int)v12;
    }
    v13 = (HandleInformation.GrantedAccess & 1) == 0;
    v62 = 0;
    v63 = 0;
    v14 = (DXGSYNCOBJECT **)Object;
    v15 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
    if ( !v15 || (LODWORD(v12) = DXGKEYEDMUTEX::Open(v15, &v62, v60[1], v61[0], 1), (int)v12 >= 0) )
    {
      if ( v14[4] )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v15, v9);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v53, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v53, v39);
        LODWORD(v12) = DXGSYNCOBJECT::Open(
                         v14[4],
                         0LL,
                         0LL,
                         0LL,
                         &v63,
                         0LL,
                         0LL,
                         0,
                         0LL,
                         0,
                         DXGSYNCOBJECT::FlagsDefault);
        if ( (int)v12 < 0 )
        {
          if ( v54 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
          goto LABEL_25;
        }
        if ( v54 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
      }
      if ( v5 )
      {
        v16 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = v62;
        v17 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *v17 = v63;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v62;
        *(_DWORD *)(a1 + 100) = v63;
      }
      LODWORD(v12) = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       a1,
                       0LL,
                       (struct _EX_RUNDOWN_REF *)v14,
                       v13);
      if ( (int)v12 >= 0 )
      {
        Current = DXGPROCESS::GetCurrent((__int64)v15, v9, v18, v19);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v21 = (v63 >> 6) & 0xFFFFFF;
        if ( v21 < *((_DWORD *)Current + 64) )
        {
          v22 = *((_QWORD *)Current + 30);
          v23 = *(_DWORD *)(v22 + 16LL * v21 + 8);
          if ( ((v63 >> 25) & 0x60) == (v23 & 0x60) && (v23 & 0x1F) != 0 )
          {
            v24 = 2 * (((unsigned __int64)v63 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v22 + 16 * (((unsigned __int64)v63 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v25 = WdLogNewEntry5_WdAssertion((v63 >> 25) & 0x60, v22);
              *(_QWORD *)(v25 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v25);
              v22 = *((_QWORD *)Current + 30);
            }
            *(_DWORD *)(v22 + 8 * v24 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
        v28 = v62;
        if ( v62 )
        {
          v40 = DXGPROCESS::GetCurrent((__int64)v15, v9, v26, v27);
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v40 + 208));
          v41 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v41 < *((_DWORD *)v40 + 64) )
          {
            v42 = *((_QWORD *)v40 + 30);
            v43 = *(_DWORD *)(v42 + 16 * v41 + 8);
            v44 = ((unsigned int)v28 >> 25) & 0x60;
            if ( (((unsigned int)v28 >> 25) & 0x60) == (v43 & 0x60) && (v43 & 0x1F) != 0 )
            {
              v45 = 2 * ((v28 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v42 + 8 * v45 + 8) & 0x2000) == 0 )
              {
                v46 = WdLogNewEntry5_WdAssertion(v44, v42);
                *(_QWORD *)(v46 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v46);
                v42 = *((_QWORD *)v40 + 30);
              }
              *(_DWORD *)(v42 + 8 * v45 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)v40 + 27) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v40 + 208, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_25:
    if ( (int)v12 < 0 )
    {
      if ( v62 )
        DXGKEYEDMUTEX::DestroyLocal(v62);
      v47 = v63;
      if ( v63 )
      {
        v48 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v15, v9);
        DXGGLOBAL::DestroySyncObject(v48, v14[4], v47);
      }
    }
    ObfDereferenceObject(v14);
    goto LABEL_27;
  }
  v33 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  *(_QWORD *)(v33 + 24) = v7;
  *(_QWORD *)(v33 + 32) = -1073741788LL;
  WdLogEvent5_WdWarning(v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v34);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v49);
  return 3221225508LL;
}
