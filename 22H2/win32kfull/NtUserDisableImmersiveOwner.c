/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01F7580
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012C568 (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C0208B88 (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v2;
    HMLockObject(v2);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v5)
      && (unsigned int)IsTopLevelWindow(v5)
      && !(unsigned int)IsWindowBeingDestroyed(v5)
      && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL))
       || *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL)) )
    {
      v4 = xxxDisableImmersiveOwner(v5);
    }
    else
    {
      UserSetLastError(5LL, v6, v7);
    }
    ThreadUnlock1(v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
