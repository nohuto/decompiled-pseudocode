__int64 __fastcall CComposition::ProcessPartitionCommand(
        CComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx

  v3 = 0;
  *a3 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 5:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
        McTemplateU0q_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_CHANNEL_OPENED_FOR_PROCESS,
          *((unsigned int *)a2 + 5));
      v11 = CComposition::OpenChannel(this, *((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), *((_QWORD *)a2 + 3));
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1B8u, 0LL);
      break;
    case 6:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
        McTemplateU0q_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_CHANNEL_CLOSED_FOR_PROCESS,
          *((unsigned int *)a2 + 5));
      v13 = CComposition::CloseChannel(this, *((_DWORD *)a2 + 4));
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1C5u, 0LL);
      break;
    case 7:
      v9 = CComposition::ProcessDataOnChannel(this, a2, a3);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1BCu, 0LL);
      break;
    case 8:
      v6 = (*(__int64 (__fastcall **)(CComposition *))(*(_QWORD *)this + 96LL))(this);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1C0u, 0LL);
      break;
  }
  return v3;
}
