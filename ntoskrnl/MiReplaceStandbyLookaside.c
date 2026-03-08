/*
 * XREFs of MiReplaceStandbyLookaside @ 0x1402C6D1C
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiLockStandbyLookasidePage @ 0x140464910 (MiLockStandbyLookasidePage.c)
 *     MiLockStandbyOldestPage @ 0x14064E72C (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPfnToStandbyLookaside @ 0x140288780 (MiPfnToStandbyLookaside.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402C71E0 (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402C7240 (MiFindSuitableLookasideReplacement.c)
 *     MiPageStandbyLookasideStatus @ 0x1402C7560 (MiPageStandbyLookasideStatus.c)
 *     MiGetStandbyLookaside @ 0x140319E70 (MiGetStandbyLookaside.c)
 */

__int64 __fastcall MiReplaceStandbyLookaside(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rcx
  int i; // edi
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v6 = 48 * a1;
  result = MiPageStandbyLookasideStatus();
  if ( (_DWORD)result != 1 )
  {
    MiPfnToStandbyLookaside(v8, 0LL, (__int64 *)v13);
    for ( i = 0; i < 3; ++i )
    {
      result = MiGetStandbyLookaside(v13, (unsigned int)i);
      v10 = result;
      v11 = 0LL;
      v12 = (_QWORD *)result;
      while ( *v12 != a1 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v12;
        if ( (unsigned int)v11 >= 0x40 )
        {
          if ( (_DWORD)v11 == 64 )
            goto LABEL_9;
          break;
        }
      }
      if ( a2 != -1 || (result = MiFindSuitableLookasideReplacement(i, result, v11, v6, a3), !(_DWORD)result) )
        result = MiWriteStandbyLookasideEntry(v10 + 8 * v11, 3LL, a2);
LABEL_9:
      ;
    }
  }
  return result;
}
