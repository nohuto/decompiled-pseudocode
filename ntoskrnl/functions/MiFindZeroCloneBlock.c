unsigned __int64 __fastcall MiFindZeroCloneBlock(__int64 a1, int a2)
{
  unsigned __int64 i; // r8

  for ( i = *(_QWORD *)(a1 + 24); ; i += 32LL )
  {
    if ( i > *(_QWORD *)(a1 + 32) )
      return 0LL;
    if ( ((*(_QWORD *)(i + 16) >> 55) & 0x1F) == a2 && *(_QWORD *)(i + 24) != -1LL )
      break;
  }
  return i;
}
