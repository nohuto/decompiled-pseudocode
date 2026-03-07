void __fastcall ADAPTER_RENDER::NotifyProcessFreeze(DXGADAPTER **this, struct DXGPROCESS *a2)
{
  struct DXGADAPTER *v4; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-C8h] BYREF
  DXGADAPTER *v6; // [rsp+28h] [rbp-C0h]
  char v7; // [rsp+30h] [rbp-B8h]
  _BYTE v8[144]; // [rsp+40h] [rbp-A8h] BYREF

  if ( !DXGADAPTER::IsDxgmms2(this[2]) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v8, v4, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v8, 0LL) < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
      return;
    }
    ADAPTER_RENDER::PurgeSegments(this, 25LL, a2);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
  }
  v6 = this[2];
  v7 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v5);
  if ( *((_DWORD *)this[2] + 50) == 1 )
    (*(void (__fastcall **)(DXGADAPTER *))(*((_QWORD *)this[95] + 1) + 1088LL))(this[96]);
  if ( v7 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v5);
}
