/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140214E24
 * Callers:
 *     MiRelocateImageAgain @ 0x1406AA700 (MiRelocateImageAgain.c)
 *     MiAllowImageMap @ 0x1406AF6A4 (MiAllowImageMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140747214 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A4470 (MiMarkPrivateImageCfgBits.c)
 *     MmGetSectionInformation @ 0x1407BA640 (MmGetSectionInformation.c)
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
