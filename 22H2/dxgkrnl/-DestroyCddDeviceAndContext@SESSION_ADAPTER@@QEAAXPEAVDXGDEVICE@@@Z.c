/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0164C10
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C0164B9C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C02A04F8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C016D768 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026D644 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned int v8; // r13d
  __int64 v9; // rdi
  struct DXGDEVICE *v10; // rax
  _QWORD *i; // rdi
  SESSION_ADAPTER *v12; // rcx
  int v13; // edx
  SESSION_ADAPTER *v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  SESSION_ADAPTER *v18; // rax
  __int64 v19; // r14
  SESSION_ADAPTER *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  char *v24; // rdx
  _QWORD *v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r14
  struct DXGDEVICE *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  char *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r9
  char *v36; // rdx
  void *v37; // r12
  __int64 v38; // r15
  __int64 *v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // rdx
  __int64 v45; // [rsp+40h] [rbp-C8h]
  SESSION_ADAPTER *v46; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v47[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h]
  void *v49; // [rsp+68h] [rbp-A0h]
  _QWORD v50[2]; // [rsp+70h] [rbp-98h] BYREF
  char v51; // [rsp+80h] [rbp-88h]
  char v52[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v53; // [rsp+90h] [rbp-78h]
  char v54; // [rsp+98h] [rbp-70h]
  char v55[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-60h]
  char v57; // [rsp+B0h] [rbp-58h]
  char v58[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-48h]
  char v60; // [rsp+C8h] [rbp-40h]
  _QWORD v61[2]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v62[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v63[2]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v64[2]; // [rsp+100h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+8h] BYREF
  char v66; // [rsp+140h] [rbp+38h]
  char v67[8]; // [rsp+148h] [rbp+40h] BYREF
  char v68[64]; // [rsp+150h] [rbp+48h] BYREF
  char v69[88]; // [rsp+190h] [rbp+88h] BYREF
  char v70[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v71[64]; // [rsp+1F0h] [rbp+E8h] BYREF
  char v72[88]; // [rsp+230h] [rbp+128h] BYREF
  char v73[8]; // [rsp+288h] [rbp+180h] BYREF
  char v74[64]; // [rsp+290h] [rbp+188h] BYREF
  char v75[88]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v76[8]; // [rsp+328h] [rbp+220h] BYREF
  char v77[64]; // [rsp+330h] [rbp+228h] BYREF
  char v78[88]; // [rsp+370h] [rbp+268h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v66 = 0;
  v46 = 0LL;
  LODWORD(v48) = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 18640);
  v8 = 0;
  v49 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7 + 176, 0LL);
    *(_QWORD *)(v7 + 184) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v10 && v10 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18632LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v12 = (SESSION_ADAPTER *)*((_QWORD *)this + 9);
      v13 = *((_DWORD *)this + 24);
      v8 = *((_DWORD *)this + 13);
      v49 = (void *)*((_QWORD *)this + 8);
      LODWORD(v48) = v13;
      if ( v12 == (SESSION_ADAPTER *)((char *)this + 80) )
      {
        v14 = (SESSION_ADAPTER *)v47;
        v15 = 0;
        v46 = (SESSION_ADAPTER *)v47;
        if ( v13 )
        {
          while ( 1 )
          {
            v16 = v15++;
            *((_QWORD *)v14 + v16) = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v16);
            if ( v15 >= *((_DWORD *)this + 24) )
              break;
            v14 = v46;
          }
        }
      }
      else
      {
        v46 = v12;
      }
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 9) = 0LL;
      v9 = *((_QWORD *)this + 8);
      v6 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v7 + 184) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 176, 0LL);
    KeLeaveCriticalRegion();
    v17 = (unsigned int)v48;
    if ( (_DWORD)v48 && v8 )
    {
      v18 = v46;
      v19 = 0LL;
      v45 = 0LL;
      do
      {
        v20 = (SESSION_ADAPTER *)((char *)v18 + v19);
        if ( v3 >= (unsigned int)v17 )
          v20 = v18;
        if ( *(_QWORD *)v20 )
        {
          if ( v3 < (unsigned int)v17 )
            v18 = (SESSION_ADAPTER *)((char *)v18 + v19);
          v25 = *(_QWORD **)v18;
          v26 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v18 + 88LL));
          if ( v26 < 0 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v17, v20);
            *(_QWORD *)(v27 + 24) = 111LL;
            WdLogEvent5_WdAssertion(v27);
          }
          if ( !v26 )
          {
            v28 = v25[2];
            v29 = *(struct DXGDEVICE **)(v28 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61, v29);
            v30 = *((_QWORD *)v29 + 2);
            v51 = 0;
            v50[1] = *(_QWORD *)(v30 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v29, 2, v31, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v67, v32);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 200LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v28, v25, (struct COREDEVICEACCESS *)v67);
            COREACCESS::~COREACCESS((COREACCESS *)v69);
            COREACCESS::~COREACCESS((COREACCESS *)v68);
            if ( v51 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
            if ( v61[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              v33 = *(_QWORD *)(v28 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v62,
                (struct DXGDEVICE *)v33);
              v34 = *(_QWORD *)(v28 + 16);
              v54 = 0;
              v53 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v33, 2, v35, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v70, v36);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 200LL) != 4 )
                DXGDEVICE::DestroyContext((DXGDEVICE *)v33, (struct DXGCONTEXT *)v28, (struct COREDEVICEACCESS *)v70);
              COREACCESS::~COREACCESS((COREACCESS *)v72);
              COREACCESS::~COREACCESS((COREACCESS *)v71);
              if ( v54 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
              if ( v62[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v33 + 16), (struct DXGDEVICE *)v33);
            }
            v19 = v45;
          }
          v18 = v46;
          v17 = (unsigned int)v48;
        }
        v19 += 8LL;
        ++v3;
        v45 = v19;
      }
      while ( v3 < v8 );
    }
    if ( v8 > 1 )
    {
      v37 = v49;
      v38 = v8;
      v39 = (__int64 *)v49;
      do
      {
        v40 = *v39;
        if ( *v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v41 = *(_QWORD *)(v40 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v63,
            (struct DXGDEVICE *)v41);
          v42 = *(_QWORD *)(v40 + 16);
          v57 = 0;
          v56 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, v41, 2, v43, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v73, v44);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v41, (struct DXGCONTEXT *)v40, (struct COREDEVICEACCESS *)v73);
          COREACCESS::~COREACCESS((COREACCESS *)v75);
          COREACCESS::~COREACCESS((COREACCESS *)v74);
          if ( v57 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
          if ( v63[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v41 + 16), (struct DXGDEVICE *)v41);
        }
        ++v39;
        --v38;
      }
      while ( v38 );
      operator delete[](v37);
    }
    else if ( v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v21 = *(_QWORD *)(v9 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v64,
        (struct DXGDEVICE *)v21);
      v22 = *(_QWORD *)(v9 + 16);
      v60 = 0;
      v59 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, v21, 2, v23, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v76, v24);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v21, (struct DXGCONTEXT *)v9, (struct COREDEVICEACCESS *)v76);
      COREACCESS::~COREACCESS((COREACCESS *)v78);
      COREACCESS::~COREACCESS((COREACCESS *)v77);
      if ( v60 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
      if ( v64[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
    }
    if ( v6 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v6 + 16), (struct DXGDEVICE *)v6);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v46);
  if ( v66 )
    KeUnstackDetachProcess(&ApcState);
}
