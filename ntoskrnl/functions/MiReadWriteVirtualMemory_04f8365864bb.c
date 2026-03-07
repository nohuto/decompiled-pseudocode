__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  _KPROCESS *Process; // r15
  PVOID v18; // rsi
  __int64 v19; // r14
  int v20; // eax
  __int64 Tag; // [rsp+20h] [rbp-68h]
  char PreviousMode; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF

  Object[0] = 0LL;
  if ( (a7 & 0xFFFFFFFE) != 0 || (a7 & 1) != 0 && a6 != 16 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v10 = a4 - 1;
    v11 = a4 + a2 - 1;
    if ( !a4 )
      v11 = a2;
    if ( v11 < a2 )
      return 3221225477LL;
    v12 = a4 - 1;
    if ( !a4 )
      v12 = 0LL;
    if ( a2 + v12 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v13 = a4 - 1;
    if ( !a4 )
      v13 = 0LL;
    if ( a3 + v13 < a3 )
      return 3221225477LL;
    if ( !a4 )
      v10 = 0LL;
    if ( a3 + v10 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v14 = (_QWORD *)a5;
    if ( a5 )
    {
      v15 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
  }
  else
  {
    v14 = (_QWORD *)a5;
  }
  v24 = 0LL;
  v16 = 0;
  if ( a4 )
  {
    v16 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)Object, 0LL, 0LL);
    if ( v16 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v18 = Object[0];
      if ( (*((_BYTE *)Object[0] + 992) & 1) == 0 || Process == Object[0] || *((_QWORD *)Object[0] + 175) )
      {
        Tag = a4;
        v19 = a2;
        if ( a6 == 16 )
          v20 = MiCopyVirtualMemory((ULONG_PTR)Object[0], Tag, PreviousMode, (__int64)&v24, a7);
        else
          v20 = MiCopyVirtualMemory((ULONG_PTR)Process, Tag, PreviousMode, (__int64)&v24, 0);
        v16 = v20;
      }
      else
      {
        v16 = -1073741819;
        v19 = a2;
      }
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)v18, a6) )
        EtwTiLogReadWriteVm(v16, (_DWORD)Process, (_DWORD)v18, a6, v19, v24);
      ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
    }
  }
  if ( v14 )
    *v14 = v24;
  return (unsigned int)v16;
}
