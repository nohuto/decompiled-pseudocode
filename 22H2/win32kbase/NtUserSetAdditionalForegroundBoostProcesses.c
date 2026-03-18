/*
 * XREFs of NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A390
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002FBB0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ValidateHwnd @ 0x1C0045EC0 (ValidateHwnd.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     EnterSharedCrit @ 0x1C004CD30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00BEF4C (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00C4B70 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00D5700 (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 __fastcall NtUserSetAdditionalForegroundBoostProcesses(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  struct _EPROCESS **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned int v18; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _EPROCESS **v24; // r9
  __int64 v25; // rbx
  __int64 i; // rdx
  __int64 v27; // rax
  int v28; // ecx
  _QWORD *v29; // r15
  char *v30; // r12
  NTSTATUS v31; // eax
  unsigned __int8 v32; // al
  PVOID *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _BYTE v38[8]; // [rsp+30h] [rbp-178h] BYREF
  PVOID Object; // [rsp+38h] [rbp-170h] BYREF
  int v40; // [rsp+40h] [rbp-168h]
  __int64 v41; // [rsp+58h] [rbp-150h]
  _QWORD v42[32]; // [rsp+70h] [rbp-138h] BYREF

  v4 = a2;
  v6 = 0LL;
  v41 = 0LL;
  memset(v42, 0, sizeof(v42));
  if ( qword_1C0296538 )
    v11 = qword_1C0296538();
  else
    v11 = 50;
  if ( v11 )
  {
    UserSetLastError(v11);
    return 0LL;
  }
  LODWORD(Object) = 0;
  EnterSharedCrit(v8, v7, v9, v10);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v38, v13, v14, v15);
  v17 = ValidateHwnd(a1);
  if ( v17 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    v20 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v20 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 424LL) == v20
      && GetTopLevelWindow(v17) == (__int64 (__fastcall *)(_QWORD))v17
      && (unsigned int)v4 <= 0x20 )
    {
      if ( (_DWORD)v4 )
      {
        v25 = 8 * v4;
        if ( 8 * v4 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v22, v21, v23) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v25 + a3 > MmUserProbeAddress || v25 + a3 < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v40 = i;
          if ( (unsigned int)i >= (unsigned int)v4 )
            break;
          v42[i] = *(_QWORD *)(a3 + 8 * i);
        }
        v27 = Win32AllocPoolWithQuotaZInit(8 * v4, 0x67667355u);
        v6 = (struct _EPROCESS **)v27;
        v18 = 0;
        if ( !v27 )
        {
          v28 = 8;
LABEL_41:
          UserSetLastError(v28);
          goto LABEL_42;
        }
        v29 = (_QWORD *)v27;
        v30 = (char *)v42 - v27;
        while ( 1 )
        {
          Object = 0LL;
          v31 = ObReferenceObjectByHandle(
                  *(HANDLE *)((char *)v29 + (_QWORD)v30),
                  0x200u,
                  (POBJECT_TYPE)PsProcessType,
                  1,
                  &Object,
                  0LL);
          *v29 = Object;
          if ( v31 < 0 )
            break;
          ++v18;
          ++v29;
          if ( v18 >= (unsigned int)v4 )
            goto LABEL_32;
        }
        while ( v18 )
          ObfDereferenceObject(v6[--v18]);
        UserSetLastError(87);
      }
      else
      {
LABEL_32:
        v32 = GroupedProcessForegroundBoost::Update((__int64 **)v17, (struct tagWND *)(unsigned int)v4, v6, v24);
        v18 = v32;
        if ( !v32 && (_DWORD)v4 )
        {
          v33 = (PVOID *)v6;
          do
          {
            if ( *v33 )
              ObfDereferenceObject(*v33);
            ++v33;
            --v4;
          }
          while ( v4 );
        }
      }
      if ( v6 )
        Win32FreePool((char *)v6);
      goto LABEL_42;
    }
    v18 = 0;
    v28 = 87;
    goto LABEL_41;
  }
  v18 = 0;
LABEL_42:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v38);
  UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
  return (int)v18;
}
