/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1402FA0C4
 * Callers:
 *     MiAllowImageMap @ 0x14061DE10 (MiAllowImageMap.c)
 *     MmGetSectionInformation @ 0x140621350 (MmGetSectionInformation.c)
 *     MiMarkSharedImageCfgBits @ 0x140636D24 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x14066A340 (MiMarkPrivateImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x14066A858 (MiRelocateImageAgain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( result )
    result += 72LL;
  return result;
}
