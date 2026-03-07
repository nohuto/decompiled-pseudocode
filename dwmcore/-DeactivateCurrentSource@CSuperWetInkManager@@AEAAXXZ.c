void __fastcall CSuperWetInkManager::DeactivateCurrentSource(struct CSuperWetSource **this)
{
  CSuperWetInkManager *v2; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v3; // rdi
  struct IMonitorTarget *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( this[1] )
  {
    if ( !(unsigned __int8)IsSuperWetInkCompatibleVailContainer() )
    {
      v3 = CSuperWetInkManager::TryLookupDataForSource((CSuperWetInkManager *)this, this[1]);
      v4 = (struct IMonitorTarget *)*((_QWORD *)v3 + 1);
      if ( v4 )
      {
        CSuperWetInkManager::TurnOffScribblingForTarget(v2, v4);
        v5 = *((_QWORD *)v3 + 1);
        *((_QWORD *)v3 + 1) = 0LL;
        if ( v5 )
        {
          v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0p_EventWriteTransfer((__int64)v2, &EVTDESC_COMPUTESCRIBBLE_DROPSOURCE, (__int64)this[1]);
    (*(void (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)this[1] + 320LL))(this[1]);
    this[1] = 0LL;
  }
}
