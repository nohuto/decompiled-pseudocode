/*
 * XREFs of xxxConsoleControl @ 0x1C003BC58
 * Callers:
 *     NtUserConsoleControl @ 0x1C003BB40 (NtUserConsoleControl.c)
 * Callees:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003BFA8 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C003C664 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     DesktopAlloc @ 0x1C004B2A0 (DesktopAlloc.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0051A24 (xxxClientFreeWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C021E8AC (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  void *v11; // rcx
  PVOID v12; // rdi
  __int64 ProcessWin32Process; // rax
  unsigned int v14; // edx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // r12
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  char *v21; // rcx
  __int64 v22; // r15
  _DWORD *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  PVOID Object[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-60h]
  _QWORD *v29; // [rsp+60h] [rbp-58h]
  _QWORD v30[3]; // [rsp+68h] [rbp-50h] BYREF
  const void *v31; // [rsp+80h] [rbp-38h]
  int v32; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 == 8 )
      return (unsigned int)xxxUserNotifyConsoleApplication(a2);
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a3 == 24 )
    {
      xxxbFullscreenSwitch(*(unsigned int *)a2, *((_QWORD *)a2 + 1));
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
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
    if ( !v10 )
    {
      if ( a3 == 16 )
      {
        v11 = *(void **)a2;
        Object[0] = 0LL;
        v5 = ObReferenceObjectByHandle(v11, 0x200u, (POBJECT_TYPE)PsProcessType, 1, Object, 0LL);
        if ( (v5 & 0x80000000) == 0 )
        {
          v12 = Object[0];
          if ( (unsigned int)PsGetProcessSessionId(Object[0]) == gSessionId )
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
      return (unsigned int)-1073741811;
    }
    if ( v10 != 1 )
      return (unsigned int)-1073741821;
    if ( a3 != 16 )
      return (unsigned int)-1073741811;
    v16 = (_QWORD *)ValidateHwnd(*(_QWORD *)a2);
    v17 = v16;
    Object[2] = v16;
    if ( !v16 )
      return v5;
    v18 = v16 + 5;
    v29 = v16 + 5;
    v19 = v16[5];
    if ( (*(_BYTE *)(v19 + 18) & 4) != 0 || *(char *)(v19 + 19) < 0 || *(int *)(v19 + 200) < 8 )
      return v5;
    if ( *(_QWORD *)(v16[2] + 424LL) != PsGetCurrentProcessWin32Process(v19) )
      return (unsigned int)-1073741790;
    v30[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v30[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v30;
    v30[1] = v17;
    HMLockObject(v17);
    v22 = *v18;
    if ( (*(_DWORD *)(*v18 + 232LL) & 0x800) != 0 )
    {
      v23 = (_DWORD *)(*(_QWORD *)(v17[3] + 128LL) + *(_QWORD *)(v22 + 296));
    }
    else
    {
      v23 = (_DWORD *)DesktopAlloc(v17[3], *(unsigned int *)(v22 + 200), 0LL);
      Object[3] = v23;
      if ( !v23 )
      {
        v5 = -1073741801;
LABEL_33:
        ThreadUnlock1(v21);
        return v5;
      }
      if ( *(_QWORD *)(*v18 + 296LL) )
      {
        CurrentProcess = PsGetCurrentProcess(v21, v24, v25);
        v32 = *(_DWORD *)(*v18 + 200LL);
        v31 = *(const void **)(*v18 + 296LL);
        memmove(v23, v31, v32);
        if ( (*(_DWORD *)(CurrentProcess + 1124) & 0x40000008) == 0 )
          xxxClientFreeWindowClassExtraBytes(v17, *(_QWORD *)(v17[5] + 296LL));
      }
      v21 = (char *)v23 - *(_QWORD *)(v17[3] + 128LL);
      *(_QWORD *)(*v18 + 296LL) = v21;
    }
    if ( v23 )
    {
      *v23 = *((_DWORD *)a2 + 2);
      v23[1] = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(*v18 + 232LL) |= 0x800u;
    goto LABEL_33;
  }
  if ( a3 == 24 )
    xxxSetConsoleCaretInfo(a2);
  return a3 != 24 ? 0xC000000D : 0;
}
