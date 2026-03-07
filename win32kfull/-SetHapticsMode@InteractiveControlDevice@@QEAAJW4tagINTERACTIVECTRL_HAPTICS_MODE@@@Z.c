__int64 __fastcall InteractiveControlDevice::SetHapticsMode(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned __int16 v5; // bp
  __int64 v6; // rcx
  SimpleHapticsController *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v5 = 2;
  if ( !a2
    && !*(_DWORD *)(a1 + 64)
    && !*((_DWORD *)InteractiveControlManager::Instance(a1) + 21)
    && *((_DWORD *)InteractiveControlManager::Instance(v6) + 25) )
  {
    v5 = 3;
  }
  v7 = *(SimpleHapticsController **)(a1 + 384);
  if ( v7 )
  {
    v8 = SimpleHapticsController::SetAutoTriggerWaveform(v7, v5);
    v2 = v8;
    if ( v8 >= 0 )
    {
      *(_DWORD *)(a1 + 60) = a2;
    }
    else if ( (unsigned int)dword_1C0357150 > 2 )
    {
      LODWORD(v13) = v8;
      v12 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357150,
        byte_1C031F148,
        v9,
        v10,
        (void **)&v12,
        (__int64)&v13);
    }
  }
  return v2;
}
