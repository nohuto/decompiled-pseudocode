void __fastcall HmgpIncProcessHandleCountEx(struct _W32PROCESS *a1)
{
  unsigned int v1; // r9d
  int v2; // r8d
  int v3; // ebx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 16);
  v2 = *((_DWORD *)a1 + 15) + 1;
  *((_DWORD *)a1 + 15) = v2;
  v3 = v1;
  if ( v2 > v1 )
    v3 = v2;
  if ( v2 == 1000 * (v2 / 1000)
    && v1 != v3
    && (unsigned int)dword_1C02C93D8 > 5
    && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    v7 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C02C93D8,
      (unsigned int)&unk_1C02955F8,
      v5,
      v6,
      (__int64)&v7,
      (__int64)&v8);
  }
  *((_DWORD *)a1 + 16) = v3;
}
