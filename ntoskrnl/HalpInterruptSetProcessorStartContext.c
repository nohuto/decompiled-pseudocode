/*
 * XREFs of HalpInterruptSetProcessorStartContext @ 0x140371C70
 * Callers:
 *     HalpSetupRealModeResume @ 0x1404120A0 (HalpSetupRealModeResume.c)
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KeForceEnableNx @ 0x140A868E0 (KeForceEnableNx.c)
 */

__int64 __fastcall HalpInterruptSetProcessorStartContext(__int64 a1, const void *a2, char a3)
{
  int v4; // ecx

  if ( a2 )
    memmove((char *)HalpInterruptGlobalStartupBlock + 144, a2, 0x5C0uLL);
  v4 = (unsigned __int8)KeForceEnableNx() != 0;
  if ( HalpInterruptProcessorHidden )
    v4 |= 4u;
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 2) = v4;
  if ( a3 )
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 11) = HalpBlkTiledMemoryMapPa;
  else
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 11) = (unsigned int)dword_140C61C5C;
  return 0LL;
}
