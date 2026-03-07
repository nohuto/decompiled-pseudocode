NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  PVOID v5; // r14
  struct _KPROCESS *v6; // rsi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  PVOID Process; // rax
  struct _KPROCESS *v15; // rax
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  PVOID v17; // [rsp+48h] [rbp-31h] BYREF
  __int64 v18; // [rsp+50h] [rbp-29h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-21h] BYREF

  v18 = a3;
  v4 = 0;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( !Handle )
  {
    SessionVm = 1LL;
    goto LABEL_6;
  }
  if ( Handle == (char *)-1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
LABEL_15:
    SessionVm = (unsigned __int64)Process + 1664;
    goto LABEL_6;
  }
  if ( Handle == (char *)-3LL )
  {
    Object = CurrentThread->ApcState.Process;
    if ( (*((_DWORD *)Object + 281) & 0x10000) == 0 )
      return -1073741799;
    goto LABEL_5;
  }
  if ( !ObIsKernelHandle(Handle) )
    return -1073741585;
  if ( ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, 0, 0x66506D4Du, &Object, 0LL) >= 0 )
  {
    Process = Object;
    if ( CurrentThread->ApcState.Process != Object )
    {
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      Process = Object;
      v4 = 1;
    }
    goto LABEL_15;
  }
  v17 = 0LL;
  result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &v17, 0LL);
  v5 = v17;
  if ( result < 0 )
    return result;
  v15 = (struct _KPROCESS *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)v17 + 3));
  v6 = v15;
  if ( !v15 )
  {
LABEL_27:
    ObfDereferenceObject(v5);
    return 0;
  }
  if ( (int)MmAttachSession(v15, &ApcState) < 0 )
  {
    ObfDereferenceObject(v6);
    goto LABEL_27;
  }
LABEL_5:
  SessionVm = MiGetSessionVm();
LABEL_6:
  v12 = MiPrefetchVirtualMemory(a2, v18, SessionVm, a4);
  if ( v4 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( v6 )
  {
    MmDetachSession((__int64)v6, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    ObfDereferenceObject(v6);
  }
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL || Handle == (char *)-2LL )
  {
    if ( Object )
    {
      ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
    }
    else if ( v5 )
    {
      ObfDereferenceObject(v5);
    }
  }
  return v12;
}
