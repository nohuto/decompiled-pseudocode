__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGGLOBAL *Global; // rax
  PVOID v14; // r12
  __int64 v15; // r8
  int v16; // r14d
  __int64 v17; // r9
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v18; // rdx
  struct DXGPROCESS *Current; // r15
  D3DKMT_HANDLE v20; // ecx
  __int64 v21; // r9
  int v22; // r8d
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-60h] BYREF
  int v28; // [rsp+78h] [rbp-50h] BYREF
  __int64 v29; // [rsp+80h] [rbp-48h]
  char v30; // [rsp+88h] [rbp-40h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v31; // [rsp+D8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v33; // [rsp+E8h] [rbp+20h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2086);
  HandleInformation = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  Object = 0LL;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v7 = v6;
  if ( v6 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, v5, -1073741788LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v28);
    }
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(3LL, v5, v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v28);
    return v7;
  }
  v31.hSyncObject = 0;
  v33 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle);
  v14 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 200LL) - 5) <= 1 )
  {
    v16 = -1073741811;
LABEL_37:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_39;
  }
  v16 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v31.hSyncObject,
          0LL,
          0LL,
          0,
          &v33,
          0,
          DXGDEVICE::DestroyFlagsDefault);
  if ( v16 < 0 )
    goto LABEL_37;
  if ( bTracingEnabled )
  {
    v17 = v33 ? *((_QWORD *)v33 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventOpenSyncObject,
        v15,
        v17,
        v31.hSyncObject,
        0LL);
  }
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
  v18 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v18 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
  v18->hSyncObject = v31.hSyncObject;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v20 = (v31.hSyncObject >> 6) & 0xFFFFFF;
  if ( v20 < *((_DWORD *)Current + 74) )
  {
    v21 = *((_QWORD *)Current + 35);
    v22 = *(_DWORD *)(v21 + 16LL * v20 + 8);
    if ( ((v31.hSyncObject >> 25) & 0x60) == (v22 & 0x60) && (v22 & 0x1F) != 0 )
    {
      v23 = 2 * (((unsigned __int64)v31.hSyncObject >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v21 + 16 * (((unsigned __int64)v31.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
      *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v23 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
LABEL_39:
  ObfDereferenceObject(v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v28);
  return (unsigned int)v16;
}
