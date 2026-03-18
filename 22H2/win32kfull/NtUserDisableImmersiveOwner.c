/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01CE650
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C000BB08 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C005CF68 (IsImmersiveBandOrShellManaged.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v2;
    HMLockObject(v2);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v8, v9)
      && IsTopLevelWindow(v8)
      && !(unsigned int)IsWindowBeingDestroyed(v10)
      && (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL))
       || *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL))
      && !(unsigned int)xxxEnableWindowWorker((struct tagWND *)v8, 0) )
    {
      *(_DWORD *)(v8 + 320) |= 0x100u;
      v7 = 1;
    }
    else
    {
      UserSetLastError(5);
    }
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
