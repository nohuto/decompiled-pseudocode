/*
 * XREFs of KiGetDueTimeWithThreadTimerDelay @ 0x140577DA8
 * Callers:
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetDueTimeWithThreadTimerDelay(__int64 a1, int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax

  if ( a4 )
    *a4 = 0;
  if ( a2 == 2 )
  {
    v4 = *(unsigned int *)(a1 + 952);
    if ( *(_BYTE *)(a1 + 391) )
    {
      if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
      {
        if ( a4 )
          *a4 = 1;
        if ( (_DWORD)v4 )
          a3 += v4;
      }
    }
  }
  return a3;
}
