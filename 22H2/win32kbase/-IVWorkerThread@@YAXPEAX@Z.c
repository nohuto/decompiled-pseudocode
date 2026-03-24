/*
 * XREFs of ?IVWorkerThread@@YAXPEAX@Z @ 0x1C01B5E80
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     SetThreadBasePriority @ 0x1C009ED00 (SetThreadBasePriority.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IVWorkerThread(PVOID StartContext)
{
  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  if ( qword_1C0255DD8 )
    qword_1C0255DD8(gpIVThread, 0LL);
  KeSetEvent(gpkeIVThreadStarted, 1, 0);
  while ( KeWaitForSingleObject(gpkeIVThreadShutdown, Executive, 0, 0, 0LL) )
    ;
  Win32FreePool((__int64)gpkeIVThreadStarted);
  gpkeIVThreadStarted = 0LL;
  Win32FreePool((__int64)gpkeIVThreadShutdown);
  gpkeIVThreadShutdown = 0LL;
  if ( qword_1C0255DD8 )
    qword_1C0255DD8(gpIVThread, 1LL);
  gpIVThread = 0LL;
}
