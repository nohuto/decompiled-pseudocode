/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C00CA250
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00CA358 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     DesktopVerifyHeapRange @ 0x1C01BE8D8 (DesktopVerifyHeapRange.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  struct tagWND *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwndEx(a1, 1LL, 1LL);
  v13 = 0LL;
  v14 = (struct tagWND *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v8;
    HMLockObject(v8);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v14 + 3), *((_QWORD *)v14 + 5), 328LL);
    }
    v13 = xxxSetWindowLongPtr(v14, a2, a3, a4, 1);
LABEL_4:
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
