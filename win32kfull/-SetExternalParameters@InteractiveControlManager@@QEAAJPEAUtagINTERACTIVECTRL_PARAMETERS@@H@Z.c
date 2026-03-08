/*
 * XREFs of ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C0244330
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0244204 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C02478B0 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlManager::SetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v12) = a3;
    v13 = (__int64)"InteractiveControlManager::SetExternalParameters entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F1B0,
      a3,
      a4,
      (void **)&v13,
      (__int64)&v12);
  }
  if ( a2 )
  {
    v8 = *(_DWORD *)a2;
    *((_DWORD *)this + 25) = *(_DWORD *)a2;
    v9 = InteractiveControlManager::SetDeviceHapticsMode((__int64)this, (int)a2, v8 == 0, a4);
    v7 = v9;
    if ( v9 < 0 && (unsigned int)dword_1C0357150 > 2 )
    {
      LODWORD(v12) = v9;
      v13 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357150,
        byte_1C031F148,
        a3,
        a4,
        (void **)&v13,
        (__int64)&v12);
    }
    if ( v4 )
    {
      v10 = InteractiveControlSettings::WriteSettings((InteractiveControlManager *)((char *)this + 84));
      v7 = v10;
      if ( v10 < 0 && (unsigned int)dword_1C0357150 > 2 )
      {
        LODWORD(v12) = v10;
        v13 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357150,
          byte_1C031F148,
          a3,
          a4,
          (void **)&v13,
          (__int64)&v12);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v12) = v7;
    v13 = (__int64)"InteractiveControlManager::SetExternalParameters exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      a3,
      a4,
      (void **)&v13,
      (__int64)&v12);
  }
  return v7;
}
