void __fastcall CSuperWetInkManager::SetActiveSource(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::VailSuperWetStroke *a2)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)a2 != *((_QWORD *)this + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0pp_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_SOURCEACTIVE, *(_QWORD *)a2);
    v4 = *(_QWORD *)a2;
    *((_QWORD *)this + 1) = *(_QWORD *)a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 312LL))(v4);
  }
}
