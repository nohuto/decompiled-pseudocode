/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C00C9820
 * Callers:
 *     <none>
 * Callees:
 *     RegisterIconTitleClass @ 0x1C00C9744 (RegisterIconTitleClass.c)
 *     RegisterDefaultClass @ 0x1C00CC1BC (RegisterDefaultClass.c)
 *     _GetClassInfoEx @ 0x1C00CC438 (_GetClassInfoEx.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(int a1, unsigned int *a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r15
  int v8; // ebx
  __int64 v9; // rdi
  ULONG64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r8
  size_t v14; // r15
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  _BYTE *v18; // rdx
  _DWORD *v19; // rdx
  unsigned __int16 ClassInfo; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebx
  __int64 *v26; // rax
  int v28; // [rsp+30h] [rbp-F8h]
  int v29; // [rsp+34h] [rbp-F4h]
  void *Str1_8; // [rsp+50h] [rbp-D8h]
  __int64 v31; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-C8h] BYREF
  void (*v33)(void *); // [rsp+70h] [rbp-B8h]
  __int64 v34; // [rsp+80h] [rbp-A8h]
  __int128 v35; // [rsp+90h] [rbp-98h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-88h]
  __int128 v37; // [rsp+B0h] [rbp-78h]
  __int128 v38; // [rsp+C0h] [rbp-68h]
  __int128 v39; // [rsp+D0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-48h]

  v5 = a4;
  v8 = a1;
  v9 = 0LL;
  v31 = 0LL;
  memset_0(&v35, 0, 0x50uLL);
  v32 = 0LL;
  v33 = 0LL;
  v29 = 0;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_40;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v11 = *a2;
  v28 = *a2;
  v12 = *((_QWORD *)a2 + 1);
  Str1_8 = (void *)v12;
  v13 = v12 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v12 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (unsigned __int16)v11 + v12 + 2;
    if ( v10 <= v12 || v10 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v11 > HIWORD(v28) || (v11 & 1) != 0 )
    {
      if ( (v11 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9807LL);
      ExRaiseAccessViolation();
    }
  }
  if ( v13 )
  {
    v14 = (unsigned __int16)v11;
    Str1_8 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v11 + 2LL, 2020897621LL);
    if ( !Str1_8 )
      ExRaiseStatus(-1073741801);
    v29 = 1;
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
    *(_QWORD *)&v32 = *(_QWORD *)(v15 + 16);
    *(_QWORD *)(v15 + 16) = &v32;
    *((_QWORD *)&v32 + 1) = Str1_8;
    v33 = Win32FreePool;
    memmove(Str1_8, (const void *)v12, v14);
    *((_WORD *)Str1_8 + (v14 >> 1)) = 0;
    v5 = a4;
    v8 = a1;
  }
  if ( PsGetCurrentProcessWow64Process(v11, v10, v13) )
  {
    v34 = 1LL;
    v17 = 0LL;
  }
  else
  {
    v34 = 4LL;
    v17 = 3LL;
  }
  if ( (v17 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v18 = (_BYTE *)MmUserProbeAddress;
  *v18 = *v18;
  v18[79] = v18[79];
  v19 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = *v19;
  v35 = *(_OWORD *)a3;
  v36 = *(_OWORD *)(a3 + 16);
  v37 = *(_OWORD *)(a3 + 32);
  v38 = *(_OWORD *)(a3 + 48);
  v39 = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
    || (unsigned int)RegisterDefaultClass((wchar_t *)Str1_8) )
  {
    ClassInfo = GetClassInfoEx(v8, (_DWORD)Str1_8, (unsigned int)&v35, (unsigned int)&v31, a5);
    v25 = ClassInfo;
    if ( ClassInfo )
    {
      *(_OWORD *)a3 = v35;
      *(_OWORD *)(a3 + 16) = v36;
      *(_OWORD *)(a3 + 32) = v37;
      *(_OWORD *)(a3 + 48) = v38;
      *(_OWORD *)(a3 + 64) = v39;
      *v5 = v31;
    }
  }
  else
  {
LABEL_40:
    v25 = 0;
    UserSetLastError(87LL);
  }
  if ( v29 )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v26 )
      v9 = *v26;
    *(_QWORD *)(v9 + 16) = v32;
    ((void (__fastcall *)(_QWORD))v33)(*((_QWORD *)&v32 + 1));
  }
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v25;
}
