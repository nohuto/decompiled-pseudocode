/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C0279D70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01174F4 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PERESOURCE *Global; // rax
  __int64 v21; // rdx
  PVOID v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v27; // rdx
  struct DXGPROCESS *Current; // r15
  D3DKMT_HANDLE v29; // ecx
  __int64 v30; // rdx
  int v31; // r9d
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-60h] BYREF
  int v39; // [rsp+78h] [rbp-50h] BYREF
  __int64 v40; // [rsp+80h] [rbp-48h]
  char v41; // [rsp+88h] [rbp-40h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v42; // [rsp+D8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v44; // [rsp+E8h] [rbp+20h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2086LL);
  HandleInformation = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  Object = 0LL;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v10 = v6;
  if ( v6 == -1073741788 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v12);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v39);
    }
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdWarning(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v17);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v39);
    return (unsigned int)v10;
  }
  v42.hSyncObject = 0;
  v44 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle, v21);
  v22 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 192LL) - 5) <= 1 )
  {
    v26 = -1073741811;
LABEL_37:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_39;
  }
  v26 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v42.hSyncObject,
          0LL,
          0LL,
          0,
          &v44,
          0,
          DXGSYNCOBJECT::FlagsDefault);
  if ( v26 < 0 )
    goto LABEL_37;
  if ( bTracingEnabled )
  {
    v25 = v44 ? *((_QWORD *)v44 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v23, &EventOpenSyncObject, v24, v25, v42.hSyncObject, 0LL);
  }
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
  v27 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v27 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
  v27->hSyncObject = v42.hSyncObject;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, (__int64)v27, v24, v25);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v29 = (v42.hSyncObject >> 6) & 0xFFFFFF;
  if ( v29 < *((_DWORD *)Current + 64) )
  {
    v30 = *((_QWORD *)Current + 30);
    v31 = *(_DWORD *)(v30 + 16LL * v29 + 8);
    if ( ((v42.hSyncObject >> 25) & 0x60) == (v31 & 0x60) && (v31 & 0x1F) != 0 )
    {
      v32 = 2 * (((unsigned __int64)v42.hSyncObject >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v30 + 16 * (((unsigned __int64)v42.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion((v42.hSyncObject >> 25) & 0x60, v30);
        *(_QWORD *)(v33 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v33);
        v30 = *((_QWORD *)Current + 30);
      }
      *(_DWORD *)(v30 + 8 * v32 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
LABEL_39:
  ObfDereferenceObject(v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v34);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v39);
  return (unsigned int)v26;
}
