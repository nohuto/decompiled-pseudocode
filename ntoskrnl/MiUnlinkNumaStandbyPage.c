/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x1402C77BC
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403BE8B8 (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkStandbyPage @ 0x140464E9A (MiUnlinkStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetNextStandbyPageSameNodeNoLockAsserts @ 0x140287AE0 (MiSetNextStandbyPageSameNodeNoLockAsserts.c)
 *     MiPfnToStandbyLookaside @ 0x140288780 (MiPfnToStandbyLookaside.c)
 *     MiSetPfnNodeBlinkLow @ 0x1402DF430 (MiSetPfnNodeBlinkLow.c)
 */

signed __int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  signed __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  MiPfnToStandbyLookaside(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, (__int64 *)&v8);
  v2 = *(unsigned int *)(a1 + 36);
  v3 = ((unsigned __int64)(v2 & 0x1FFFFF) << 19) | (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL;
  v4 = (8 * (v2 & 0xFFFFFFFFFFE00000uLL)) | (((*(_QWORD *)a1 >> 20) | *(_QWORD *)(a1 + 40) & 0xF80000000000000uLL) >> 20);
  result = v8;
  v6 = *(_QWORD *)(v8 + 16) + 25408LL * DWORD2(v8) + 88 * (DWORD2(v9) + 8LL * HIDWORD(v9) + 37);
  if ( v4 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v6 + 24) = v3;
  }
  else
  {
    v7 = 48 * v4 - 0x220000000000LL;
    MiSetPfnNodeBlinkLow(v7, v3);
    result = *(_DWORD *)(v7 + 36) & 0xFFE00000;
    *(_DWORD *)(v7 + 36) = result | (v3 >> 19);
  }
  if ( v3 == 0x3FFFFFFFFFLL )
    *(_QWORD *)(v6 + 16) = v4;
  else
    result = MiSetNextStandbyPageSameNodeNoLockAsserts(48 * v3 - 0x220000000000LL, v4);
  _InterlockedDecrement64((volatile signed __int64 *)v6);
  return result;
}
