__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  void *v13; // rax
  int v14; // edi
  int v16; // ecx

  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( !v7 )
    goto LABEL_18;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v6 = -*(_QWORD *)CurrentProcessWin32Process;
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) != v10 )
  {
    v8 = 5LL;
    goto LABEL_18;
  }
  if ( v7 != GetAncestor(v7, 2LL) || a3 > 0x101 )
  {
    v16 = 87;
LABEL_23:
    UserSetLastError(v16);
    goto LABEL_18;
  }
  v11 = (unsigned __int16 *)Win32AllocPoolZInit(2LL * (a3 + 1), 1919054677LL);
  v12 = v11;
  if ( !v11 )
  {
    v16 = 8;
    goto LABEL_23;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v12, a3 + 1, (const unsigned __int16 *)a2);
  }
  else
  {
    *v11 = 0;
  }
  v13 = (void *)InternalRemoveProp(v7, (unsigned __int16)gatomShutdownBlockingReason, 1u);
  if ( v13 )
    Win32FreePool(v13);
  if ( (unsigned int)InternalSetProp(v7, (unsigned __int16)gatomShutdownBlockingReason, v12, 1LL) )
  {
    v14 = 0;
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1uLL);
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v14 < 0 )
    Win32FreePool(v12);
  else
    v8 = 1LL;
LABEL_18:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
