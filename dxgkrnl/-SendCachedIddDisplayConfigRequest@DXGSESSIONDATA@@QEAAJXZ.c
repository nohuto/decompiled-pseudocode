__int64 __fastcall DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(DXGSESSIONDATA *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v5; // esi
  signed int MessageId; // eax
  ReferenceCounted *v7; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v8[8]; // [rsp+50h] [rbp-31h] BYREF
  char v9; // [rsp+58h] [rbp-29h]
  union _LARGE_INTEGER v10; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-19h] BYREF
  _PORT_MESSAGE v12[2]; // [rsp+78h] [rbp-9h] BYREF

  v2 = 0;
  v7 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONDATA *)((char *)this + 19024), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v3 = *((_QWORD *)this + 2385);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v7, *((ReferenceCounted **)this + 2385));
    v5 = *((_DWORD *)this + 4768);
    if ( v9 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
    v10.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
    memset(v12, 0, 0x48uLL);
    v11 = 72LL;
    MessageId = DispBrokerClient::SendDisplayBrokerMessage(
                  (DXGSESSIONDATA *)((char *)this + 18968),
                  0x120000u,
                  (struct _PORT_MESSAGE *)(((unsigned __int64)v7 + 16) & -(__int64)(v7 != 0LL)),
                  0LL,
                  v12,
                  &v11,
                  0LL,
                  &v10);
    if ( MessageId == 192 )
    {
      v2 = -1073741749;
      WdLogSingleEntry2(3LL, *(unsigned int *)this, -1073741749LL);
    }
    else
    {
      if ( MessageId >= 0 )
      {
        MessageId = v12[1].MessageId;
        if ( (v12[1].MessageId & 0x80000000) == 0 )
        {
          DXGSESSIONDATA::SetDisplayConfigDone(this, v5);
          MessageId = v12[1].MessageId;
        }
      }
      v2 = MessageId;
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, *(unsigned int *)this);
    if ( v9 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  }
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v7, 0LL);
  return v2;
}
