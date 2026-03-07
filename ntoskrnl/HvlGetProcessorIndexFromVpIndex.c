__int64 __fastcall HvlGetProcessorIndexFromVpIndex(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  char v4; // di
  ULONG ActiveProcessorCount; // eax
  unsigned __int8 *i; // rcx

  v1 = 0;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  v3 = a1 >> 6;
  v4 = a1 & 0x3F;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0LL;
  for ( i = HvlpVirtualProcessorMapping; *i != (_BYTE)v3 || i[1] != v4; i += 2 )
  {
    if ( ++v1 >= ActiveProcessorCount )
      return 0LL;
  }
  return v1;
}
