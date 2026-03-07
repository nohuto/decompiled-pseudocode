void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rdi
  struct DXGDEVICE *v9; // rax
  _QWORD *i; // rdi
  SESSION_ADAPTER *v11; // rcx
  unsigned int v12; // edx
  SESSION_ADAPTER *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r15d
  SESSION_ADAPTER *v17; // rax
  __int64 v18; // rdx
  SESSION_ADAPTER *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // rdx
  struct DXGHWQUEUE *v24; // r13
  __int64 v25; // rax
  __int64 v26; // r14
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r9
  char *v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  char *v34; // rdx
  void *v35; // r13
  __int64 v36; // r15
  __int64 *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r9
  char *v42; // rdx
  __int64 v43; // [rsp+60h] [rbp-A8h]
  SESSION_ADAPTER *v44; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v45[16]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+80h] [rbp-88h]
  void *v47; // [rsp+88h] [rbp-80h]
  char v48[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v49; // [rsp+98h] [rbp-70h]
  char v50; // [rsp+A0h] [rbp-68h]
  char v51[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-58h]
  char v53; // [rsp+B8h] [rbp-50h]
  char v54[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h]
  char v56; // [rsp+D0h] [rbp-38h]
  char v57[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-28h]
  char v59; // [rsp+E8h] [rbp-20h]
  _QWORD v60[2]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v61[2]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v62[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v63[2]; // [rsp+120h] [rbp+18h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp+28h] BYREF
  char v65; // [rsp+160h] [rbp+58h]
  char v66[8]; // [rsp+168h] [rbp+60h] BYREF
  char v67[64]; // [rsp+170h] [rbp+68h] BYREF
  char v68[88]; // [rsp+1B0h] [rbp+A8h] BYREF
  char v69[8]; // [rsp+208h] [rbp+100h] BYREF
  char v70[64]; // [rsp+210h] [rbp+108h] BYREF
  char v71[88]; // [rsp+250h] [rbp+148h] BYREF
  char v72[8]; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v73[64]; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v74[88]; // [rsp+2F0h] [rbp+1E8h] BYREF
  char v75[8]; // [rsp+348h] [rbp+240h] BYREF
  char v76[64]; // [rsp+350h] [rbp+248h] BYREF
  char v77[88]; // [rsp+390h] [rbp+288h] BYREF

  v2 = *(_QWORD *)this;
  v65 = 0;
  v44 = 0LL;
  v46 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 18656);
  v7 = 0;
  v47 = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 216, 0LL);
    *(_QWORD *)(v6 + 224) = KeGetCurrentThread();
    v9 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v9 && v9 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18648LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v11 = (SESSION_ADAPTER *)*((_QWORD *)this + 9);
      v12 = *((_DWORD *)this + 24);
      v7 = *((_DWORD *)this + 13);
      v47 = (void *)*((_QWORD *)this + 8);
      v46 = v12;
      if ( v11 == (SESSION_ADAPTER *)((char *)this + 80) )
      {
        v13 = (SESSION_ADAPTER *)v45;
        v14 = 0;
        v44 = (SESSION_ADAPTER *)v45;
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = v14++;
            *((_QWORD *)v13 + v15) = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v15);
            if ( v14 >= *((_DWORD *)this + 24) )
              break;
            v13 = v44;
          }
        }
      }
      else
      {
        v44 = v11;
      }
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 9) = 0LL;
      v5 = *((_QWORD *)this + 7);
      v8 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v6 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( v46 )
    {
      v16 = 0;
      if ( v7 )
      {
        v17 = v44;
        v18 = 0LL;
        v43 = 0LL;
        while ( 1 )
        {
          v19 = (SESSION_ADAPTER *)((char *)v17 + v18);
          if ( v16 >= v46 )
            v19 = v17;
          if ( !*(_QWORD *)v19 )
            goto LABEL_16;
          if ( v16 < v46 )
            v17 = (SESSION_ADAPTER *)((char *)v17 + v18);
          v24 = *(struct DXGHWQUEUE **)v17;
          v25 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v17 + 104LL));
          if ( v25 < 0 )
            break;
          if ( !v25 )
          {
            v26 = *((_QWORD *)v24 + 2);
            v27 = *(struct DXGDEVICE **)(v26 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60, v27);
            v28 = *((_QWORD *)v27 + 2);
            v50 = 0;
            v49 = *(_QWORD *)(v28 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v27, 2, v29, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v66, v30);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 200LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v26, v24, (struct COREDEVICEACCESS *)v66);
            COREACCESS::~COREACCESS((COREACCESS *)v68);
            COREACCESS::~COREACCESS((COREACCESS *)v67);
            if ( v50 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
            if ( v60[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              v31 = *(_QWORD *)(v26 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v61,
                (struct DXGDEVICE *)v31);
              v32 = *(_QWORD *)(v26 + 16);
              v53 = 0;
              v52 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, v31, 2, v33, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v69, v34);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 200LL) != 4 )
                DXGDEVICE::DestroyContext((DXGDEVICE *)v31, (struct DXGCONTEXT *)v26, (struct COREDEVICEACCESS *)v69);
              COREACCESS::~COREACCESS((COREACCESS *)v71);
              COREACCESS::~COREACCESS((COREACCESS *)v70);
              if ( v53 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
              if ( v61[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v31 + 16), (struct DXGDEVICE *)v31);
            }
            goto LABEL_56;
          }
LABEL_57:
          v17 = v44;
LABEL_16:
          v18 += 8LL;
          ++v16;
          v43 = v18;
          if ( v16 >= v7 )
            goto LABEL_17;
        }
        WdLogSingleEntry1(1LL, 141LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
LABEL_56:
        v18 = v43;
        goto LABEL_57;
      }
    }
LABEL_17:
    if ( v7 > 1 )
    {
      v35 = v47;
      v36 = v7;
      v37 = (__int64 *)v47;
      do
      {
        v38 = *v37;
        if ( *v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v39 = *(_QWORD *)(v38 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v62,
            (struct DXGDEVICE *)v39);
          v40 = *(_QWORD *)(v38 + 16);
          v56 = 0;
          v55 = *(_QWORD *)(*(_QWORD *)(v40 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, v39, 2, v41, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v72, v42);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v39, (struct DXGCONTEXT *)v38, (struct COREDEVICEACCESS *)v72);
          COREACCESS::~COREACCESS((COREACCESS *)v74);
          COREACCESS::~COREACCESS((COREACCESS *)v73);
          if ( v56 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
          if ( v62[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v39 + 16), (struct DXGDEVICE *)v39);
        }
        ++v37;
        --v36;
      }
      while ( v36 );
      operator delete(v35);
    }
    else if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v20 = *(_QWORD *)(v8 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v63,
        (struct DXGDEVICE *)v20);
      v21 = *(_QWORD *)(v8 + 16);
      v59 = 0;
      v58 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, v20, 2, v22, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v75, v23);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v20, (struct DXGCONTEXT *)v8, (struct COREDEVICEACCESS *)v75);
      COREACCESS::~COREACCESS((COREACCESS *)v77);
      COREACCESS::~COREACCESS((COREACCESS *)v76);
      if ( v59 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
      if ( v63[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
    }
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v44);
  if ( v65 )
    KeUnstackDetachProcess(&ApcState);
}
