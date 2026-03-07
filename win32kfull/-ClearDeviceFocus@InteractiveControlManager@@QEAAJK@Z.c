__int64 __fastcall InteractiveControlManager::ClearDeviceFocus(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v11) = a2;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v11) = 0;
    v12 = (__int64)"InteractiveControlManager::ClearDeviceFocus entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F10E,
      a3,
      a4,
      (void **)&v12,
      (__int64)&v11);
  }
  v5 = (_QWORD *)((char *)this + 40);
  v6 = 5LL;
  do
  {
    if ( *v5 )
      InteractiveControlDevice::SetFocus(*v5, 0LL, 0LL, 1LL);
    ++v5;
    --v6;
  }
  while ( v6 );
  v10[1] = 0LL;
  v10[0] = this;
  HMAssignmentLock(v10, 0LL);
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v11) = 0;
    v12 = (__int64)"InteractiveControlManager::ClearDeviceFocus exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      v7,
      v8,
      (void **)&v12,
      (__int64)&v11);
  }
  return 0LL;
}
