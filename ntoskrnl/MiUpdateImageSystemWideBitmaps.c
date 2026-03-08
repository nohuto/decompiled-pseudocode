/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x1406A190C
 * Callers:
 *     MiRelocateImageAgain @ 0x1406A160C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmap @ 0x1406A1180 (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap((__int64 *)a1, a2, a3);
}
