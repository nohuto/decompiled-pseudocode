/*
 * XREFs of IopAllocateBackpocketIrp @ 0x1404FFD50
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopIsActivityTracingEnabled @ 0x1402E66C0 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x1402FFCC0 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x14050091C (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  PIRP v6; // rbx
  LARGE_INTEGER v7; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > byte_140C45E20 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140C45DF8 != CurrentThread )
    {
      v7.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140C45DF0, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140C45E00, Executive, 0, 0, &v7) == 258 )
        {
          result = IopAllocateIrpExReturn();
          if ( result )
            return result;
        }
      }
      v6 = qword_140C45DE8;
      IoInitializeIrp(qword_140C45DE8, 72 * v3 + 352, v3 + 2);
      v6->AllocationFlags = 33;
      qword_140C45DF8 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v6 = qword_140C45E18;
    if ( qword_140C45E18 )
    {
LABEL_19:
      qword_140C45E18 = *(PIRP *)&qword_140C45E18->Type;
      IoInitializeIrp(v6, 72 * a2 + 352, a2 + 2);
      v6->Tail.Overlay.CurrentStackLocation -= 2;
      *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
      v6->AllocationFlags = 33;
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140C45DC8 == CurrentThread )
  {
    v6 = qword_140C45E18;
    if ( !qword_140C45E18 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140C45DC0, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140C45DD0, Executive, 0, 0, &Timeout) == 258 )
    {
      result = IopAllocateIrpExReturn();
      if ( result )
        return result;
    }
  }
  v6 = Irp;
  IoInitializeIrp(Irp, 72 * v3 + 352, v3 + 2);
  v6->AllocationFlags = 33;
  qword_140C45DC8 = (__int64)KeGetCurrentThread();
LABEL_9:
  v6->Tail.Overlay.CurrentStackLocation -= 2;
  *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
LABEL_20:
  v6->StackCount -= 2;
  v6->CurrentLocation -= 2;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(v6);
  return (__int64)v6;
}
