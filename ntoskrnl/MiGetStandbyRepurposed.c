/*
 * XREFs of MiGetStandbyRepurposed @ 0x1403601DC
 * Callers:
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402F71FC (MmQuerySystemWorkingSetInformation.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140356350 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x14035FE9C (MiComputeSystemTrimCriteria.c)
 *     MiWorkingSetVeryLarge @ 0x140619F94 (MiWorkingSetVeryLarge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyRepurposed(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 6888);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
