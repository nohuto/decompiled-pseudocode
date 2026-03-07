__int64 __fastcall NtUserSetAdditionalForegroundBoostProcesses(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  struct _EPROCESS **v6; // rbx
  int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  unsigned int v17; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _EPROCESS **v23; // r9
  __int64 v24; // rbx
  __int64 i; // rdx
  __int64 v26; // rax
  int v27; // ecx
  _QWORD *v28; // r15
  char *v29; // r12
  NTSTATUS v30; // eax
  unsigned __int8 v31; // al
  PVOID *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _BYTE v37[8]; // [rsp+30h] [rbp-178h] BYREF
  PVOID Object; // [rsp+38h] [rbp-170h] BYREF
  int v39; // [rsp+40h] [rbp-168h]
  __int64 v40; // [rsp+58h] [rbp-150h]
  _QWORD v41[32]; // [rsp+70h] [rbp-138h] BYREF

  v4 = a2;
  v6 = 0LL;
  v40 = 0LL;
  memset(v41, 0, sizeof(v41));
  if ( qword_1C02D76B0 )
    v7 = qword_1C02D76B0();
  else
    v7 = 50;
  if ( v7 )
  {
    UserSetLastError(v7);
    return 0LL;
  }
  LODWORD(Object) = 0;
  EnterSharedCrit();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v37, v9, v10, v11);
  v16 = ValidateHwnd(a1);
  if ( v16 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v19 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 424LL) == v19
      && GetTopLevelWindow(v16) == (__int64 (__fastcall *)(_QWORD))v16
      && (unsigned int)v4 <= 0x20 )
    {
      if ( (_DWORD)v4 )
      {
        v24 = 8 * v4;
        if ( 8 * v4 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v21, v20, v22, v23) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v24 + a3 > MmUserProbeAddress || v24 + a3 < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v39 = i;
          if ( (unsigned int)i >= (unsigned int)v4 )
            break;
          v41[i] = *(_QWORD *)(a3 + 8 * i);
        }
        v26 = Win32AllocPoolWithQuotaZInit(8 * v4, 0x67667355u);
        v6 = (struct _EPROCESS **)v26;
        v17 = 0;
        if ( !v26 )
        {
          v27 = 8;
LABEL_41:
          UserSetLastError(v27);
          goto LABEL_42;
        }
        v28 = (_QWORD *)v26;
        v29 = (char *)v41 - v26;
        while ( 1 )
        {
          Object = 0LL;
          v30 = ObReferenceObjectByHandle(
                  *(HANDLE *)((char *)v28 + (_QWORD)v29),
                  0x200u,
                  (POBJECT_TYPE)PsProcessType,
                  1,
                  &Object,
                  0LL);
          *v28 = Object;
          if ( v30 < 0 )
            break;
          ++v17;
          ++v28;
          if ( v17 >= (unsigned int)v4 )
            goto LABEL_32;
        }
        while ( v17 )
          ObfDereferenceObject(v6[--v17]);
        UserSetLastError(87);
      }
      else
      {
LABEL_32:
        v31 = GroupedProcessForegroundBoost::Update((__int64 **)v16, (struct tagWND *)(unsigned int)v4, v6, v23);
        v17 = v31;
        if ( !v31 && (_DWORD)v4 )
        {
          v32 = (PVOID *)v6;
          do
          {
            if ( *v32 )
              ObfDereferenceObject(*v32);
            ++v32;
            --v4;
          }
          while ( v4 );
        }
      }
      if ( v6 )
        Win32FreePool((char *)v6);
      goto LABEL_42;
    }
    v17 = 0;
    v27 = 87;
    goto LABEL_41;
  }
  v17 = 0;
LABEL_42:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v37, v12, v14, v15);
  UserSessionSwitchLeaveCrit(v34, v33, v35, v36);
  return (int)v17;
}
