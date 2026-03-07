bool MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rcx
  bool result; // al

  result = (unsigned __int8)ObGetCurrentIrql() < 2u
        && (CurrentThread = KeGetCurrentThread(), (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0)
        && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
        && MmPhysicalMemoryBlock
        && (v1 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25])
                           + 16920LL)) != 0
        && CurrentThread != *(struct _KTHREAD **)(v1 + 88);
  return result;
}
