__int64 __fastcall InteractiveControlManager::SetDeviceComponentResolution(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  __int64 *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rcx
  int v14; // eax
  unsigned int v15; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v18) = a4;
    v17 = (__int64)"InteractiveControlManager::SetDeviceComponentResolution entry";
    v15 = a3;
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      (unsigned int)&unk_1C031F229,
      a3,
      a4,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v18);
  }
  v10 = (__int64 *)(a1 + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *(_DWORD *)(v12 + 8)) )
    {
      v14 = InteractiveControlDevice::SetComponentResolution(v12, a3, a4, a5);
      v5 = v14;
      if ( v14 < 0 && (unsigned int)dword_1C0357150 > 2 )
      {
        LODWORD(v18) = v14;
        v17 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_1C0357150,
          (__int64)&v17,
          (__int64)&v18);
      }
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 && a3 == 3 )
    *(_DWORD *)(a1 + 28) = a4;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v18) = v5;
    v17 = (__int64)"InteractiveControlManager::SetDeviceComponentResolution exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0357150,
      (__int64)&v17,
      (__int64)&v18);
  }
  return v5;
}
