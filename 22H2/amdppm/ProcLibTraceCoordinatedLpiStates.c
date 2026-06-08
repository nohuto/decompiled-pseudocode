/*
 * XREFs of ProcLibTraceCoordinatedLpiStates @ 0x1C001DC50
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D5F0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0020218 (ProcLibTraceCoordinatedLpiRundown.c)
 */

__int64 ProcLibTraceCoordinatedLpiStates()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx
  __int64 result; // rax

  v0 = (unsigned int *)qword_1C00139C0;
  v1 = 0;
  if ( qword_1C00139C0 && *(_DWORD *)qword_1C00139C0 )
  {
    do
    {
      result = ProcLibTraceCoordinatedLpiRundown(&v0[8 * v1 + 2 + 2 * v1]);
      ++v1;
    }
    while ( v1 < *v0 );
  }
  return result;
}
