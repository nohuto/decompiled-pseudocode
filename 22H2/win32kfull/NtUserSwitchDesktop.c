/*
 * XREFs of NtUserSwitchDesktop @ 0x1C00B4300
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00B444C (xxxSwitchDesktopWithFade.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, int a3)
{
  BOOL v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v5 = 0;
  v19 = 0LL;
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
      UserSetLastError(5LL);
      goto LABEL_9;
    }
    PushW32ThreadLock((__int64)Object, &v18, UserDereferenceObject);
    v12 = Object;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v12 = Object;
    }
    ObfDereferenceObject(v12);
    v14 = *((_QWORD *)Object + 5);
    if ( a2 )
      v15 = xxxSwitchDesktopWithFade(v14, (_DWORD)Object, v13, a2, a3);
    else
      v15 = xxxSwitchDesktop(v14, (__int64)Object, 0);
    v16 = v15;
    PopAndFreeW32ThreadLock((__int64)&v18);
    v5 = v16 >= 0;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v5;
}
