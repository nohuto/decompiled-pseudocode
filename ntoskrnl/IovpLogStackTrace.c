/*
 * XREFs of IovpLogStackTrace @ 0x140ABEE08
 * Callers:
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     IovAllocateIrp @ 0x140ABDCE0 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x140ABE448 (IovCancelIrp.c)
 *     IovCompleteRequest @ 0x140ABE48C (IovCompleteRequest.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140205D40 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D0D60 (KeExpandKernelStackAndCallout.c)
 *     IovpLogStackCallout @ 0x140ABEDD0 (IovpLogStackCallout.c)
 */

unsigned __int64 __fastcall IovpLogStackTrace(__int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !IovIrpTraces || (VfRuleClasses & 0x400000) != 0 )
    return 0LL;
  v1 = IovIrpTraces
     + ((unsigned __int64)(_InterlockedIncrement(&IovIrpTracesIndex) & (unsigned int)(IovIrpTracesLength - 1)) << 7);
  *(_QWORD *)v1 = a1;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v1 + 8) = CurrentThread;
  *(_DWORD *)(v1 + 16) = CurrentThread->WaitBlock[3].SpareLong;
  LOBYTE(CurrentThread) = KeGetCurrentIrql();
  *(_BYTE *)(v1 + 20) = (_BYTE)CurrentThread;
  if ( (unsigned __int8)CurrentThread > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
  {
    IovpLogStackCallout((PVOID *)v1);
  }
  else if ( KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)IovpLogStackCallout, (PVOID)v1, 0xE30uLL) < 0 )
  {
    *(_QWORD *)(v1 + 24) = 0LL;
  }
  return v1;
}
