/*
 * XREFs of PspInitializeProtectedProcessParameters @ 0x14084AAB4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 *     PspInitPhase2 @ 0x140B64880 (PspInitPhase2.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspInitializeProtectedProcessParameters(__int64 a1)
{
  __int128 v2; // xmm1
  unsigned __int16 v3; // ax
  __int64 Pool2; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx

  *(_OWORD *)(a1 + 1000) = *(_OWORD *)(a1 + 1264);
  v2 = *(_OWORD *)(a1 + 1264);
  v3 = 2 * (*(_WORD *)(a1 + 1264) + 42);
  *(_WORD *)(a1 + 1016) = v3;
  v3 += 2;
  *(_WORD *)(a1 + 1018) = v3;
  Pool2 = ExAllocatePool2(256LL, v3, 1817408336LL);
  *(_QWORD *)(a1 + 1024) = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = *(_QWORD *)L"Path=";
  *(_WORD *)(Pool2 + 8) = aPath_0[4];
  v5 = Pool2 + 10;
  memmove((void *)(Pool2 + 10), *(const void **)(a1 + 1272), *(unsigned __int16 *)(a1 + 1264));
  v6 = *(unsigned __int16 *)(a1 + 1264);
  *(_OWORD *)(v6 + v5) = *(_OWORD *)L"\\System32";
  *(_WORD *)(v6 + v5 + 16) = aSystem32[8];
  *(_WORD *)(v6 + v5 + 18) = 0;
  *(_OWORD *)(v6 + v5 + 20) = *(_OWORD *)L"SystemDrive=";
  *(_QWORD *)(v6 + v5 + 36) = *(_QWORD *)L"ive=";
  *(_DWORD *)(v6 + v5 + 44) = **((_DWORD **)&v2 + 1);
  *(_WORD *)(v6 + v5 + 48) = 0;
  *(_OWORD *)(v6 + v5 + 50) = *(_OWORD *)L"SystemRoot=";
  *(_DWORD *)(v6 + v5 + 66) = *(_DWORD *)L"ot=";
  *(_WORD *)(v6 + v5 + 70) = aSystemroot_9[10];
  v7 = v6 + v5;
  memmove((void *)(v7 + 72), *(const void **)(a1 + 1272), *(unsigned __int16 *)(a1 + 1264));
  *(_DWORD *)(v7 + *(unsigned __int16 *)(a1 + 1264) + 72) = 0;
  return 0LL;
}
