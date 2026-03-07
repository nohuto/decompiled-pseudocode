void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  struct InkDevice *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v7; // rcx
  InkProcessor *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct InkDevice *v11; // rax
  char *v12; // rcx
  struct InkDevice *v13; // [rsp+50h] [rbp-10h] BYREF
  const char *v14; // [rsp+58h] [rbp-8h] BYREF
  struct InkDevice *v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  char *v17; // [rsp+98h] [rbp+38h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v15 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v7, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 32));
      InkProcessor::UnlinkAndReleaseInkDevice(v8, &v15);
      if ( (unsigned int)dword_1C03570E0 > 4 )
      {
        v11 = v15;
        v16 = (__int64)a2;
        if ( v15 )
          v12 = (char *)v15 + 32;
        else
          v12 = 0LL;
        LODWORD(v15) = 0;
        v13 = v11;
        v14 = "Ink device removed";
        v17 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v12,
          byte_1C031EFBD,
          v9,
          v10,
          (__int64)&v15,
          (void **)&v14,
          (__int64)&v13,
          (__int64)&v17,
          (__int64)&v16);
      }
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    LODWORD(v15) = -1073741823;
    v16 = (__int64)"Ink processor not enabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v4,
      v5,
      (__int64)&v15,
      (void **)&v16);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
