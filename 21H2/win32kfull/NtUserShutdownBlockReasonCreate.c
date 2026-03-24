/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C010AB70
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0049A6C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetAncestor @ 0x1C010B068 (_GetAncestor.c)
 *     InternalRemoveProp @ 0x1C0169E98 (InternalRemoveProp.c)
 *     QueueShutdownData @ 0x1C01D31E8 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rax
  char *v12; // rdi
  void *v13; // rax
  __int64 v15; // rcx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v5 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v5 + 424) != CurrentProcessWin32Process )
  {
    v7 = 5LL;
    goto LABEL_15;
  }
  if ( v6 != GetAncestor(v6, 2LL) || a3 > 0x101 )
  {
    v15 = 87LL;
LABEL_19:
    UserSetLastError(v15, v9, v10);
    goto LABEL_15;
  }
  v11 = (char *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v12 = v11;
  if ( !v11 )
  {
    v15 = 8LL;
    goto LABEL_19;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v12, a3 + 1, (char *)a2);
  }
  else
  {
    *(_WORD *)v11 = 0;
  }
  v13 = (void *)InternalRemoveProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
  if ( v13 )
    Win32FreePool(v13);
  if ( (unsigned int)InternalSetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, (__int64)v12, 1u) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1uLL);
    v7 = 1LL;
  }
  else
  {
    Win32FreePool(v12);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
