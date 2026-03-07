bool Register_GetExtendedTBCTRBStatusSupported()
{
  __int64 v0; // rcx

  return (unsigned __int8)Register_GetExtendedTBCEnable() && (*(_DWORD *)(v0 + 108) & 0x80) != 0;
}
