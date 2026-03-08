/*
 * XREFs of NtUserSwitchDesktop @ 0x1C00EA5E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00EA72C (xxxSwitchDesktopWithFade.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, int a3)
{
  BOOL v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v5 = 0;
  v16 = 0LL;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 0x40) != 0 )
  {
    goto LABEL_14;
  }
  LOBYTE(v7) = 1;
  if ( (int)ValidateHdesk(a1, v7, 256LL, &Object) >= 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 64LL) & 4) != 0 )
    {
      ObfDereferenceObject(Object);
LABEL_14:
      UserSetLastError(5);
      goto LABEL_9;
    }
    PushW32ThreadLock((__int64)Object, &v15, UserDereferenceObject);
    v9 = Object;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v9 = Object;
    }
    ObfDereferenceObject(v9);
    v11 = *((_QWORD *)Object + 5);
    if ( a2 )
      v12 = xxxSwitchDesktopWithFade(v11, (_DWORD)Object, v10, a2, a3);
    else
      v12 = xxxSwitchDesktop(v11, (__int64)Object, 0, a3);
    v13 = v12;
    PopAndFreeW32ThreadLock((__int64)&v15);
    v5 = v13 >= 0;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
