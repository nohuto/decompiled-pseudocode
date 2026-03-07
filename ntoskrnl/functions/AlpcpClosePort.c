char __fastcall AlpcpClosePort(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 256) & 0x100000) != 0 )
      goto LABEL_6;
    v5 = 0LL;
    if ( (*(_QWORD *)(a2 + 24) & 1) == 0 )
      v5 = *(_QWORD *)(a2 + 24);
    if ( v5 == a1 )
    {
LABEL_6:
      AlpcpDoPortCleanup(a2, a1);
      if ( (*(_DWORD *)(a2 + 256) & 0x1000) == 0 )
        AlpcpSendCloseMessage(a2);
    }
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
