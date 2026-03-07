__int64 __fastcall UsbhResetIrqPipe(__int64 a1)
{
  _DWORD *v2; // rbx
  unsigned __int64 Pool2; // rax
  int *v4; // rdi
  NTSTATUS v5; // ebx

  v2 = FdoExt(a1);
  Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
  v4 = (int *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_WORD *)Pool2 = 40;
    *(_WORD *)(Pool2 + 2) = 30;
    *(_QWORD *)(Pool2 + 24) = *((_QWORD *)v2 + 330);
    v5 = UsbhSyncSendInternalIoctl(a1, 0x220003u, Pool2, 0LL);
    Log(a1, 4, 1937331029, v5, v4[1]);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
