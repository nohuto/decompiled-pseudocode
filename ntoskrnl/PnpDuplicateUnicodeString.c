/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1403C2368
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x140842090 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x1408748EC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140875E34 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408766D8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryDriverNode @ 0x140878BA8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *StringRoutine; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    StringRoutine = (void *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a2 + 2));
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return (char)StringRoutine;
    memmove(StringRoutine, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  LOBYTE(StringRoutine) = 1;
  return (char)StringRoutine;
}
