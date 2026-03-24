/*
 * XREFs of ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00E63FC
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00E6080 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00A55D0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C00E6498 (-bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z.c)
 */

__int64 __fastcall bCleanupFontTable(struct PFT **a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  int v4; // eax
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = (__int64)*a1;
  v1 = v7;
  if ( v7 )
  {
    v4 = PFTOBJ::bUnloadAllButPermanentFonts((PFTOBJ *)&v7);
    v5 = v4;
    if ( *(_QWORD *)(v1 + 8) )
      v5 = bCleanupFontHash((struct _FONTHASH **)(v1 + 8)) & v4;
    if ( *(_QWORD *)v1 )
      v5 &= bCleanupFontHash((struct _FONTHASH **)v1);
    if ( *(_QWORD *)(v1 + 16) )
      LOBYTE(v5) = bCleanupFontHash((struct _FONTHASH **)(v1 + 16)) & v5;
    if ( !*(_DWORD *)(v1 + 28) )
    {
      Win32FreePool((void *)v1);
      v1 = 0LL;
    }
    v2 = (v1 == 0) & (unsigned __int8)v5;
    *a1 = 0LL;
  }
  return v2;
}
