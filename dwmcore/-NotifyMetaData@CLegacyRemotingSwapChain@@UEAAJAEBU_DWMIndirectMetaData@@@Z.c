__int64 __fastcall CLegacyRemotingSwapChain::NotifyMetaData(
        CLegacyRemotingSwapChain *this,
        const struct _DWMIndirectMetaData *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( *(_DWORD *)a2 == 4 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        (__int64)this,
        &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
        *((_QWORD *)a2 + 1),
        a2,
        1LL);
  }
  else if ( *(_DWORD *)a2 != 5 && *(_DWORD *)a2 != 6 && *(_DWORD *)a2 != 8 && (unsigned int)(*(_DWORD *)a2 - 9) >= 2 )
  {
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DWMIndirectMetaData *, __int64))(**((_QWORD **)this + 14) + 56LL))(
         *((_QWORD *)this + 14),
         a2,
         1LL);
  v2 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x90u, 0LL);
  return v2;
}
