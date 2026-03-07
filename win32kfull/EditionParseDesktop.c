__int64 __fastcall EditionParseDesktop(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        char a5,
        int a6,
        UNICODE_STRING *String1,
        _DWORD *a8,
        int a9,
        void **a10)
{
  unsigned int DesktopEx2; // esi
  __int64 v14; // rcx
  bool v15; // bl
  _QWORD *i; // rdi
  const UNICODE_STRING *v17; // rax

  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( a8 && *a8 != *(_DWORD *)SGDGetUserSessionState(a1) )
    return 3221225485LL;
  v15 = IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1);
  if ( !v15 )
    EnterCrit(1LL, 0LL);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 2); ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      if ( a8 )
        DesktopEx2 = xxxCreateDesktopEx2(a1, a3, a4, String1, a8[1], a10);
      goto LABEL_14;
    }
    if ( ObQueryNameInfo(i) )
    {
      v17 = (const UNICODE_STRING *)(ObQueryNameInfo(i) + 8);
      if ( v17 )
      {
        if ( RtlEqualUnicodeString(String1, v17, (a5 & 0x40) != 0) )
          break;
      }
    }
  }
  if ( !a8 )
  {
    DesktopEx2 = 0;
    goto LABEL_13;
  }
  if ( a5 < 0 )
  {
    DesktopEx2 = 0x40000000;
LABEL_13:
    ObfReferenceObject(i);
    *a10 = i;
    goto LABEL_14;
  }
  DesktopEx2 = -1073741771;
LABEL_14:
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v14);
  return DesktopEx2;
}
