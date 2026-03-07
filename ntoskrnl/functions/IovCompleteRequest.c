void __fastcall IovCompleteRequest(IRP *BugCheckParameter1, char a2)
{
  __int64 v4; // rdx
  ULONG_PTR CancelRoutine; // r8
  ULONG_PTR Status; // rax
  bool v7; // sf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char Control; // al
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  __int128 v11; // [rsp+38h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-41h]
  void *v13; // [rsp+50h] [rbp-39h]
  _BYTE v14[104]; // [rsp+58h] [rbp-31h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  memset(v14, 0, sizeof(v14));
  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  IovpLogStackTrace(BugCheckParameter1);
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( BugCheckParameter1->CurrentLocation > (char)(BugCheckParameter1->StackCount + 1)
      || BugCheckParameter1->Type != 6 )
    {
      VerifierBugCheckIfAppropriate(0x44u, (ULONG_PTR)BugCheckParameter1, 0x489uLL, 0LL, 0LL);
    }
    CancelRoutine = (ULONG_PTR)BugCheckParameter1->CancelRoutine;
    if ( CancelRoutine )
      VerifierBugCheckIfAppropriate(0xC9u, 7uLL, CancelRoutine, (ULONG_PTR)BugCheckParameter1, 0LL);
    Status = BugCheckParameter1->IoStatus.Status;
    if ( (_DWORD)Status == 259 || (_DWORD)Status == -1 )
      VerifierBugCheckIfAppropriate(0xC9u, 6uLL, Status, (ULONG_PTR)BugCheckParameter1, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      VerifierBugCheckIfAppropriate(0xC9u, 0xEuLL, KeGetCurrentIrql(), (ULONG_PTR)BugCheckParameter1, 0LL);
  }
  LOBYTE(v4) = a2;
  v13 = retaddr;
  IovpCompleteRequest1(BugCheckParameter1, v4, &v10);
  if ( (!IovpDisabledWithoutReboot || v10) && BugCheckParameter1->CurrentLocation <= BugCheckParameter1->StackCount )
  {
    v7 = BugCheckParameter1->IoStatus.Status < 0;
    CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
    *(_QWORD *)&v14[16] = &v10;
    *(_QWORD *)&v14[8] = CurrentStackLocation->Context;
    *(_QWORD *)v14 = CurrentStackLocation;
    *(_OWORD *)&v14[32] = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&v14[48] = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&v14[64] = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
    *(_OWORD *)&v14[80] = *(_OWORD *)&CurrentStackLocation->FileObject;
    *(_QWORD *)&v14[96] = CurrentStackLocation->Context;
    Control = CurrentStackLocation->Control;
    if ( v7 )
    {
      if ( Control < 0 )
        goto LABEL_18;
    }
    else if ( (Control & 0x40) != 0 )
    {
      goto LABEL_18;
    }
    if ( !BugCheckParameter1->Cancel || (Control & 0x20) == 0 )
    {
      *(_QWORD *)&v14[24] = 0LL;
      CurrentStackLocation->Control |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    *(_QWORD *)&v14[24] = CurrentStackLocation->CompletionRoutine;
LABEL_19:
    CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IovpLocalCompletionRoutine;
    CurrentStackLocation->Context = v14;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest((__int64)BugCheckParameter1, a2);
  else
    IopfCompleteRequest(BugCheckParameter1, a2);
}
