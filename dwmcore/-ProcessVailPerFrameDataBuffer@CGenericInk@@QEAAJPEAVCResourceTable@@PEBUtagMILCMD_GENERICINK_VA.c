__int64 __fastcall CGenericInk::ProcessVailPerFrameDataBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER *a3)
{
  unsigned int v5; // edx
  struct CCrossContainerGuestReadWriteSharedSection *Resource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CCrossContainerGuestReadWriteSharedSection *)CResourceTable::GetResource((__int64)a2, v5, 0x30u);
    if ( !Resource )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    CSuperWetSource::ProcessVailPerFrameDataBuffer(this, Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4));
  }
  return 0LL;
}
