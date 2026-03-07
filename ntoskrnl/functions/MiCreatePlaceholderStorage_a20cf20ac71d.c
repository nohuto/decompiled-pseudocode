__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rsi
  int v3; // ebx
  _QWORD *Pool; // rax
  _QWORD *v5; // rdi
  _DWORD *Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsChargeProcessNonPagedPoolQuota(Process, 0x88uLL);
  if ( v3 < 0 )
    return (unsigned int)v3;
  Pool = MiAllocatePool(64, 0x48uLL, 0x73706D4Du);
  v5 = Pool;
  if ( !Pool )
  {
    v3 = -1073741670;
LABEL_6:
    PsReturnProcessNonPagedPoolQuota(Process, 136LL);
    return (unsigned int)v3;
  }
  *((_DWORD *)Pool + 16) = 128;
  Vad = MiAllocateVad(0LL, 0LL, 2);
  v5[1] = Vad;
  if ( !Vad )
  {
    v3 = -1073741670;
    ExFreePoolWithTag(v5, 0);
    goto LABEL_6;
  }
  MiInsertVadEvent(a1, v5, 0);
  return 0LL;
}
