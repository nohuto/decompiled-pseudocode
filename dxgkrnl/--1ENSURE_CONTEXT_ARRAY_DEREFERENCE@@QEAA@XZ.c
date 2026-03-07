void __fastcall ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE(
        ENSURE_CONTEXT_ARRAY_DEREFERENCE *this)
{
  __int64 i; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  char *v7; // rdx
  _BYTE v8[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h]
  char v10; // [rsp+48h] [rbp-B8h]
  _QWORD v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v14[88]; // [rsp+A8h] [rbp-58h] BYREF

  if ( *(_QWORD *)this )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
      if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v11,
          (struct DXGDEVICE *)v4);
        v5 = *(_QWORD *)(v3 + 16);
        v10 = 0;
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v12, v4, 2, v6, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v12, v7);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v4, (struct DXGCONTEXT *)v3, (struct COREDEVICEACCESS *)v12);
        COREACCESS::~COREACCESS((COREACCESS *)v14);
        COREACCESS::~COREACCESS((COREACCESS *)v13);
        if ( v10 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
        if ( v11[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
      }
    }
  }
}
