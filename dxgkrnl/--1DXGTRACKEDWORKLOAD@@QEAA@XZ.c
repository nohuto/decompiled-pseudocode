void __fastcall DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD(DXGTRACKEDWORKLOAD *this)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 i; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rdx
  _BYTE v10[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  char v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v16[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v17[88]; // [rsp+C8h] [rbp-38h] BYREF

  DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(this);
  if ( *((_DWORD *)this + 20) )
  {
    Current = DXGPROCESS::GetCurrent(v2);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v14, Current);
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)this + 20));
    *((_DWORD *)this + 20) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 270); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + i + 71);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v13,
        (struct DXGDEVICE *)v6);
      v7 = *(_QWORD *)(v5 + 16);
      v12 = 0;
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, v6, 2, v8, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v15, v9);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v6, (struct DXGCONTEXT *)v5, (struct COREDEVICEACCESS *)v15);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      if ( v12 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      if ( v13[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v6 + 16), (struct DXGDEVICE *)v6);
    }
  }
  operator delete(*((void **)this + 29));
  operator delete(*((void **)this + 15));
  *((_QWORD *)this + 2) = 0LL;
}
