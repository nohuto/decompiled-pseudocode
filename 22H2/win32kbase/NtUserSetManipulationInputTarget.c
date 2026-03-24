/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C0134090
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BBCC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, unsigned int a3, char *Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rdx
  __int64 v12; // rcx
  BOOL v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  v5 = a3;
  v8 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
  v13 = 0;
  if ( CurrentProcess )
    v13 = CurrentProcess == g_pepDwm;
  if ( !v13 )
  {
    v14 = 5LL;
LABEL_5:
    v15 = 0;
    UserSetLastError(v14, (__int64)CurrentProcess);
    goto LABEL_19;
  }
  if ( !(_DWORD)v5 )
  {
    v14 = 87LL;
    goto LABEL_5;
  }
  v16 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v16] > MmUserProbeAddress || &Src[v16] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v8 = (void *)Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
  if ( v8 )
  {
    if ( qword_1C0255FC0 )
      qword_1C0255FC0(v8, &v19, Win32FreePool);
    memmove(v8, Src, 4 * v5);
    v15 = CTouchProcessor::SetManipulationInputTarget(gpTouchProcessor, a1, v5, (unsigned int *)v8, a2);
  }
  else
  {
    v15 = 0;
    UserSetLastError(8LL, v17);
  }
LABEL_19:
  if ( v8 && qword_1C02560E8 )
    qword_1C02560E8(&v19);
  UserSessionSwitchLeaveCrit();
  return v15;
}
