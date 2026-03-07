char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
