void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  char *v6; // rdx
  _BYTE v7[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v8[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[88]; // [rsp+78h] [rbp-70h] BYREF

  if ( *((_QWORD *)this + 76) )
  {
    *((_BYTE *)this + 569) = 1;
    BLTQUEUE::IssueCommand(this);
    v5 = *((_QWORD *)this + 45);
    if ( v5 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v7, v5, 0, v4, 0);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 16LL)) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v6);
      BLTQUEUE::DestroyStagingBuffer(this);
      *((_QWORD *)this + 45) = 0LL;
      COREACCESS::~COREACCESS((COREACCESS *)v9);
      COREACCESS::~COREACCESS((COREACCESS *)v8);
    }
    if ( !a2 )
      *((_DWORD *)this + 239) = 0;
  }
}
