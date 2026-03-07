char __fastcall DXGADAPTER::IsGpuVirtualAddressingSupported(DXGADAPTER *this)
{
  char v1; // cl
  unsigned __int8 IsGpuVaIoMmuSupported; // al

  if ( (*((_DWORD *)this + 571) & 0x40) != 0 )
    return 1;
  IsGpuVaIoMmuSupported = DXGADAPTER::IsGpuVaIoMmuSupported(this);
  v1 = 0;
  if ( IsGpuVaIoMmuSupported )
    return 1;
  return v1;
}
