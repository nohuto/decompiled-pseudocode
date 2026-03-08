/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180209960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18019B344 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1802086B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  CComposition *v5; // rbx
  int v7; // r14d
  int ManipulationManager; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  int v13; // ebx
  __int64 v14; // rsi
  int updated; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  int v23; // [rsp+58h] [rbp-18h] BYREF
  struct CManipulationManager *v24; // [rsp+60h] [rbp-10h] BYREF
  __int64 v25; // [rsp+68h] [rbp-8h] BYREF
  int v26; // [rsp+A0h] [rbp+30h] BYREF

  v5 = *(CComposition **)(a1 - 48);
  v24 = 0LL;
  v7 = a4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  ManipulationManager = CComposition::GetManipulationManager(v5, &v24);
  v12 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ManipulationManager, 0x2B2u, 0LL);
  }
  else
  {
    v13 = a5;
    v14 = a1 - 64;
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v11, v14, a2, a3, v7, a5);
    v12 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x2B9u, 0LL);
    }
    else
    {
      if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v26 = v13;
        v21 = v7;
        v22 = a3;
        v23 = a2;
        v25 = v14;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          byte_18037C3A9,
          v18,
          v19,
          (__int64)&v25,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v26);
      }
      if ( dword_1803E2F50 )
        SetEvent(CManipulationManager::s_rghWaitEvents);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  return v12;
}
