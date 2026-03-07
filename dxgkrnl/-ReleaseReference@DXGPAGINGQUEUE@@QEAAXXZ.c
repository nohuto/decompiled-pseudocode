void __fastcall DXGPAGINGQUEUE::ReleaseReference(DXGPAGINGQUEUE *this)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rdx
  struct COREDEVICEACCESS *v10; // r8
  _QWORD v11[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v12[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+78h] [rbp-88h]
  char v14; // [rsp+80h] [rbp-80h]
  _BYTE v15[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v16[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v17[88]; // [rsp+D8h] [rbp-28h] BYREF

  v2 = _InterlockedDecrement64((volatile signed __int64 *)this + 8);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v6 = *((_QWORD *)this + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v11,
        (struct DXGDEVICE *)v6);
      v7 = *(_QWORD *)(v6 + 16);
      v14 = 0;
      v13 = *(_QWORD *)(v7 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, v6, 2, v8, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v15, v9);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v6, this, v10);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      if ( v14 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      if ( v11[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v6 + 16), (struct DXGDEVICE *)v6);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 67LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0,
          2,
          -1,
          (__int64)L"NewReferenceCount >= 0",
          67LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
