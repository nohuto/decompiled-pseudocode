void __fastcall ADAPTER_RENDER::DestroyDeviceNoLocksInternal(ADAPTER_RENDER *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r9
  char *v5; // rdx
  _BYTE v6[8]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+38h] [rbp-D0h]
  char v8; // [rsp+40h] [rbp-C8h]
  _BYTE v9[8]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v10[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v11[88]; // [rsp+98h] [rbp-70h] BYREF

  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v9, (__int64)a2, 2, v4, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v9, v5);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) != 4 )
    ADAPTER_RENDER::DestroyDevice(this, a2, (struct COREDEVICEACCESS *)v9);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  COREACCESS::~COREACCESS((COREACCESS *)v10);
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
}
