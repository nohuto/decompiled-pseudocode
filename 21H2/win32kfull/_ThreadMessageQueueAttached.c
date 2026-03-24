/*
 * XREFs of _ThreadMessageQueueAttached @ 0x1C00FF8C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall ThreadMessageQueueAttached(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = 0;
  if ( gptiCurrent )
  {
    *(_DWORD *)(gptiCurrent + 1232LL) &= ~0x200u;
    if ( !(_DWORD)a1 )
    {
      LOBYTE(v1) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) > 1u;
      return v1;
    }
    v3 = PtiFromThreadId(a1);
    if ( v3 )
    {
      LOBYTE(v1) = *(_QWORD *)(gptiCurrent + 432LL) == *(_QWORD *)(v3 + 432);
      return v1;
    }
    UserSetLastError(87LL, v4, v5);
  }
  return 0LL;
}
