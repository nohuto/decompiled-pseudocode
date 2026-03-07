__int64 __fastcall NtOpenRegistryTransaction(HANDLE *a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // r8
  int v12; // ebx
  char PreviousMode; // r14
  __int64 v14; // rax
  HANDLE v15; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((__int64)&v18);
  v10 = CmpAcquireShutdownRundown(v7, v6, v8);
  if ( v10 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a1;
      *(_QWORD *)v14 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v12 = ObOpenObjectByName(a3, (__int64)CmRegistryTransactionType, PreviousMode, 0LL, a2, 0LL, (__int64)&Handle);
    if ( v12 >= 0 )
    {
      *a1 = Handle;
      Handle = 0LL;
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741431;
  }
  v15 = Handle;
  if ( Handle )
    NtClose(Handle);
  if ( v10 )
    CmpReleaseShutdownRundown(v15, v9, v11);
  CmCleanupThreadInfo((__int64 *)&v18);
  return (unsigned int)v12;
}
