/*
 * XREFs of PspWaitForUsermodeExit @ 0x1409B0E8C
 * Callers:
 *     PspWaitOnAllProcessesJobCallback @ 0x1409B04F0 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PsGetNextProcessThread @ 0x1406A8E30 (PsGetNextProcessThread.c)
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
