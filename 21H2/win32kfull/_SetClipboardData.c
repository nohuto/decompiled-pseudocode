/*
 * XREFs of _SetClipboardData @ 0x1C014613C
 * Callers:
 *     NtUserSetClipboardData @ 0x1C0145ED0 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01461D0 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 */

__int64 __fastcall SetClipboardData(unsigned int a1, char *a2, int a3, int a4)
{
  __int64 v8; // rdx
  struct tagWINDOWSTATION *v9; // rcx
  unsigned int v10; // esi

  v9 = CheckClipboardAccess();
  if ( !v9 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL, v8);
    return 0LL;
  }
  v10 = InternalSetClipboardData(v9, a1, a2, a3, a4);
  if ( v10 )
  {
    if ( a1 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( a1 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v10;
}
