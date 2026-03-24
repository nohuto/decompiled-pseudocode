/*
 * XREFs of wil::details::lambda_call__lambda_529edb1b3a888443a255f78383d1a039___::_lambda_call__lambda_529edb1b3a888443a255f78383d1a039___ @ 0x1C016AB0C
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B154 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_529edb1b3a888443a255f78383d1a039___::_lambda_call__lambda_529edb1b3a888443a255f78383d1a039___(
        __int64 a1)
{
  void *v1; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = **(void ***)a1;
    if ( v1 )
      Win32FreePool(v1);
  }
}
