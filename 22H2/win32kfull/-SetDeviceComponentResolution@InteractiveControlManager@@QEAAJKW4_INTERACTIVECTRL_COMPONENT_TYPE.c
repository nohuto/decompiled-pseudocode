/*
 * XREFs of ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0252594
 * Callers:
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C0201C30 (NtUserSetInteractiveCtrlRotationAngle.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C02510F4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C0251260 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0257798 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceComponentResolution(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( (unsigned int)dword_1C032A2F8 > 4 )
  {
    v16 = a2;
    v17 = (__int64)"InteractiveControlManager::SetDeviceComponentResolution entry";
    LODWORD(v18) = a4;
    v15 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      byte_1C02F3191,
      a3,
      a4,
      (void **)&v17,
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
      v13 = InteractiveControlDevice::SetComponentResolution(v12, v7, v6, a5);
      v5 = v13;
      if ( v13 < 0 && (unsigned int)dword_1C032A2F8 > 2 )
      {
        LODWORD(v18) = v13;
        v17 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C032A2F8,
          byte_1C02F30B0,
          a3,
          a4,
          (void **)&v17,
          (__int64)&v18);
      }
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 && v7 == 3 )
    *(_DWORD *)(a1 + 28) = v6;
  if ( (unsigned int)dword_1C032A2F8 > 4 )
  {
    LODWORD(v18) = v5;
    v17 = (__int64)"InteractiveControlManager::SetDeviceComponentResolution exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032A2F8,
      byte_1C02F303D,
      a3,
      a4,
      (void **)&v17,
      (__int64)&v18);
  }
  return v5;
}
