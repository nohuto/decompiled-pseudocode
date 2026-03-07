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
