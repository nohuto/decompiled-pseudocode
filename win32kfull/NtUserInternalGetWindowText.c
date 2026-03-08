/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00D1530
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00D1660 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00D16C4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00D176C (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v10; // r14
  struct _LARGE_UNICODE_STRING *StrName; // rax
  struct _LARGE_UNICODE_STRING *v12; // rax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = (int)a3;
  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  v9 = 0;
  if ( v6 )
  {
    v10 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184);
    if ( *(_QWORD *)(v6 + 184) )
    {
      v14 = 0LL;
      StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                  (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184),
                  (struct _LARGE_UNICODE_STRING *)&v14);
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v8 + 24), StrName);
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 184LL) )
      {
        v14 = 0LL;
        v12 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v10, (struct _LARGE_UNICODE_STRING *)&v14);
        v9 = TextCopy(v12, a2, (unsigned int)v3);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
