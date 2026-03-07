void __fastcall DXGDEVICE::DestroyCoreAllocations(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGALLOCATION *v3; // r14
  struct DXGALLOCATION *v7; // r9
  HANDLE *v8; // r12
  struct DXGALLOCATION *v9; // rbx
  struct DXGALLOCATION *v10; // rax
  struct DXGALLOCATION *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // r14d
  unsigned int v17; // r8d
  struct COREDEVICEACCESS *v18; // r9
  __int64 v19; // rdx
  void *v20; // rcx
  struct _KTHREAD *v21; // rdx
  ADAPTER_RENDER *v22; // rcx
  struct DXGALLOCATION *v23; // r13
  int v24; // ebx
  __int64 v25; // rax
  __int64 v27; // rax
  unsigned int v28; // r8d
  volatile signed __int32 *v29; // rcx
  struct DXGADAPTERALLOCATION *v30; // rdx
  void *v31; // rcx
  UINT v32; // eax
  struct DXGALLOCATION *v33; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[16]; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_CLOSEALLOCATION v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  char v37; // [rsp+80h] [rbp-80h]
  struct _DXGKARG_DESTROYALLOCATION v38; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v39[128]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v35 = 0LL;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v36, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v36);
  }
  memset(v39, 0, sizeof(v39));
  if ( !a2 || (v8 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL )
    v8 = (HANDLE *)v39;
  v9 = a3;
  v33 = a3;
  if ( a3 )
  {
    v10 = a3;
    v3 = a3;
    do
    {
      v11 = (struct DXGALLOCATION *)*((_QWORD *)v10 + 8);
      v12 = *((_QWORD *)v3 + 6);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 4);
        if ( (v13 & 0x200B) != 0 )
          DXGDEVICE::TestAndSetDisplayedPrimary(this, (v13 >> 6) & 0xF, v9, v7);
      }
      v14 = *((_QWORD *)v3 + 6);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 4);
        if ( (v15 & 0x2000) != 0 )
        {
          if ( *((_QWORD *)v9 + 3) )
          {
            v16 = (v15 >> 6) & 0xF;
            if ( DXGDEVICE::IsDirectFlipAllocationPinned((DXGDEVICE *)this, v9) )
            {
              if ( *(int *)(*((_QWORD *)this[2] + 2) + 2820LL) >= 2200 )
                DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v16, v17, &v33, 0LL);
              else
                DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)this, v16, v17, v18);
            }
          }
        }
      }
      if ( (*((_DWORD *)v9 + 18) & 0x80000) != 0 )
        UnlockParavirtualizedAllocationOnGuest(v9, 0);
      v19 = *((_QWORD *)v9 + 3);
      if ( v19 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL) + 152LL))(
          *((_QWORD *)this[2] + 96),
          v19,
          (__int64)v9 + 80,
          0LL);
        *((_DWORD *)v9 + 18) |= 1u;
        *((_QWORD *)v9 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation((DXGDEVICE *)this, v9);
      }
      v20 = (void *)*((_QWORD *)v9 + 4);
      if ( v20 )
      {
        v8[v35.NumAllocations++] = v20;
        *((_QWORD *)v9 + 4) = 0LL;
      }
      v9 = v11;
      v10 = v11;
      v33 = v11;
      v3 = v11;
    }
    while ( v11 );
  }
  if ( v35.NumAllocations > (unsigned int)v3 )
  {
    v21 = this[77];
    v22 = this[2];
    v35.pOpenHandleList = v8;
    ADAPTER_RENDER::DdiCloseAllocation(v22, v21, &v35);
  }
  v23 = v3;
  v24 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v25 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL);
      if ( v25 )
      {
        if ( *(struct _KTHREAD ***)(v25 + 80) == this && (*(_DWORD *)(v25 + 72))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v34,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 80LL) = v3;
          if ( v34[8] != (_BYTE)v3 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
        }
      }
      v27 = *((_QWORD *)a2 + 3);
      v28 = (unsigned int)v3;
      while ( v27 )
      {
        v27 = *(_QWORD *)(v27 + 64);
        ++v28;
      }
      v29 = (volatile signed __int32 *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd(v29 + 17, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v29, v8, v28);
      *((_QWORD *)a2 + 7) = v3;
      v24 = (int)v3;
    }
    else
    {
      v23 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 7);
    }
  }
  memset(&v38, 0, sizeof(v38));
  if ( a3 )
  {
    v3 = a3;
    do
    {
      v30 = (struct DXGADAPTERALLOCATION *)*((_QWORD *)v3 + 6);
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      if ( v30 )
      {
        if ( !v24 )
          goto LABEL_49;
        DXGDEVICE::DestroyAdapterAllocation((DXGDEVICE *)this, v30);
        v31 = *(void **)(*((_QWORD *)v3 + 6) + 16LL);
        if ( v31 )
        {
          v8[v38.NumAllocations++] = v31;
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v24 )
      {
LABEL_49:
        if ( !a2 )
        {
          WdLogSingleEntry1(1LL, 741LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 741LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          WdLogSingleEntry1(1LL, 742LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pResource->m_SharedResource",
            742LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v3 = a3;
    }
    while ( a3 );
  }
  if ( v24 )
  {
    v38.hResource = v23;
    v32 = (unsigned int)v3;
    if ( a2 )
      v32 = 1;
    v38.Flags.Value = v32;
    if ( v38.NumAllocations )
    {
      v38.pAllocationList = v8;
    }
    else
    {
      v38.pAllocationList = (const HANDLE *)v3;
      if ( !v23 )
        goto LABEL_62;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v38, 0LL);
  }
LABEL_62:
  if ( v37 != (_BYTE)v3 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v36);
}
