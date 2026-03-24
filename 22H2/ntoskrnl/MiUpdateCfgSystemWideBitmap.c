/*
 * XREFs of MiUpdateCfgSystemWideBitmap @ 0x14066A9FC
 * Callers:
 *     MiRelocateImageAgain @ 0x14066A858 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140702D80 (MiRelocateImage.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140637780 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiGetImageWowSubsystemIndex @ 0x14066B044 (MiGetImageWowSubsystemIndex.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmap(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( *((_DWORD *)a1 + 22) == -1 || (a1[7] & 0x10000000) != 0 )
    return 0LL;
  v5 = 2 * (a2 >> 4);
  v6 = 2 * ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >> 4);
  v7 = 0;
  do
  {
    v8 = qword_140C4CC20;
    if ( !v7 && (*(_BYTE *)(v4 + 14) & 0x40) != 0 )
      v8 = *((_QWORD *)&unk_140C4CBB8 + 8 * (unsigned __int64)(unsigned int)MiGetImageWowSubsystemIndex(v4));
    result = MiUpdateCfgSystemWideBitmapWorker(v8, a3, v5, v6);
    if ( (int)result < 0 )
      break;
    ++v7;
    if ( !a3 )
      break;
  }
  while ( v7 < 1 );
  return result;
}
