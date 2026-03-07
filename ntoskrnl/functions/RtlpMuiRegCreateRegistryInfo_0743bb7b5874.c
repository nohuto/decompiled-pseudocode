_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(256LL, 168LL, 1920232557LL);
  if ( !result )
    return 0LL;
  *result |= 0x400u;
  return result;
}
