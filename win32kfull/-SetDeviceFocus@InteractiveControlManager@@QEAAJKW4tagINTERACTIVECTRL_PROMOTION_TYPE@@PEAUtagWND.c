/*
 * XREFs of ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C00151C8
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C00150A0 (NtUserSetInteractiveControlFocus.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C02495D4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0243120 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

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
