/*
 * XREFs of KiProcessProfileList @ 0x140571EC4
 * Callers:
 *     KeProfileInterruptWithSource @ 0x140571A20 (KeProfileInterruptWithSource.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall KiProcessProfileList(__int64 a1, int a2, unsigned __int16 *a3)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int16 *i; // rbx
  unsigned __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  for ( i = *(unsigned __int16 **)a3; i != a3; i = *(unsigned __int16 **)i )
  {
    result = (unsigned int)(__int16)i[300];
    if ( (_DWORD)result == a2 )
    {
      if ( *(i - 4) == 17 )
      {
        result = (*((__int64 (__fastcall **)(__int64, _QWORD))i + 3))(a1, *((_QWORD *)i + 4));
      }
      else
      {
        result = KeCheckProcessorAffinityEx(i + 32, CurrentPrcb->Number);
        if ( (_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 360);
          v9 = *((_QWORD *)i + 3);
          if ( result >= v9 && result < *((_QWORD *)i + 4) )
          {
            result = *((_QWORD *)i + 6) + (((result - v9) >> *((_DWORD *)i + 10)) & 0xFFFFFFFC);
            _InterlockedIncrement((volatile signed __int32 *)result);
          }
        }
      }
    }
  }
  return result;
}
