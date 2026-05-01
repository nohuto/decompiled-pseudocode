/*
 * XREFs of ?RemovePositioner@PositionerPriority@@UEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x180458260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PositionerPriority::RemovePositioner(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rbx

  v2 = a1 + 3;
  v3 = a2;
  AcquireSRWLockExclusive(a1 + 3);
  *((_BYTE *)&a1[4].Ptr + v3) = 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
