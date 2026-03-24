/*
 * XREFs of UserSetFont @ 0x1C00E2ABC
 * Callers:
 *     SetIconMetrics @ 0x1C00E22C0 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C00E2C88 (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1C00E2B38 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00E43C4 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  struct HLFONT__ *v6; // rdi
  __int64 v7; // rdx
  struct HLFONT__ *v8; // rcx
  __int64 v9; // r8

  result = CreateFontFromUserProfile(a1);
  v6 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4 )
    {
      v8 = *(struct HLFONT__ **)(GetSessionDpiServerInfo() + 24);
      if ( *a4 != v8 && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo(v8, v7, v9) + 24) )
      {
        GreMarkDeletableFont(*a4);
        GreDeleteObject(*a4);
      }
    }
    *a4 = v6;
    return 1LL;
  }
  return result;
}
