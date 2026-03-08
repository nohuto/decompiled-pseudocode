/*
 * XREFs of Win32CreateSection @ 0x1C00D4B5C
 * Callers:
 *     CreateDesktopHeap @ 0x1C00D4A60 (CreateDesktopHeap.c)
 *     cMapRemoteFonts @ 0x1C028E420 (cMapRemoteFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int Section; // ebx

  Section = MmCreateSection(a1, 983071LL, 0LL, a4, 4, a6, 0LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
