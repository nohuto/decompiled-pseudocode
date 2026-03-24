/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B1A30
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C02B5980 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C02B59A0 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DF14 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     STROBJ_bEnum @ 0x1C00CD0F0 (STROBJ_bEnum.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C013DC08 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C02BF530 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  STROBJ *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdi
  struct _GLYPHPOS *v14; // rax
  struct _GLYPHPOS *v15; // r14
  GLYPHDEF **p_pgdf; // rax
  __int64 v17; // rcx
  ULONG pc; // [rsp+20h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos[6]; // [rsp+28h] [rbp-30h] BYREF

  ppgpos[0] = 0LL;
  pc = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  ppgpos[2] = (PGLYPHPOS)ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage() )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0xFFFFFFFFLL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1);
  if ( !v10
    || (!a4 ? (v11 = STROBJ_bEnum(v10, &pc, ppgpos)) : (v11 = STROBJ_bEnumPositionsOnly(v10, &pc, ppgpos)),
        (v12 = v11, v11 == -1)
     || (v13 = pc, pc > 0x1A0AAA)
     || (v14 = (struct _GLYPHPOS *)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 24 * pc, 0),
         v15 = v14,
         (ppgpos[1] = v14) == 0LL)) )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0xFFFFFFFFLL;
  }
  memmove(v14, ppgpos[0], 24 * v13);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct _GLYPHPOS **)MmUserProbeAddress;
  *a3 = v15;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v13;
  if ( (_DWORD)v13 )
  {
    p_pgdf = &v15->pgdf;
    v17 = (unsigned int)v13;
    do
    {
      *p_pgdf = 0LL;
      p_pgdf += 3;
      --v17;
    }
    while ( v17 );
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v12;
}
