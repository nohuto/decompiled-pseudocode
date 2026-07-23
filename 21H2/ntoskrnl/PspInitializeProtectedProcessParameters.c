/*
 * XREFs of PspInitializeProtectedProcessParameters @ 0x14079E118
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 *     PspInitPhase2 @ 0x140A4C134 (PspInitPhase2.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInitializeProtectedProcessParameters(__int64 a1)
{
  __int128 v2; // xmm1
  unsigned __int16 v3; // ax
  _WORD *PoolWithTag; // rax
  char *v5; // rbx
  __int64 v6; // rdx
  char *v7; // rbx

  *(_OWORD *)(a1 + 1000) = *(_OWORD *)(a1 + 1072);
  v2 = *(_OWORD *)(a1 + 1072);
  v3 = 2 * (*(_WORD *)(a1 + 1072) + 42);
  *(_WORD *)(a1 + 1016) = v3;
  v3 += 2;
  *(_WORD *)(a1 + 1018) = v3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x6C537350u);
  *(_QWORD *)(a1 + 1024) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = *(_QWORD *)L"Path=";
  PoolWithTag[4] = aPath[4];
  v5 = (char *)(PoolWithTag + 5);
  memmove(PoolWithTag + 5, *(const void **)(a1 + 1080), *(unsigned __int16 *)(a1 + 1072));
  v6 = *(unsigned __int16 *)(a1 + 1072);
  *(_OWORD *)&v5[v6] = *(_OWORD *)L"\\System32";
  *(_WORD *)&v5[v6 + 16] = aSystem32[8];
  *(_WORD *)&v5[v6 + 18] = 0;
  *(_OWORD *)&v5[v6 + 20] = *(_OWORD *)L"SystemDrive=";
  *(_QWORD *)&v5[v6 + 36] = *(_QWORD *)L"ive=";
  *(_DWORD *)&v5[v6 + 44] = **((_DWORD **)&v2 + 1);
  *(_WORD *)&v5[v6 + 48] = 0;
  *(_OWORD *)&v5[v6 + 50] = *(_OWORD *)L"SystemRoot=";
  *(_DWORD *)&v5[v6 + 66] = *(_DWORD *)L"ot=";
  *(_WORD *)&v5[v6 + 70] = aSystemroot_9[10];
  v7 = &v5[v6];
  memmove(v7 + 72, *(const void **)(a1 + 1080), *(unsigned __int16 *)(a1 + 1072));
  *(_DWORD *)&v7[*(unsigned __int16 *)(a1 + 1072) + 72] = 0;
  return 0LL;
}
