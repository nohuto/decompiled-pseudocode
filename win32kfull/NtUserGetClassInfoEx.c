/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C002F120
 * Callers:
 *     <none>
 * Callees:
 *     RegisterDefaultClass @ 0x1C003124C (RegisterDefaultClass.c)
 *     _GetClassInfoEx @ 0x1C00314C8 (_GetClassInfoEx.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C00DBAB8 (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(int a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r15
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // r14
  ULONG64 v12; // rdx
  size_t v13; // r15
  __int64 v14; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  _BYTE *v17; // rdx
  _DWORD *v18; // rdx
  unsigned __int16 ClassInfo; // ax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 *v22; // rax
  int v24; // [rsp+30h] [rbp-F8h]
  int v25; // [rsp+34h] [rbp-F4h]
  void *Str1_8; // [rsp+50h] [rbp-D8h]
  __int64 v27; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-C8h] BYREF
  void (*v29)(void *); // [rsp+70h] [rbp-B8h]
  __int64 v30; // [rsp+80h] [rbp-A8h]
  __int128 v31; // [rsp+90h] [rbp-98h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-88h]
  __int128 v33; // [rsp+B0h] [rbp-78h]
  __int128 v34; // [rsp+C0h] [rbp-68h]
  __int128 v35; // [rsp+D0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-48h]

  v5 = a4;
  v8 = a1;
  v9 = 0LL;
  v27 = 0LL;
  memset_0(&v31, 0, 0x50uLL);
  v28 = 0LL;
  v29 = 0LL;
  v25 = 0;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_40;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v10 = *(_DWORD *)a2;
  v24 = *(_DWORD *)a2;
  v11 = *(_QWORD *)(a2 + 8);
  Str1_8 = (void *)v11;
  if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (unsigned __int16)v10 + v11 + 2;
    if ( v12 <= v11 || v12 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v10 > HIWORD(v24) || (v10 & 1) != 0 )
    {
      if ( (v10 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9891LL);
      ExRaiseAccessViolation();
    }
  }
  if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v13 = (unsigned __int16)v10;
    Str1_8 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v10 + 2LL, 2020897621LL);
    if ( !Str1_8 )
      ExRaiseStatus(-1073741801);
    v25 = 1;
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
    *(_QWORD *)&v28 = *(_QWORD *)(v14 + 16);
    *(_QWORD *)(v14 + 16) = &v28;
    *((_QWORD *)&v28 + 1) = Str1_8;
    v29 = Win32FreePool;
    memmove(Str1_8, (const void *)v11, v13);
    *((_WORD *)Str1_8 + (v13 >> 1)) = 0;
    v5 = a4;
    v8 = a1;
  }
  if ( PsGetCurrentProcessWow64Process() )
  {
    v30 = 1LL;
    v16 = 0LL;
  }
  else
  {
    v30 = 4LL;
    v16 = 3LL;
  }
  if ( (v16 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v17 = (_BYTE *)MmUserProbeAddress;
  *v17 = *v17;
  v17[79] = v17[79];
  v18 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = *v18;
  v31 = *(_OWORD *)a3;
  v32 = *(_OWORD *)(a3 + 16);
  v33 = *(_OWORD *)(a3 + 32);
  v34 = *(_OWORD *)(a3 + 48);
  v35 = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
    || (unsigned int)RegisterDefaultClass((wchar_t *)Str1_8) )
  {
    ClassInfo = GetClassInfoEx(v8, (_DWORD)Str1_8, (unsigned int)&v31, (unsigned int)&v27, a5);
    v21 = ClassInfo;
    if ( ClassInfo )
    {
      *(_OWORD *)a3 = v31;
      *(_OWORD *)(a3 + 16) = v32;
      *(_OWORD *)(a3 + 32) = v33;
      *(_OWORD *)(a3 + 48) = v34;
      *(_OWORD *)(a3 + 64) = v35;
      *v5 = v27;
    }
  }
  else
  {
LABEL_40:
    v21 = 0;
    UserSetLastError(87LL);
  }
  if ( v25 )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v22 )
      v9 = *v22;
    *(_QWORD *)(v9 + 16) = v28;
    ((void (__fastcall *)(_QWORD))v29)(*((_QWORD *)&v28 + 1));
  }
  UserSessionSwitchLeaveCrit(v20);
  return v21;
}
