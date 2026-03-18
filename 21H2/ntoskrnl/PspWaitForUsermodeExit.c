/*
 * XREFs of PspWaitForUsermodeExit @ 0x1409B196C
 * Callers:
 *     PspWaitOnAllProcessesJobCallback @ 0x1409B0FC0 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = NextProcessThread )
  {
    NextProcessThread = PsGetNextProcessThread(a1, i);
    v4 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 && !*((_BYTE *)NextProcessThread + 4) )
    {
      ObfReferenceObjectWithTag(NextProcessThread, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return 0LL;
}
