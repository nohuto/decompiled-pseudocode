/*
 * XREFs of EditionParseDesktop @ 0x1C009DB40
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C009DCA4 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

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
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // bl
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *i; // rdi
  const UNICODE_STRING *v20; // rax

  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( a8 && *a8 != *(_DWORD *)SGDGetUserSessionState(a1) )
    return 3221225485LL;
  v16 = IS_USERCRIT_OWNED_EXCLUSIVE();
  if ( !v16 )
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
      v20 = (const UNICODE_STRING *)(ObQueryNameInfo(i) + 8);
      if ( v20 )
      {
        if ( RtlEqualUnicodeString(String1, v20, (a5 & 0x40) != 0) )
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
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v15, v14, v17, v18);
  return DesktopEx2;
}
