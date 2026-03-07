__int64 __fastcall NtInitializeEnclave(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        const void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // r13
  PVOID Pool; // rdi
  char PreviousMode; // dl
  __int64 v10; // rcx
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  PVOID v14; // rsi
  char v16; // [rsp+40h] [rbp-B8h]
  int v17; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v19; // [rsp+58h] [rbp-A0h]
  ULONG_PTR v20; // [rsp+68h] [rbp-90h]
  _DWORD *v21; // [rsp+70h] [rbp-88h]
  unsigned __int64 v22; // [rsp+78h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v23; // [rsp+88h] [rbp-70h] BYREF

  v5 = a4;
  v22 = a2;
  v20 = BugCheckParameter1;
  v21 = a5;
  memset(&v23, 0, sizeof(v23));
  Object = 0LL;
  v17 = 0;
  Pool = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !a4 )
    goto LABEL_12;
  if ( a4 <= 0x1000 )
  {
    Pool = MiAllocatePool(256, a4, 0x44456D4Du);
    v19 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      goto LABEL_17;
    }
    memmove(Pool, a3, v5);
    PreviousMode = v16;
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( BugCheckParameter1 == -1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL,
              0LL);
      if ( v11 < 0 )
        goto LABEL_17;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v23);
    }
    v11 = MiInitializeEnclave(Process, v22, (__int64)Pool, v5, &v17);
    goto LABEL_17;
  }
  v11 = -1073741820;
LABEL_17:
  v14 = Object;
  if ( Object && BugCheckParameter1 != -1LL )
  {
    KiUnstackDetachProcess(&v23);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = v17;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v11;
}
