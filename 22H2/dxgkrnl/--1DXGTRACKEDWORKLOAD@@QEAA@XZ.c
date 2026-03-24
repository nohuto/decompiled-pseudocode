/*
 * XREFs of ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C02BC8CC
 * Callers:
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C004E0CC (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
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
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0114D10 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C02BCBF8 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD **Current; // rbx
  __int64 i; // rsi
  void *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  char *v12; // rdx
  _BYTE v13[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h]
  char v15; // [rsp+48h] [rbp-B8h]
  _QWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v20[88]; // [rsp+C8h] [rbp-38h] BYREF

  DXGTRACKEDWORKLOAD::DestroyTrackedWorkload((DXGTRACKEDWORKLOAD *)this);
  if ( *((_DWORD *)this + 20) )
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3, v2, v4, v5);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
    HMGRTABLE::FreeHandle((HMGRTABLE *)(Current + 30), *((unsigned int *)this + 20));
    *((_DWORD *)this + 20) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 268); i = (unsigned int)(i + 1) )
  {
    v8 = this[i + 70];
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v9 = *((_QWORD *)v8 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v16,
        (struct DXGDEVICE *)v9);
      v10 = *((_QWORD *)v8 + 2);
      v15 = 0;
      v14 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, v9, 2, v11, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v18, v12);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v9, (struct DXGCONTEXT *)v8, (struct COREDEVICEACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v20);
      COREACCESS::~COREACCESS((COREACCESS *)v19);
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      if ( v16[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v9 + 16), (struct DXGDEVICE *)v9);
    }
  }
  operator delete[](this[29]);
  operator delete[](this[15]);
  this[2] = 0LL;
}
