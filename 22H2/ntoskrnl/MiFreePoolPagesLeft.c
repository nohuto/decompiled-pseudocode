/*
 * XREFs of MiFreePoolPagesLeft @ 0x14021DC80
 * Callers:
 *     MmRaisePoolQuota @ 0x1402209D0 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F04 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140B73D5C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C65588;
    v2 = MiState;
  }
  else
  {
    v1 = qword_140C69A28;
    v2 = qword_140C69A38;
  }
  return v2 - v1;
}
