/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C002F510
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C002F618 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     DesktopVerifyHeapRange @ 0x1C01BFA78 (DesktopVerifyHeapRange.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwndEx(a1, 1LL, 1LL);
  v10 = 0LL;
  v11 = (struct tagWND *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v8;
    HMLockObject(v8);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v11 + 3), *((_QWORD *)v11 + 5), 328LL);
    }
    v10 = xxxSetWindowLongPtr(v11, a2, a3, a4, 1);
LABEL_4:
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
