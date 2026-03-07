void __fastcall DpiFreeAdapterInfo(_BYTE *a1)
{
  if ( *a1 )
  {
    DxgkFreeUnicodeString((__int64)(a1 + 8));
    DxgkFreeUnicodeString((__int64)(a1 + 24));
    DxgkFreeUnicodeString((__int64)(a1 + 40));
    DxgkFreeUnicodeString((__int64)(a1 + 72));
    DxgkFreeUnicodeString((__int64)(a1 + 88));
    DxgkFreeUnicodeString((__int64)(a1 + 56));
    DxgkFreeUnicodeString((__int64)(a1 + 184));
    DxgkFreeUnicodeString((__int64)(a1 + 200));
    DxgkFreeUnicodeString((__int64)(a1 + 120));
    DxgkFreeUnicodeString((__int64)(a1 + 144));
    DxgkFreeUnicodeString((__int64)(a1 + 216));
    DxgkFreeUnicodeString((__int64)(a1 + 232));
    DxgkFreeUnicodeString((__int64)(a1 + 272));
    DxgkFreeUnicodeString((__int64)(a1 + 288));
  }
}
