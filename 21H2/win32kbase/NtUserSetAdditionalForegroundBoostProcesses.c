/*
 * XREFs of NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ValidateHwnd @ 0x1C002CAE0 (ValidateHwnd.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C005FB30 (Win32AllocPoolWithQuotaZInit.c)
 *     SetLastNtError @ 0x1C009A910 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D801C (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     _GetTopLevelWindow @ 0x1C023E508 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserSetAdditionalForegroundBoostProcesses(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  struct _EPROCESS **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _EPROCESS **v19; // r9
  __int64 v20; // rbx
  __int64 i; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r15
  char *v25; // r12
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 v29; // al
  PVOID *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE v35[8]; // [rsp+30h] [rbp-178h] BYREF
  PVOID Object; // [rsp+38h] [rbp-170h] BYREF
  int v37; // [rsp+40h] [rbp-168h]
  __int64 v38; // [rsp+58h] [rbp-150h]
  _QWORD v39[32]; // [rsp+70h] [rbp-138h] BYREF

  v4 = a2;
  v6 = 0LL;
  v38 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( qword_1C029CEF8 )
    v10 = qword_1C029CEF8();
  else
    v10 = 50;
  if ( v10 )
  {
    UserSetLastError(v10, v7, v8, v9);
    return 0LL;
  }
  LODWORD(Object) = 0;
  EnterSharedCrit();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v35, v12, v13);
  v15 = ValidateHwnd(a1);
  if ( v15 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v14)
      && GetTopLevelWindow(v15) == v15
      && (unsigned int)v4 <= 0x20 )
    {
      if ( (_DWORD)v4 )
      {
        v20 = 8 * v4;
        if ( 8 * v4 )
        {
          if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v20 + a3 > MmUserProbeAddress || v20 + a3 < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v37 = i;
          if ( (unsigned int)i >= (unsigned int)v4 )
            break;
          v39[i] = *(_QWORD *)(a3 + 8 * i);
        }
        v22 = Win32AllocPoolWithQuotaZInit(8 * v4, 1734767445);
        v6 = (struct _EPROCESS **)v22;
        v16 = 0;
        if ( !v22 )
        {
          v23 = 8LL;
LABEL_39:
          UserSetLastError(v23, v17, v18, (__int64)v19);
          goto LABEL_40;
        }
        v24 = (_QWORD *)v22;
        v25 = (char *)v39 - v22;
        while ( 1 )
        {
          Object = 0LL;
          v26 = ObReferenceObjectByHandle(
                  *(HANDLE *)((char *)v24 + (_QWORD)v25),
                  0x200u,
                  (POBJECT_TYPE)PsProcessType,
                  1,
                  &Object,
                  0LL);
          *v24 = Object;
          if ( v26 < 0 )
            break;
          ++v16;
          ++v24;
          if ( v16 >= (unsigned int)v4 )
            goto LABEL_30;
        }
        while ( v16 )
          ObfDereferenceObject(v6[--v16]);
        UserSetLastError(87LL, v27, v28, (__int64)v19);
      }
      else
      {
LABEL_30:
        v29 = GroupedProcessForegroundBoost::Update((__int64 **)v15, (struct tagWND *)(unsigned int)v4, v6, v19);
        v16 = v29;
        if ( !v29 && (_DWORD)v4 )
        {
          v30 = (PVOID *)v6;
          do
          {
            if ( *v30 )
              ObfDereferenceObject(*v30);
            ++v30;
            --v4;
          }
          while ( v4 );
        }
      }
      if ( v6 )
        Win32FreePool((char *)v6);
      goto LABEL_40;
    }
    v16 = 0;
    v23 = 87LL;
    goto LABEL_39;
  }
  v16 = 0;
LABEL_40:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v35);
  UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
  return (int)v16;
}
