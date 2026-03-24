/*
 * XREFs of NtUserSwitchDesktop @ 0x1C00283B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktopWithFade @ 0x1C011D7D0 (xxxSwitchDesktopWithFade.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, unsigned int a3)
{
  BOOL v3; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  PVOID v10; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  Object = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 0x40;
  else
    v8 = 0;
  if ( v8 )
    goto LABEL_15;
  LOBYTE(v7) = 1;
  if ( (int)ValidateHdesk(a1, v7, 256LL, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 64LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError(5LL);
    goto LABEL_11;
  }
  PushW32ThreadLock(Object, &v16, UserDereferenceObject);
  v10 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v10 = Object;
  }
  ObfDereferenceObject(v10);
  v12 = *((_QWORD *)Object + 5);
  if ( a2 )
    v13 = xxxSwitchDesktopWithFade(v12, (_DWORD)Object, v11, a2, a3);
  else
    v13 = xxxSwitchDesktop(v12, Object, 0LL, a3);
  v14 = v13;
  PopAndFreeW32ThreadLock(&v16);
  v3 = v14 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v9);
  return v3;
}
