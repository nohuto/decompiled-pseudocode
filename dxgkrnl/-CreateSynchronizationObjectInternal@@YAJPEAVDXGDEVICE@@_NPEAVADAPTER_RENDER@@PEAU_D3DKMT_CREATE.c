__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        bool a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        DXGSYNCOBJECT **a7,
        struct DXGDEVICESYNCOBJECT **a8,
        struct DXGADAPTERSYNCOBJECT **a9)
{
  unsigned int v9; // edi
  __int64 v11; // r14
  DXGSYNCOBJECT **v13; // r12
  int *v14; // r15
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rbx
  struct DXGGLOBAL *v20; // rax
  unsigned int v21; // ebx
  DXGSYNCOBJECT *v22; // rdi
  __int64 v23; // r12
  DXGPROCESS *Current; // rax
  __int64 v25; // rdx
  __int64 v27; // rbx
  const wchar_t *v28; // r9
  int v29; // ecx
  unsigned int HostProcess; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  int SyncObject; // eax
  struct DXGDEVICESYNCOBJECT *v34; // r8
  __int64 v35; // rax
  __int64 *v36; // rbx
  int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v41[2]; // [rsp+70h] [rbp-10h]
  DXGSYNCOBJECT *v42; // [rsp+C0h] [rbp+40h] BYREF
  bool v43; // [rsp+C8h] [rbp+48h]
  __int64 v44; // [rsp+D0h] [rbp+50h]

  v44 = a3;
  v43 = a2;
  v9 = 0;
  v11 = a3;
  if ( a1 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a3 + 16)) )
  {
    WdLogSingleEntry1(1LL, 36LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice == NULL || pAdapter->IsCoreResourceSharedOwner()",
      36LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = a7;
  v14 = (int *)(a4 + 8);
  LODWORD(a7) = 0;
  v42 = 0LL;
  *v13 = 0LL;
  v15 = *(_DWORD *)(a4 + 12);
  if ( (v15 & 0x100) != 0 )
  {
    if ( *v14 == 4 )
    {
      if ( (v15 & 5) == 0 )
        goto LABEL_5;
      v27 = 53LL;
      WdLogSingleEntry1(2LL, 53LL);
      v28 = L"SignalByKmd cannot be used with CrossAdapter or Shared";
    }
    else
    {
      v27 = 48LL;
      WdLogSingleEntry1(2LL, 48LL);
      v28 = L"SignalByKmd can only be set for D3DDDI_CPU_NOTIFICATION objects";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v27, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
LABEL_5:
  v16 = *v14;
  if ( *v14 == 5 )
  {
    v9 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( v16 != 6 )
      goto LABEL_11;
    v9 = *(_DWORD *)(a4 + 48);
  }
  v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 288LL);
  if ( v17 == 1 )
  {
    v9 = 1;
  }
  else if ( v9 >= 1 << v17 )
  {
    v9 = (1 << v17) - 1;
  }
  if ( v16 == 6 )
    *(_DWORD *)(a4 + 12) = v15 | 0x17;
LABEL_11:
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global, 0);
  if ( LOBYTE(v40[2]) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v40, 0LL, 0LL);
  v19 = *(_QWORD *)v40;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v19 + 600), 1u);
  LOBYTE(v40[2]) = 1;
  v20 = DXGGLOBAL::GetGlobal();
  v21 = a5;
  LODWORD(v11) = DXGGLOBAL::CreateSyncObject(
                   (__int64)v20,
                   (struct ADAPTER_RENDER *)v11,
                   (struct DXGDEVICE *)a1,
                   v9,
                   a4 + 8,
                   a5,
                   v43,
                   0LL,
                   (__int64 *)&v42,
                   a8,
                   (unsigned int *)((unsigned __int64)&a7 & -(__int64)(a1 != 0)),
                   a9);
  if ( LOBYTE(v40[2]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
  if ( (int)v11 < 0 )
    return (unsigned int)v11;
  v22 = v42;
  *(_DWORD *)(a4 + 88) = (_DWORD)a7;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v22 + 20);
  *v13 = v22;
  if ( (*(_DWORD *)(a4 + 12) & 0x100) != 0 )
  {
    *((_DWORD *)v22 + 51) |= 0x20u;
    *((_DWORD *)v22 + 51) |= 0x10u;
  }
  v23 = *((_QWORD *)v22 + 11);
  Current = DXGPROCESS::GetCurrent();
  v25 = v44;
  if ( !*(_BYTE *)(*(_QWORD *)(v44 + 16) + 209LL) )
    return (unsigned int)v11;
  v29 = a6;
  if ( a6 )
  {
    *((_DWORD *)v22 + 71) |= 8u;
    *((_DWORD *)v22 + 21) = v29;
    return (unsigned int)v11;
  }
  if ( !a1 )
  {
    HostProcess = 0;
LABEL_36:
    if ( v23 )
      *(_QWORD *)(a4 + 16) = v23;
    v31 = *(_QWORD *)(v25 + 16) + 4472LL;
    *(_OWORD *)v40 = 0LL;
    *(_OWORD *)v41 = 0LL;
    if ( a1 )
      v32 = *(unsigned int *)(a1 + 472);
    else
      v32 = 0LL;
    SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(v31, HostProcess, v32, a4, v21, v40);
    v11 = SyncObject;
    if ( SyncObject >= 0 )
    {
      if ( (unsigned int)(*v14 - 5) <= 1 )
      {
        v34 = *a8;
        *((_DWORD *)v34 + 11) = v40[0];
        v35 = *(_QWORD *)&v40[2];
        *((_QWORD *)v34 + 6) = *(_QWORD *)&v40[2];
        if ( *v14 == 5 )
          *(_QWORD *)(a4 + 32) = v35;
        else
          *(_QWORD *)(a4 + 40) = v35;
        v36 = (__int64 *)((char *)v34 + 56);
        v37 = MapGuestFenceCpuVaToHost(v41[0], (void **)v34 + 7, (unsigned __int64 *)v34 + 10, (unsigned int *)v34 + 22);
        v11 = v37;
        if ( v37 >= 0 )
        {
          v38 = *v36;
          if ( *v14 == 5 )
            *(_QWORD *)(a4 + 24) = v38;
          else
            *(_QWORD *)(a4 + 32) = v38;
        }
        else
        {
          WdLogSingleEntry2(2LL, v37, 206LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
            v11,
            206LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v40[0] )
      {
        LODWORD(v11) = DXGSYNCOBJECT::SetHostHandle(v22, (unsigned int)a7, v40[0]);
      }
      if ( (*((_BYTE *)v22 + 204) & 1) != 0 )
      {
        v39 = v40[1];
        *((_DWORD *)v22 + 71) &= ~8u;
        *((_DWORD *)v22 + 21) = v39;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, SyncObject, 181LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateSyncObject failed, returning 0x%I64x",
        v11,
        181LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v11;
  }
  HostProcess = DXGPROCESS::GetHostProcess(Current);
  if ( HostProcess )
  {
    v25 = v44;
    goto LABEL_36;
  }
  WdLogSingleEntry1(2LL, -1073741823LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get host adapter process, returning 0x%I64x",
    -1073741823LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
