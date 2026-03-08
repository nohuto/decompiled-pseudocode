/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x140356350
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x140360B80 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetStandbyRepurposed @ 0x1403601DC (MiGetStandbyRepurposed.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned int StandbyRepurposed; // eax
  unsigned int v9; // r10d
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 824) && !*(_DWORD *)(a1 + 1184) )
  {
    v1 = *(_QWORD *)(a1 + 17040);
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
    v6 = v1 >> 2;
    v7 = AvailablePagesBelowPriority;
    if ( *(_QWORD *)(v5 + 17824) < 3 * v6 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v6) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(v5, 1LL, v3, v4);
      if ( (v9 < StandbyRepurposed ? StandbyRepurposed - v9 : 0) < v7 >> 2 )
        return 1;
    }
  }
  return result;
}
