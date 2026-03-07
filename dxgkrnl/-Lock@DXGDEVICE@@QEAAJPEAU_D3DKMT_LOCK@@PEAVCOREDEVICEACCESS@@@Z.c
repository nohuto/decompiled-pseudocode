__int64 __fastcall DXGDEVICE::Lock(DXGDEVICE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  D3DKMT_HANDLE hAllocation; // eax
  __int64 v6; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax
  __int64 Value; // r8
  int v10; // r12d
  __int64 v11; // r14
  D3DKMT_HANDLE v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  struct _EX_RUNDOWN_REF *v24; // rdx
  DXGDEVICE *Count; // r9
  char v26; // r14
  char *v27; // rdi
  ULONG_PTR v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // ebx
  __int16 v32; // ax
  D3DKMT_HANDLE v33; // r12d
  __int64 v34; // r13
  __int16 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // r9
  D3DKMT_HANDLE v40; // esi
  unsigned int v41; // ecx
  __int64 v42; // r10
  int v43; // edx
  int v44; // eax
  char *v45; // rdx
  DXGDEVICE *v46; // r8
  struct _EX_RUNDOWN_REF *v47; // rdx
  struct DXGTHREAD *DxgThread; // rax
  unsigned int v49; // [rsp+28h] [rbp-90h]
  unsigned int v50; // [rsp+30h] [rbp-88h]
  struct DXGTHREAD *v51; // [rsp+50h] [rbp-68h] BYREF
  __int64 v52; // [rsp+58h] [rbp-60h]
  _D3DKMT_LOCK2 v53; // [rsp+60h] [rbp-58h] BYREF
  int i; // [rsp+C0h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+D8h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    hAllocation = a2->hAllocation;
    memset(&v53, 0, sizeof(v53));
    v53.hAllocation = hAllocation;
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent((__int64)this);
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4472),
               Current,
               this,
               &v53,
               1u,
               v49,
               v50);
    if ( (int)result >= 0 )
      a2->pData = v53.pData;
    return result;
  }
  Value = a2->Flags.Value;
  v10 = 1;
  for ( i = 1; ; i = 2 )
  {
    if ( (unsigned int)Value >= 0x800 )
      goto LABEL_75;
    if ( (a2->NumPages == 0) != (a2->pPages == 0LL) )
    {
      Value = a2->NumPages;
LABEL_75:
      v31 = -1073741811;
      WdLogSingleEntry3(3LL, this, Value, -1073741811LL);
      return (unsigned int)v31;
    }
    v11 = *((_QWORD *)this + 5);
    v12 = a2->hAllocation;
    v13 = ((Value & 4) == 0) | 2;
    if ( (Value & 8) == 0 )
      v13 = (Value & 4) == 0;
    v14 = v13 | 4;
    if ( (Value & 0x20) == 0 )
      v14 = v13;
    v15 = v14 | 8;
    if ( (Value & 0x40) == 0 )
      v15 = v14;
    v16 = v15 | 0x10;
    if ( (Value & 0x80u) == 0LL )
      v16 = v15;
    v17 = v16 | 0x20;
    if ( (Value & 0x100) == 0 )
      v17 = v16;
    v18 = v17 | 0x48;
    if ( (Value & 0x200) == 0 )
      v18 = v17;
    v19 = v18 | 0x80;
    if ( (Value & 0x400) == 0 )
      v19 = v18;
    v20 = v19 | 0x200;
    if ( (Value & 1) == 0 )
      v20 = v19;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
    v21 = (v12 >> 6) & 0xFFFFFF;
    if ( v21 >= *(_DWORD *)(v11 + 296) )
      goto LABEL_29;
    v22 = *(_QWORD *)(v11 + 280) + 16LL * v21;
    if ( ((v12 >> 25) & 0x60) != (*(_BYTE *)(v22 + 8) & 0x60) )
      goto LABEL_29;
    if ( (*(_DWORD *)(v22 + 8) & 0x2000) != 0 )
      goto LABEL_29;
    v23 = *(_DWORD *)(v22 + 8) & 0x1F;
    if ( !v23 )
      goto LABEL_29;
    if ( v23 != 5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
      v24 = 0LL;
      goto LABEL_30;
    }
    v24 = *(struct _EX_RUNDOWN_REF **)v22;
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v56, v24);
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
    ExReleasePushLockSharedEx(v11 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v56 )
      break;
    if ( !v56[3].Count )
    {
      v46 = (DXGDEVICE *)a2->hAllocation;
      Count = (DXGDEVICE *)v56;
      v47 = (struct _EX_RUNDOWN_REF *)this;
      goto LABEL_63;
    }
    Count = (DXGDEVICE *)v56[1].Count;
    if ( Count != this )
    {
      v46 = this;
      v47 = v56;
LABEL_63:
      v31 = -1073741811;
      WdLogSingleEntry4(3LL, v47, v46, Count, -1073741811LL);
      goto LABEL_66;
    }
    v26 = 0;
    if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 1272LL))(v56[3].Count);
    v27 = (char *)this + 16;
    if ( (*(_DWORD *)(v56[6].Count + 4) & 2) == 0 )
    {
      v28 = v56[5].Count;
      if ( v28 )
      {
        v29 = *(_DWORD *)(v28 + 4);
        if ( (v29 & 1) != 0 && (v29 & 2) == 0 && !v26 )
        {
          v27 = (char *)this + 16;
          v30 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 436LL);
          if ( (v30 & 0x10) == 0 && (v30 & 8) == 0 )
            break;
        }
      }
    }
    if ( v10 == 1 )
    {
      v20 |= 0x100u;
      v27 = (char *)this + 16;
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD, UINT, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 760LL) + 8LL)
                                                                                              + 256LL))(
            *(_QWORD *)(*(_QWORD *)v27 + 768LL),
            v56[3].Count,
            a2->hAllocation & 0x3F,
            v20,
            a2->PrivateDriverData,
            0LL,
            &a2->pData);
    v52 = *((_QWORD *)this + 5);
    v32 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 760LL) + 8LL) + 272LL))(
            *(_QWORD *)(*(_QWORD *)v27 + 768LL),
            v56[3].Count);
    v33 = a2->hAllocation;
    v34 = v52 + 248;
    v35 = v32;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v52 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *(_DWORD *)(v52 + 272);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v38);
      }
      ExAcquirePushLockExclusiveEx(v34, 0LL);
    }
    v39 = v52;
    v40 = 0;
    v41 = (v33 >> 6) & 0xFFFFFF;
    *(_QWORD *)(v52 + 256) = KeGetCurrentThread();
    if ( v41 < *(_DWORD *)(v39 + 296) )
    {
      v42 = *(_QWORD *)(v39 + 280);
      v43 = *(_DWORD *)(v42 + 16LL * v41 + 8);
      if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16LL * v41 + 8) & 0x60) && (v43 & 0x2000) == 0 && (v43 & 0x1F) != 0 )
      {
        *(_DWORD *)(v42 + 16LL * v41 + 8) = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)(v35 << 7)) & 0x1F80;
        v40 = (*(_DWORD *)(*(_QWORD *)(v39 + 280) + 16LL * v41 + 8) >> 7) & 0x3F | ((v41 | ((*(_DWORD *)(*(_QWORD *)(v39 + 280) + 16LL * v41 + 8) & 0xFFFFFFE0) << 19)) << 6);
      }
    }
    *(_QWORD *)(v34 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v34, 0LL);
    KeLeaveCriticalRegion();
    a2->hAllocation = v40;
    if ( v31 != -1071775484 )
      goto LABEL_66;
    COREDEVICEACCESS::Release(a3);
    v31 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 760LL)
                                                                                    + 8LL)
                                                                        + 608LL))(
            *(_QWORD *)(*(_QWORD *)v27 + 768LL),
            v56[3].Count,
            a2->hAllocation & 0x3F,
            2LL);
    if ( v31 < 0 )
      goto LABEL_66;
    v44 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
    v31 = v44;
    if ( v44 < 0 )
    {
      WdLogSingleEntry1(4LL, v44);
      COREDEVICEACCESS::AcquireSharedUncheck(a3, v45);
      goto LABEL_66;
    }
    a2->Flags.Value &= ~0x80u;
    if ( i != 1 )
      goto LABEL_66;
    v10 = 2;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v56);
    Value = a2->Flags.Value;
  }
  v31 = -1073741811;
  WdLogSingleEntry3(3LL, this, a2->hAllocation, -1073741811LL);
LABEL_66:
  if ( v56 )
    ExReleaseRundownProtection(v56 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v51 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v51) >= 0 )
    {
      DxgThread = v51;
      if ( v51 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v51 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
      }
    }
  }
  return (unsigned int)v31;
}
