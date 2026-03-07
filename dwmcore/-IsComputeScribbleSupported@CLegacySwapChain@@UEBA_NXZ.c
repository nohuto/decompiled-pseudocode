char __fastcall CLegacySwapChain::IsComputeScribbleSupported(CLegacySwapChain *this)
{
  __int64 v2; // r8
  char *v3; // rcx

  if ( *((_QWORD *)this - 38) )
  {
    v3 = (char *)this + *(int *)(*((_QWORD *)this - 53) + 12LL) - 424;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 24LL))(v3) || *((_DWORD *)this - 23) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v2 = 4LL;
        goto LABEL_16;
      }
    }
    else if ( *((_DWORD *)this - 29) >= 2u )
    {
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks || *((_DWORD *)this - 28) )
        return 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v2 = 12LL;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v2 = 13LL;
      goto LABEL_16;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v2 = 11LL;
LABEL_16:
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v2);
  }
  return 0;
}
