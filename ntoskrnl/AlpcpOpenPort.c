__int64 __fastcall AlpcpOpenPort(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  __int64 v8; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    if ( a1 != 2 || (*(_DWORD *)(a4 + 256) & 0x100000) != 0 )
    {
      v6 = -1073741637;
    }
    else
    {
      v8 = 0LL;
      if ( (*(_QWORD *)(a4 + 24) & 1) == 0 )
        v8 = *(_QWORD *)(a4 + 24);
      if ( v8 != a3 )
        *a5 &= ~1u;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
