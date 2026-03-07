char __fastcall UsbhValidateMsOs20DescriptorSetHeader(__int64 a1, _DWORD *a2, _WORD *a3)
{
  if ( (*a2 & 2) != 0 )
  {
    Log(a1, 256, 1447318320, 0LL, 0LL);
    return 0;
  }
  if ( *a3 != 10 )
  {
    Log(a1, 256, 1447318321, (unsigned __int16)*a3, 0LL);
    return 0;
  }
  *a2 |= 2u;
  return 1;
}
