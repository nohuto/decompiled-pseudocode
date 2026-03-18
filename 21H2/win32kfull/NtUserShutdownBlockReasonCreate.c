/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C00FF170
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     _GetAncestor @ 0x1C00FF684 (_GetAncestor.c)
 *     QueueShutdownData @ 0x1C01D9D08 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rcx

  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( !v7 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v6 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v6 + 424) != CurrentProcessWin32Process )
  {
    v8 = 5LL;
    goto LABEL_15;
  }
  if ( v7 != GetAncestor(v7, 2LL) || a3 > 0x101 )
  {
    v15 = 87LL;
LABEL_19:
    UserSetLastError(v15, v10);
    goto LABEL_15;
  }
  v11 = (char *)Win32AllocPoolZInit(2LL * (a3 + 1), 1919054677LL);
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
  v13 = InternalRemoveProp(v7, (unsigned __int16)gatomShutdownBlockingReason, 1u);
  if ( v13 )
    Win32FreePool(v13);
  if ( (unsigned int)InternalSetProp(v7, (unsigned __int16)gatomShutdownBlockingReason, (__int64)v12, 1u) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1uLL);
    v8 = 1LL;
  }
  else
  {
    Win32FreePool(v12);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
