__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( a1 < 0xFFFF800000000000uLL )
    return 32LL;
  v1 = byte_140C6A058[((a1 >> 39) & 0x1FF) - 256];
  if ( v1 == 5 )
    return 0LL;
  result = 32LL;
  if ( v1 == 6 )
    return 1LL;
  return result;
}
