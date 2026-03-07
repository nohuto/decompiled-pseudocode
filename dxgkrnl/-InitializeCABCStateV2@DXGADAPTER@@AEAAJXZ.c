__int64 __fastcall DXGADAPTER::InitializeCABCStateV2(DXGADAPTER *this)
{
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = HIDWORD(this);
  v2 = 0;
  GetCabcOptionFromRegistry(&v2);
  return ZwUpdateWnfStateData(&WNF_DXGK_CABC_OPTION_CHANGED, &v2, 4LL, 0LL, 0LL, 0, 0);
}
