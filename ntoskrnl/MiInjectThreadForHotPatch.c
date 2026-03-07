__int64 __fastcall MiInjectThreadForHotPatch(int a1, int a2, int a3)
{
  struct _KTHREAD *v6; // rdi
  struct _EX_RUNDOWN_REF *p_Blink; // rsi
  BOOLEAN v8; // al
  int v9; // r14d
  unsigned int v10; // ebx
  int Thread; // eax
  PVOID Object; // [rsp+68h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp-1h] BYREF
  __int128 v15; // [rsp+78h] [rbp+7h]
  __int128 v16; // [rsp+88h] [rbp+17h]
  __int128 v17; // [rsp+98h] [rbp+27h]
  HANDLE Handle; // [rsp+F0h] [rbp+7Fh] BYREF

  *(_QWORD *)&v17 = 0LL;
  v15 = 0LL;
  DWORD2(v17) = 0;
  v16 = 0LL;
  Timeout.QuadPart = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  p_Blink = (struct _EX_RUNDOWN_REF *)&KeGetCurrentThread()->ApcState.Process[1].ProfileListHead.Blink;
  v8 = ExAcquireRundownProtection_0(p_Blink);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -1073741558;
    goto LABEL_16;
  }
  LODWORD(v15) = 48;
  *((_QWORD *)&v15 + 1) = 0LL;
  DWORD2(v16) = 512;
  *(_QWORD *)&v16 = 0LL;
  v17 = 0LL;
  Thread = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL);
  if ( Thread >= 0 )
  {
    Object = 0LL;
    Thread = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = (struct _KTHREAD *)Object;
    v10 = Thread;
    if ( Thread >= 0 )
    {
      ExReleaseRundownProtection_0(p_Blink);
      v9 = 0;
      if ( v6->SuspendCount || (*((_DWORD *)&v6->0 + 1) & 0x4000) != 0 )
      {
        Thread = 1073741825;
      }
      else
      {
        Timeout.QuadPart = -100000000LL;
        if ( KeWaitForSingleObject(v6, WrKernel, 0, 0, &Timeout) != 258 )
        {
          Thread = PsGetThreadExitStatus(v6);
          v10 = 0;
          if ( Thread >= 0 )
            goto LABEL_16;
          goto LABEL_14;
        }
        Thread = -1073740675;
      }
      v10 = 0;
    }
  }
  else
  {
    v10 = Thread;
  }
LABEL_14:
  MiLogHotPatchOperationStatus(a2, a3, a1, Thread, 4);
  if ( v9 )
    ExReleaseRundownProtection_0(p_Blink);
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v10;
}
