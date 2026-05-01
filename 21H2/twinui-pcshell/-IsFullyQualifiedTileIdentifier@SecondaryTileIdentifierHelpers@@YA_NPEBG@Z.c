/*
 * XREFs of ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x180159510
 * Callers:
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x18015726C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     <none>
 */

char __fastcall SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(
        wchar_t *Str,
        const unsigned __int16 *a2)
{
  wchar_t *v3; // rdi
  wchar_t *v4; // rax
  char v5; // cl

  v3 = wcschr(Str, 0x21u);
  v4 = wcschr(Str, 0x3Au);
  v5 = 0;
  if ( v4 )
    return v3 != 0LL;
  return v5;
}
