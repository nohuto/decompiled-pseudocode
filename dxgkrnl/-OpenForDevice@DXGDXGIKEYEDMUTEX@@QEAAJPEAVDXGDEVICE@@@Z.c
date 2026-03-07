__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  int v7; // edi
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v31; // rdi
  struct DXGPROCESS *v32; // rsi
  char *v33; // rbp
  unsigned int v34; // ecx
  __int64 v35; // r8
  int v36; // edx
  __int64 v37; // rdi
  _BYTE v38[8]; // [rsp+60h] [rbp-28h] BYREF
  char v39; // [rsp+68h] [rbp-20h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 467LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      467LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    WdLogSingleEntry2(2LL, this, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"KeyedMutex 0x%I64x already opened locally by device 0x%I64x",
      (__int64)this,
      *((_QWORD *)this + 1),
      0LL,
      0LL,
      0LL);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v7 = DXGDXGIKEYEDMUTEX::OpenLocalMutex((__int64)this, 0, 0LL);
  if ( v7 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, this, CurrentProcess);
    v10 = PsGetCurrentProcess(v9);
    v11 = L"Failed to open local producer mutex for KeyedMutex 0x%I64x in process 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, (__int64)this, v10, 0LL, 0LL, 0LL);
LABEL_15:
    v24 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, a2, v24);
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open DxgiKeyedMutex for device 0x%I64x in process 0x%I64x",
      (__int64)a2,
      v26,
      0LL,
      0LL,
      0LL);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v27, v28, v29);
    return (unsigned int)v7;
  }
  v7 = DXGDEVICE::ConfigureSharedResourceHelper(
         a2,
         0,
         (void *)0xFFFFFFFFFFFFFFFFLL,
         *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
         1u,
         0);
  if ( v7 < 0 )
  {
    v14 = PsGetCurrentProcess(v13);
    WdLogSingleEntry2(2LL, this, v14);
    v10 = PsGetCurrentProcess(v15);
    v11 = L"Failed to add producer device to PAL for KeyedMutex 0x%I64x in process 0x%I64x";
    goto LABEL_7;
  }
  v7 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2);
  if ( v7 < 0 )
  {
    v17 = PsGetCurrentProcess(v16);
    WdLogSingleEntry2(2LL, this, v17);
    v10 = PsGetCurrentProcess(v18);
    v11 = L"Failed to open shared surface for KeyedMutex 0x%I64x in process 0x%I64x, insure the DDA producer and consumer "
           "devices are on the same adapter";
    goto LABEL_7;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v38);
  v7 = DXGSYNCOBJECT::Open(
         *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
         0LL,
         0LL,
         0LL,
         (unsigned int *)this + 24,
         0LL,
         0LL,
         0,
         0LL,
         0,
         DXGDEVICE::DestroyFlagsDefault);
  if ( v7 < 0 )
  {
    v21 = PsGetCurrentProcess(v20);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)this + 32LL), a2, v21);
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x for device 0x%I64x in process 0x%I64x",
      *(_QWORD *)(*(_QWORD *)this + 32LL),
      (__int64)a2,
      v23,
      0LL,
      0LL);
    if ( v39 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v38);
    goto LABEL_15;
  }
  Current = DXGPROCESS::GetCurrent(v20);
  v31 = *((unsigned int *)this + 24);
  v32 = Current;
  v33 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v34 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
  if ( v34 < *((_DWORD *)v32 + 74) )
  {
    v35 = *((_QWORD *)v32 + 35);
    v36 = *(_DWORD *)(v35 + 16LL * v34 + 8);
    if ( (((unsigned int)v31 >> 25) & 0x60) == (v36 & 0x60) && (v36 & 0x1F) != 0 )
    {
      v37 = 2 * ((v31 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v35 + 8 * v37 + 8) & 0x2000) == 0 )
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
      *(_DWORD *)(*((_QWORD *)v32 + 35) + 8 * v37 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v33 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v33, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( v39 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v38);
  return 0LL;
}
