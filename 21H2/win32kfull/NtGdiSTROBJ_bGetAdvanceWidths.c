/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B59C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DF14 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C013DC08 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02BF560 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, ULONG a2, unsigned int a3, void *a4)
{
  __int64 v5; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  STROBJ *v10; // rdi
  POINTQF *v11; // rax
  POINTQF *v12; // r15
  unsigned int AdvanceWidths; // edi
  ULONG64 v14; // rax

  v5 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage() )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v10
    || (unsigned int)v5 > 0x271000
    || (v11 = (POINTQF *)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 16 * (int)v5, 0), (v12 = v11) == 0LL) )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v10, a2, v5, v11);
  if ( AdvanceWidths )
  {
    v14 = (ULONG64)a4 + 16 * v5;
    if ( v14 > MmUserProbeAddress || v14 <= (unsigned __int64)a4 || ((unsigned __int8)a4 & 7) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a4, v12, 16 * v5);
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return AdvanceWidths;
}
