/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x14034C364
 * Callers:
 *     MiRelocateImageAgain @ 0x1406A160C (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x14075BBE8 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x1407D20C4 (MiMarkSharedImageCfgBits.c)
 *     MiAllowImageMap @ 0x1407D35A0 (MiAllowImageMap.c)
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
