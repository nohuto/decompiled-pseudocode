char __fastcall KiIsNodeFull(_WORD *a1)
{
  unsigned __int16 v1; // dx
  unsigned __int64 v2; // rax

  v1 = 0;
  if ( !KiSubNodeCount )
    return 1;
  while ( 1 )
  {
    if ( *(_WORD *)(KiSubNodeConfigBlock + 24LL * v1 + 2) == *a1 )
    {
      v2 = *(_QWORD *)(KiSubNodeConfigBlock + 24LL * v1 + 16)
         - ((*(_QWORD *)(KiSubNodeConfigBlock + 24LL * v1 + 16) >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v2 & 0x3333333333333333LL)
                           + ((v2 >> 2) & 0x3333333333333333LL)
                           + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < *(unsigned __int8 *)(KiSubNodeConfigBlock + 24LL * v1 + 4) )
        break;
    }
    if ( ++v1 >= (unsigned __int16)KiSubNodeCount )
      return 1;
  }
  return 0;
}
