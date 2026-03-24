/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C026D0CC
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00EEF68 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002DA4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026D644 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(
        DXGCONTEXT *this,
        struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  struct DXGPROCESS *Current; // r13
  void **v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  volatile signed __int64 *i; // rdi
  volatile signed __int64 *v15; // rax
  volatile signed __int64 *v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r9
  char *v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  char *v34; // rdx
  _BYTE v35[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h]
  char v37; // [rsp+48h] [rbp-B8h]
  _BYTE v38[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h]
  char v40; // [rsp+60h] [rbp-A0h]
  _QWORD v41[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v42[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v43[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v44[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v45[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v46[88]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v47[8]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v48[64]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v49[88]; // [rsp+188h] [rbp+88h] BYREF

  v5 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v7 + 24) = 548LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent(v5, (__int64)a2, a3, a4);
  v9 = (void **)((char *)this + 424);
LABEL_5:
  v10 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v10 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v10 + 136)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 560LL;
    WdLogEvent5_WdAssertion(v13);
  }
  for ( i = (volatile signed __int64 *)*v9; ; i = (volatile signed __int64 *)*i )
  {
    v15 = i;
    if ( i == (volatile signed __int64 *)v9 )
      v15 = 0LL;
    if ( !v15 )
      break;
    v16 = i;
    if ( i == (volatile signed __int64 *)v9 )
      v16 = 0LL;
    v17 = *((_DWORD *)v16 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v43,
      (struct _KTHREAD **)Current);
    v18 = (v17 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *((_DWORD *)Current + 64) )
    {
      v19 = *((_QWORD *)Current + 30);
      v20 = *(unsigned int *)(v19 + 16 * v18 + 8);
      if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
      {
        if ( (v20 & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v19 + 16LL * (unsigned int)v18) )
          {
            if ( i == (volatile signed __int64 *)v9 )
              i = 0LL;
            if ( ((v17 >> 25) & 0x60) == (v20 & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
              *(_DWORD *)(v19 + 16 * (((unsigned __int64)v17 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v24 = _InterlockedDecrement64(i + 11);
              if ( v24 < 0 )
              {
                v25 = WdLogNewEntry5_WdAssertion(v23, v22);
                *(_QWORD *)(v25 + 24) = 111LL;
                WdLogEvent5_WdAssertion(v25);
              }
              if ( !v24 )
              {
                v26 = *((_QWORD *)i + 2);
                v27 = *(struct DXGDEVICE **)(v26 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v27);
                v28 = *((_QWORD *)v27 + 2);
                v37 = 0;
                v36 = *(_QWORD *)(v28 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v27, 2, v29, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v44, v30);
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 200LL) != 4 )
                  DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v26, (PVOID)i, (struct COREDEVICEACCESS *)v44);
                COREACCESS::~COREACCESS((COREACCESS *)v46);
                COREACCESS::~COREACCESS((COREACCESS *)v45);
                if ( v37 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
                if ( v41[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v31 = *(_QWORD *)(v26 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
                    (struct DXGDEVICE *)v31);
                  v32 = *(_QWORD *)(v26 + 16);
                  v40 = 0;
                  v39 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v31, 2, v33, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v47, v34);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v31,
                      (struct DXGCONTEXT *)v26,
                      (struct COREDEVICEACCESS *)v47);
                  COREACCESS::~COREACCESS((COREACCESS *)v49);
                  COREACCESS::~COREACCESS((COREACCESS *)v48);
                  if ( v40 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
                  if ( v42[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v31 + 16), (struct DXGDEVICE *)v31);
                }
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v21 = WdLogNewEntry5_WdError((v17 >> 25) & 0x60, v20);
          *(_QWORD *)(v21 + 24) = 316LL;
          WdLogEvent5_WdError(v21);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  }
}
