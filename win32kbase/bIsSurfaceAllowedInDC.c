__int64 __fastcall bIsSurfaceAllowedInDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+70h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (struct _LIST_ENTRY *)a1 == WPP_MAIN_CB.Queue.ListEntry.Blink )
    return 1;
  v3 = 0;
  v4 = 1;
  if ( !a2 )
    return v4;
  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  v6 = *(_DWORD *)(a2 + 40) & 1;
  if ( v6 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    if ( (unsigned int)dword_1C02C93D8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
      return v3;
    v11 = v8;
LABEL_17:
    v12 = 65303;
    v13 = 0x1000000LL;
    v10 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (unsigned int)&unk_1C0295566,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v10);
    return v3;
  }
  if ( v2 && v6 != (*(_DWORD *)(v2 + 40) & 1) )
  {
    if ( (unsigned int)dword_1C02C93D8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
      return v3;
    v11 = 2;
    goto LABEL_17;
  }
  return v4;
}
