/*
 * XREFs of PopNetDisconnectedStandbyModeCallback @ 0x1407D4F80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetDisconnectedStandbyModeCallback(int a1, int *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a3 == 4 && (unsigned int)*a2 <= 1 )
  {
    v4 = 0;
    PopAcquirePolicyLock(a1);
    dword_140C2337C = *a2;
    PopReleasePolicyLock(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
