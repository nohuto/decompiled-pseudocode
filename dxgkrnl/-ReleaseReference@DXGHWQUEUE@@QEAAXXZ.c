void __fastcall DXGHWQUEUE::ReleaseReference(DXGHWQUEUE *this)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rsi
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  char *v14; // rdx
  _BYTE v15[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  char v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h]
  char v20; // [rsp+90h] [rbp-70h]
  _QWORD v21[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v22[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v23[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v24[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v25[88]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v26[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v27[64]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v28[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = _InterlockedDecrement64((volatile signed __int64 *)this + 13);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v6 = *((_QWORD *)this + 2);
      v7 = *(struct DXGDEVICE **)(v6 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21, v7);
      v8 = *((_QWORD *)v7 + 2);
      v17 = 0;
      v16 = *(_QWORD *)(v8 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v7, 2, v9, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23, v10);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 200LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v6, this, (struct COREDEVICEACCESS *)v23);
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      if ( v17 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      if ( v21[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v6 + 32)) )
      {
        v11 = *(_QWORD *)(v6 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v22,
          (struct DXGDEVICE *)v11);
        v12 = *(_QWORD *)(v6 + 16);
        v20 = 0;
        v19 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, v11, 2, v13, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26, v14);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v11, (struct DXGCONTEXT *)v6, (struct COREDEVICEACCESS *)v26);
        COREACCESS::~COREACCESS((COREACCESS *)v28);
        COREACCESS::~COREACCESS((COREACCESS *)v27);
        if ( v20 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
        if ( v22[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v11 + 64)) )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 141LL);
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
          141LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
