/*
 * XREFs of xxxConsoleControl @ 0x1C007A708
 * Callers:
 *     NtUserConsoleControl @ 0x1C007A5F0 (NtUserConsoleControl.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C007AA20 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00F806C (xxxClientFreeWindowClassExtraBytes.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0108B84 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  void *v11; // rcx
  PVOID v12; // rsi
  __int64 ProcessWin32Process; // rax
  unsigned int v14; // edx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  char *v23; // rcx
  _DWORD *v24; // r14
  char *v25; // rax
  __int64 v26; // rax
  __int64 CurrentProcess; // [rsp+50h] [rbp-68h]
  __int128 v28; // [rsp+70h] [rbp-48h] BYREF
  __int64 v29; // [rsp+80h] [rbp-38h]
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    return (unsigned int)xxxUserNotifyConsoleApplication(a2);
  }
  v7 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v16 = -1073741637;
    if ( a3 != 24 )
      return (unsigned int)-1073741811;
    return v16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 24 )
    {
      xxxSetConsoleCaretInfo(a2);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v26 = ValidateHwnd(*(_QWORD *)a2);
      if ( v26 )
      {
        *(_DWORD *)(*(_QWORD *)(v26 + 16) + 876LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return (unsigned int)-1073741821;
    if ( a3 == 16 )
    {
      v17 = ValidateHwnd(*(_QWORD *)a2);
      v18 = v17;
      if ( !v17 )
        return v5;
      v19 = v17 + 40;
      v20 = *(_QWORD *)(v17 + 40);
      if ( (*(_BYTE *)(v20 + 18) & 4) != 0 || *(char *)(v20 + 19) < 0 || *(int *)(v20 + 200) < 8 )
        return v5;
      if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v20) )
        return (unsigned int)-1073741790;
      v28 = 0LL;
      v29 = 0LL;
      ThreadLock(v18, (__int64 *)&v28);
      v23 = *(char **)v19;
      if ( (*(_DWORD *)(*(_QWORD *)v19 + 232LL) & 0x10) != 0 )
      {
        v24 = (_DWORD *)(*((_QWORD *)v23 + 37) + *(_QWORD *)(*(_QWORD *)(v18 + 24) + 128LL));
      }
      else
      {
        v24 = (_DWORD *)DesktopAlloc(*(_QWORD *)(v18 + 24), *((unsigned int *)v23 + 50), 0LL);
        if ( !v24 )
        {
          v5 = -1073741801;
LABEL_33:
          ThreadUnlock1(v23, v21, v22);
          return v5;
        }
        if ( *(_QWORD *)(*(_QWORD *)v19 + 296LL) )
        {
          CurrentProcess = PsGetCurrentProcess(v23, v21);
          v25 = *(char **)v19;
          LODWORD(Object) = *(_DWORD *)(*(_QWORD *)v19 + 200LL);
          memmove(v24, *((const void **)v25 + 37), (int)Object);
          if ( (*(_DWORD *)(CurrentProcess + 1124) & 0x40000008) == 0 )
            xxxClientFreeWindowClassExtraBytes(v18, *(_QWORD *)(*(_QWORD *)(v18 + 40) + 296LL));
        }
        v23 = (char *)v24 - *(_QWORD *)(*(_QWORD *)(v18 + 24) + 128LL);
        *(_QWORD *)(*(_QWORD *)v19 + 296LL) = v23;
      }
      if ( v24 )
      {
        *v24 = *((_DWORD *)a2 + 2);
        v24[1] = *((_DWORD *)a2 + 3);
      }
      *(_DWORD *)(*(_QWORD *)v19 + 232LL) |= 0x10u;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 16 )
    return (unsigned int)-1073741811;
  v11 = *(void **)a2;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v11, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v12 = Object;
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v12);
      if ( ProcessWin32Process )
      {
        v14 = *(_DWORD *)(ProcessWin32Process + 12) | 0x4080000;
        if ( !*((_DWORD *)a2 + 2) )
          v14 = *(_DWORD *)(ProcessWin32Process + 12) & 0xFBF7FFFF;
        *(_DWORD *)(ProcessWin32Process + 12) = v14;
      }
      else
      {
        v5 = -1073741816;
      }
    }
    else
    {
      v5 = -1073741811;
    }
    ObfDereferenceObject(v12);
  }
  return v5;
}
