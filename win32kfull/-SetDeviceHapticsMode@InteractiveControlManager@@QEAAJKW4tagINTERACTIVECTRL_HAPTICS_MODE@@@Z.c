/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0244204
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C0244330 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0242DEC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0249470 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  _QWORD *v7; // rdi
  __int64 v8; // r14
  int v9; // eax
  const char *v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v12) = a2;
  v4 = 0;
  v5 = a3;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v13) = 0;
    v11 = "InteractiveControlManager::SetDeviceHapticsMode entry";
    LODWORD(v12) = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F287,
      a3,
      a4,
      (void **)&v11,
      (__int64)&v13,
      (__int64)&v12);
  }
  v7 = (_QWORD *)(a1 + 40);
  v8 = 5LL;
  do
  {
    if ( *v7 )
    {
      v9 = InteractiveControlDevice::SetHapticsMode(*v7, v5);
      v4 = v9;
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
    }
    ++v7;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(a1 + 32) = v5;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v12) = v4;
    v13 = (__int64)"InteractiveControlManager::SetDeviceHapticsMode exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      a3,
      a4,
      (void **)&v13,
      (__int64)&v12);
  }
  return v4;
}
