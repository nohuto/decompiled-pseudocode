/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x140633BC0
 * Callers:
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiFlushComplete @ 0x140633A40 (MiFlushComplete.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiFlushRelease @ 0x140334AC0 (MiFlushRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(__int64 **P)
{
  struct _KEVENT *v1; // rdi
  __int64 *v3; // rcx

  v1 = (struct _KEVENT *)P[4];
  MiFlushRelease(**P, (ULONG_PTR)*P, (ULONG_PTR)P[1]);
  v3 = P[5];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v1, 0, 0);
}
