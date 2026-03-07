__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3,
        __int64 a4)
{
  InteractiveControlDevice *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  InteractiveControlDevice *v9; // r15
  int v10; // ebx
  InteractiveControlDevice *v11; // rdi
  int inserted; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v20 = (__int64)a2 + 280;
    v21 = (__int64)"InteractiveControlManager::OnDeviceAttach entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (__int64)this,
      byte_1C031F471,
      a3,
      a4,
      (void **)&v21,
      (unsigned __int16 **)&v20);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPoolZInit(400LL, 1819440195LL);
  v9 = v6;
  if ( !v6 )
  {
    v10 = -1073741670;
    goto LABEL_19;
  }
  v11 = InteractiveControlDevice::InteractiveControlDevice(v6);
  inserted = InteractiveControlDevice::Initialize(v11, a2);
  v10 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_1C0357150 <= 2 )
    {
LABEL_16:
      if ( v11 )
        InteractiveControlDevice::Deinitialize(v11);
      Win32FreePool(v9);
      goto LABEL_19;
    }
LABEL_7:
    LODWORD(v20) = inserted;
    v21 = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F148,
      v13,
      v14,
      (void **)&v21,
      (__int64)&v20);
    goto LABEL_16;
  }
  inserted = InteractiveControlManager::InsertDevice(this, (void **)v11);
  v10 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_1C0357150 <= 2 )
      goto LABEL_16;
    goto LABEL_7;
  }
  v15 = *((_QWORD *)a2 + 51);
  RIMUnlockExclusive(v15 + 104);
  InteractiveControlDevice::SetBackgroundAccessor(v11, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
  InteractiveControlDevice::SetFocus(v11, *(_QWORD *)this, *((unsigned int *)this + 2), 1LL);
  if ( !*((_DWORD *)this + 2) )
  {
    v16 = InteractiveControlDevice::SetComponentResolution(v11, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
    v10 = v16;
    if ( v16 < 0 && (unsigned int)dword_1C0357150 > 2 )
    {
      LODWORD(v20) = v16;
      v21 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357150,
        byte_1C031F148,
        v17,
        v18,
        (void **)&v21,
        (__int64)&v20);
    }
  }
  RIMLockExclusive(v15 + 104);
  if ( v10 < 0 )
    goto LABEL_16;
LABEL_19:
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v20) = v10;
    v21 = (__int64)"InteractiveControlManager::OnDeviceAttach exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      v7,
      v8,
      (void **)&v21,
      (__int64)&v20);
  }
  return (unsigned int)v10;
}
