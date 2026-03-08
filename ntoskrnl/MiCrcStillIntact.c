/*
 * XREFs of MiCrcStillIntact @ 0x140210E18
 * Callers:
 *     MiRelinkDeferredCrcEntries @ 0x140229494 (MiRelinkDeferredCrcEntries.c)
 * Callees:
 *     MiMakeCombineCandidateClean @ 0x140210FE0 (MiMakeCombineCandidateClean.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiVadSupportsCombine @ 0x1402285E0 (MiVadSupportsCombine.c)
 *     MiActivePageCombineCandidate @ 0x1402296F4 (MiActivePageCombineCandidate.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  int v15; // r11d
  __int64 v16; // rax
  int v18; // ecx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[23]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a4 + 16);
  memset(v21, 0, sizeof(v21));
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = MI_READ_PTE_LOCK_FREE(v9);
  if ( (v20 & 1) == 0 )
    return 0LL;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v11 = 0;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( !(unsigned int)MiCombineCandidate(a1, a3, v10) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v13 = *(_BYTE *)(v10 + 34) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 != 6 )
    return 0LL;
  if ( !(unsigned int)MiActivePageCombineCandidate(0x7FFFFFFFFFFFFFFFLL, v12, v10, v9) )
    return 0LL;
  v16 = 0LL;
  if ( v15 == 1 )
  {
    v16 = MiVadSupportsCombine(v14, v5);
    if ( !v16 )
      return 0LL;
  }
  if ( a5 == 2 )
  {
    if ( (v20 & 0x42) != 0 )
    {
      MiMakeCombineCandidateClean(v9, v16);
      return 1LL;
    }
    return 0LL;
  }
  if ( a5 != 3 )
    return 1LL;
  LODWORD(v21[0]) = MiTbFlushType(a2);
  WORD2(v21[0]) = 0;
  v21[2] = 0LL;
  LODWORD(v21[1]) = 20;
  v21[3] = 0LL;
  LOBYTE(v11) = (unsigned int)MiClearPteAccessed(v18, v10, v9, (unsigned int)v21, dword_140C67C68, 0) != 0;
  return v11;
}
