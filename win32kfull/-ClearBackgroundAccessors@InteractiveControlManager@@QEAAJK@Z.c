/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C02431E0
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C02495D4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C0248DD8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearBackgroundAccessors(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  InteractiveControlDevice **v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v11) = a2;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v11) = 0;
    v12 = (__int64)"InteractiveControlManager::ClearBackgroundAccessors entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F10E,
      a3,
      a4,
      (void **)&v12,
      (__int64)&v11);
  }
  v5 = (InteractiveControlDevice **)((char *)this + 40);
  v6 = 5LL;
  do
  {
    if ( *v5 )
      InteractiveControlDevice::SetBackgroundAccessor(*v5, 0LL, 0);
    ++v5;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)this + 6) = 0;
  v10[1] = 0LL;
  v10[0] = (char *)this + 16;
  HMAssignmentLock(v10, 0LL);
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v11) = 0;
    v12 = (__int64)"InteractiveControlManager::ClearBackgroundAccessors exit";
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
