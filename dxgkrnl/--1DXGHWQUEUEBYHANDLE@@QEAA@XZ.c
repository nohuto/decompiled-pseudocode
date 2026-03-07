void __fastcall DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE(DXGHWQUEUEBYHANDLE *this)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rsi
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rdx
  _QWORD v13[2]; // [rsp+70h] [rbp-98h] BYREF
  char v14; // [rsp+80h] [rbp-88h]
  _BYTE v15[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h]
  char v17; // [rsp+98h] [rbp-70h]
  _QWORD v18[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v19[3]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v20[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v21[64]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v22[88]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v23[8]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v24[64]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v25[88]; // [rsp+1B0h] [rbp+A8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this && !*((_BYTE *)this + 8) )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(v1 + 104));
    if ( v2 >= 0 )
    {
      if ( !v2 )
      {
        v6 = *(_QWORD *)(v1 + 16);
        v7 = *(struct DXGDEVICE **)(v6 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, v7);
        v8 = *((_QWORD *)v7 + 2);
        v14 = 0;
        v13[1] = *(_QWORD *)(v8 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
        COREDEVICEACCESS::COREDEVICEACCESS(v20, v7, 2LL);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v20, v9);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v6, (struct DXGHWQUEUE *)v1, (struct COREDEVICEACCESS *)v20);
        COREACCESS::~COREACCESS((COREACCESS *)v22);
        COREACCESS::~COREACCESS((COREACCESS *)v21);
        if ( v14 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
        if ( v18[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v6 + 32)) )
        {
          v10 = *(_QWORD *)(v6 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v19,
            (struct DXGDEVICE *)v10);
          v11 = *(_QWORD *)(v6 + 16);
          v17 = 0;
          v16 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
          COREDEVICEACCESS::COREDEVICEACCESS(v23, v10, 2LL);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23, v12);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v10, (struct DXGCONTEXT *)v6, (struct COREDEVICEACCESS *)v23);
          COREACCESS::~COREACCESS((COREACCESS *)v25);
          COREACCESS::~COREACCESS((COREACCESS *)v24);
          if ( v17 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
          if ( v19[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(v10 + 64)) )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
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
            141,
            0,
            0,
            0,
            0);
      }
    }
  }
}
