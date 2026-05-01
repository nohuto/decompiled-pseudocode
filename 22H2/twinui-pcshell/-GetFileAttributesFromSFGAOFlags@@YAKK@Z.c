/*
 * XREFs of ?GetFileAttributesFromSFGAOFlags@@YAKK@Z @ 0x180160200
 * Callers:
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x180160970 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 * Callees:
 *     <none>
 */

int __fastcall GetFileAttributesFromSFGAOFlags(unsigned int a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  int result; // eax

  v2 = (a1 >> 18) & 1 | 2;
  if ( (a1 & 0x80000) == 0 )
    v2 = (a1 >> 18) & 1;
  v3 = v2;
  if ( (a1 & 0x60000000) == 0x60000000 && (a1 & 0x400000) == 0 )
    v3 = v2 | 0x10;
  v4 = v3 | 0x800;
  if ( (a1 & 0x4000000) == 0 )
    v4 = v3;
  result = v4 | 0x4000;
  if ( (a1 & 0x2000) == 0 )
    result = v4;
  if ( !result )
    return 128;
  return result;
}
