/*
 * XREFs of DbgkpCloseObject @ 0x1409341B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 *     DbgkpMarkProcessPeb @ 0x1409344AC (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x1409354D4 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  struct _KPROCESS *NextProcess; // rdi
  char v8; // bl
  _DWORD *v9; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 80) = a2 + 80;
    *(_QWORD *)(a2 + 88) = a2 + 80;
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v6 = *(_DWORD *)(a2 + 96) & 2;
    NextProcess = (struct _KPROCESS *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      v8 = v6 != 0 ? 2 : 0;
      do
      {
        if ( NextProcess[1].Affinity.StaticBitmap[29] == a2 )
        {
          v8 &= ~1u;
          ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
          if ( NextProcess[1].Affinity.StaticBitmap[29] == a2 )
          {
            NextProcess[1].Affinity.StaticBitmap[29] = 0LL;
            v8 |= 1u;
          }
          ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
          if ( (v8 & 1) != 0 )
          {
            DbgkpMarkProcessPeb(NextProcess);
            if ( (v8 & 2) != 0 )
              PsTerminateProcess(NextProcess, 0xC0000354);
            ObfDereferenceObject((PVOID)a2);
          }
        }
        NextProcess = (struct _KPROCESS *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v9 = v5;
      v5 = (_QWORD *)*v5;
      v9[18] = -1073740972;
      DbgkpWakeTarget(v9);
    }
  }
}
