NTSTATUS __fastcall DisplayID_GetProductCode(const struct DisplayIDObj *a1, unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  unsigned __int16 *v4; // r10
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return -1073741811;
  v5 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v5);
  if ( result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v5) )
      return RtlStringCchPrintfW(
               v4,
               5uLL,
               (size_t *)L"%04x",
               *(unsigned __int8 *)(v3 + 6) + (*(unsigned __int8 *)(v3 + 7) << 8));
    else
      return -1073741637;
  }
  return result;
}
