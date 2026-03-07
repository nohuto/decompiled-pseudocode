void __fastcall wil::details_abi::UsageIndexes::Record(
        wil::details_abi::UsageIndexes *this,
        __int64 a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]

  if ( *((_BYTE *)this + 56) )
  {
    v5 = 0x418A073AA3BC1C75LL;
    v6 = 0x418A073AA3BC2475LL;
    v7 = 0x418A073AA3BC2C75LL;
    wil::details_abi::RecordWnfUsageIndex(
      (wil::details_abi *)&v5,
      (const struct __WIL__WNF_STATE_NAME *)3,
      (unsigned __int16 *)this,
      a4);
  }
  if ( *((_BYTE *)this + 120) )
  {
    v5 = 0x418A073AA3BC3475LL;
    v6 = 0x418A073AA3BC3C75LL;
    v7 = 0x418A073AA3BC4475LL;
    wil::details_abi::RecordWnfUsageIndex(
      (wil::details_abi *)&v5,
      (const struct __WIL__WNF_STATE_NAME *)3,
      (unsigned __int16 *)this + 32,
      a4);
  }
  if ( *((_BYTE *)this + 184) )
  {
    v5 = 0x418A073AA3BC4C75LL;
    v6 = 0x418A073AA3BC5475LL;
    v7 = 0x418A073AA3BC5C75LL;
    v8 = 0x418A073AA3BC6475LL;
    v9 = 0x418A073AA3BC6C75LL;
    v10 = 0x418A073AA3BC7475LL;
    wil::details_abi::RecordWnfUsageIndex(
      (wil::details_abi *)&v5,
      (const struct __WIL__WNF_STATE_NAME *)6,
      (unsigned __int16 *)this + 64,
      a4);
  }
}
