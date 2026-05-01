/*
 * XREFs of ?ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z @ 0x1800616A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PositionerPriority::ContainsPositioner(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rbx
  unsigned int v5; // ebx

  v2 = a1 + 3;
  v3 = a2;
  AcquireSRWLockShared(a1 + 3);
  v5 = *((unsigned __int8 *)&a1[4].Ptr + v3);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
