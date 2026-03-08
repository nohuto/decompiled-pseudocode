/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C031229C
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C017BABC (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006964 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8B78 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03128E4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r13
  volatile signed __int64 **v6; // r15
  __int64 v7; // rcx
  volatile signed __int64 *i; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  struct DXGDEVICE *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  char *v24; // rdx
  _BYTE v25[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  char v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  char v30; // [rsp+80h] [rbp-80h]
  _QWORD v31[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v32[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v33[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v34[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v35[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v36[88]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v37[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v38[64]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v39[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 136)) )
  {
    WdLogSingleEntry1(1LL, 759LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      759LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v3);
  v6 = (volatile signed __int64 **)((char *)this + 408);
LABEL_5:
  v7 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 136)) )
  {
    WdLogSingleEntry1(1LL, 771LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      771LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = *v6; ; i = (volatile signed __int64 *)*i )
  {
    v9 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v9 = 0LL;
    if ( !v9 )
      break;
    v10 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v10 = 0LL;
    v11 = *((_DWORD *)v10 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v33, Current);
    v12 = (v11 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)Current + 74) )
    {
      v13 = *((_QWORD *)Current + 35);
      if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60)
        && (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) == 0 )
      {
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
        if ( v14 )
        {
          if ( v14 == 15 )
          {
            if ( *(_QWORD *)(v13 + 16LL * v12) )
            {
              if ( i == (volatile signed __int64 *)v6 )
                i = 0LL;
              *(_DWORD *)(v13 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
              if ( i )
              {
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
                v15 = _InterlockedDecrement64(i + 13);
                if ( v15 >= 0 )
                {
                  if ( !v15 )
                  {
                    v16 = *((_QWORD *)i + 2);
                    v17 = *(struct DXGDEVICE **)(v16 + 16);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v17);
                    v18 = *((_QWORD *)v17 + 2);
                    v27 = 0;
                    v26 = *(_QWORD *)(v18 + 16);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
                    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v17, 2, v19, 0);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v34, v20);
                    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 200LL) != 4 )
                      DXGCONTEXT::DestroyHwQueue(
                        (DXGCONTEXT *)v16,
                        (struct DXGHWQUEUE *)i,
                        (struct COREDEVICEACCESS *)v34);
                    COREACCESS::~COREACCESS((COREACCESS *)v36);
                    COREACCESS::~COREACCESS((COREACCESS *)v35);
                    if ( v27 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
                    if ( v31[0] )
                      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      v21 = *(_QWORD *)(v16 + 16);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v32,
                        (struct DXGDEVICE *)v21);
                      v22 = *(_QWORD *)(v16 + 16);
                      v30 = 0;
                      v29 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v21, 2, v23, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v37, v24);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 200LL) != 4 )
                        DXGDEVICE::DestroyContext(
                          (DXGDEVICE *)v21,
                          (struct DXGCONTEXT *)v16,
                          (struct COREDEVICEACCESS *)v37);
                      COREACCESS::~COREACCESS((COREACCESS *)v39);
                      COREACCESS::~COREACCESS((COREACCESS *)v38);
                      if ( v30 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
                      if ( v32[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
                    }
                  }
                }
                else
                {
                  WdLogSingleEntry1(1LL, 141LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NewReferenceCount >= 0",
                    141LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
                goto LABEL_5;
              }
              return;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  }
}
