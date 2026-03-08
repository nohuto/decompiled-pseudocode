/*
 * XREFs of UserSetFont @ 0x1C010E6E8
 * Callers:
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1C010E764 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C010E8B4 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct HLFONT__ *v7; // rdi

  result = CreateFontFromUserProfile(a1);
  v7 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4
      && *a4 != *(struct HLFONT__ **)(GetSessionDpiServerInfo(v6) + 24)
      && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 24) )
    {
      GreMarkDeletableFont(*a4);
      GreDeleteObject(*a4);
    }
    *a4 = v7;
    return 1LL;
  }
  return result;
}
