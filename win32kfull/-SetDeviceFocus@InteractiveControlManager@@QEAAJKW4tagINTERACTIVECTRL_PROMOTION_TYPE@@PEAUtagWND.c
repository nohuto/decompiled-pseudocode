__int64 __fastcall InteractiveControlManager::SetDeviceFocus(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v13 = a4;
    v14[0] = (__int64)"InteractiveControlManager::SetDeviceFocus entry";
    LODWORD(v15) = a3;
    v12 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      a1,
      (unsigned int)&unk_1C031F36E,
      a3,
      a4,
      (__int64)v14,
      (__int64)&v12,
      (__int64)&v15,
      (__int64)&v13);
  }
  v8 = (__int64 *)(a1 + 40);
  v9 = 5LL;
  do
  {
    v10 = *v8;
    if ( *v8 && (!a2 || a2 == *(_DWORD *)(v10 + 8)) )
      InteractiveControlDevice::SetFocus(v10, a4, a3, 1LL);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( !a2 )
  {
    v14[0] = a1;
    v14[1] = a4;
    HMAssignmentLock(v14, 0LL);
    *(_DWORD *)(a1 + 8) = a3;
  }
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v15) = 0;
    v14[0] = (__int64)"InteractiveControlManager::SetDeviceFocus exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0357150,
      (__int64)v14,
      (__int64)&v15);
  }
  return 0LL;
}
