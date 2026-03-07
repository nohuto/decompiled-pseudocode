void __fastcall DXGCONTEXT::ReleaseReference(DXGCONTEXT *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  char *v5; // rdx
  _BYTE v6[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+40h] [rbp-C0h]
  char v8; // [rsp+48h] [rbp-B8h]
  _QWORD v9[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v11[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v12[88]; // [rsp+A8h] [rbp-58h] BYREF

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = *((_QWORD *)this + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v9,
      (struct DXGDEVICE *)v2);
    v3 = *((_QWORD *)this + 2);
    v8 = 0;
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v10, v2, 2, v4, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v10, v5);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v2, this, (struct COREDEVICEACCESS *)v10);
    COREACCESS::~COREACCESS((COREACCESS *)v12);
    COREACCESS::~COREACCESS((COREACCESS *)v11);
    if ( v8 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
    if ( v9[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
  }
}
