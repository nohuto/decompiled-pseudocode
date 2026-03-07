__int64 __fastcall LpcpRequestWaitReplyPort(__int64 a1, __int128 *a2, unsigned __int64 a3, __int64 a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edx
  unsigned int v8; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 1179650;
  if ( a5 != 1 )
    v7 = 131074;
  v8 = AlpcpProcessSynchronousRequest(a1, v7, a2, 0LL, a3, 0LL, 0LL, 0LL, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 == -1073740029 )
    v8 = -1073741769;
  if ( v8 == -1073740031 )
    return (unsigned int)-1073741229;
  return v8;
}
