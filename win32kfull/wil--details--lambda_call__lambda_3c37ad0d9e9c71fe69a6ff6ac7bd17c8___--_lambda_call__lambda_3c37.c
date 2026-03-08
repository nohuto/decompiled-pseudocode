/*
 * XREFs of wil::details::lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___::_lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___ @ 0x1C012FCF0
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___::_lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___(
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
