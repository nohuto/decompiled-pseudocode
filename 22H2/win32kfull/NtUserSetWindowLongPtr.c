/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C0089AE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0089BE8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     DesktopVerifyHeapRange @ 0x1C00FCFE8 (DesktopVerifyHeapRange.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwndEx(a1, 1LL, 1LL);
  v10 = 0LL;
  v11 = v8;
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
        UserSetLastError(87LL, v12, v13);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v11 + 24), *(_QWORD *)(v11 + 40), 320LL);
    }
    v10 = xxxSetWindowLongPtr((struct tagWND *)v11, a2, a3, a4, 1);
LABEL_4:
    ThreadUnlock1(v14);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
