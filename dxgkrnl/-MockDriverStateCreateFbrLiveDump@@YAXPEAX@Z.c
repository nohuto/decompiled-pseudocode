void __fastcall MockDriverStateCreateFbrLiveDump(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  int v8; // [rsp+A0h] [rbp-80h] BYREF
  int v9; // [rsp+A4h] [rbp-7Ch] BYREF
  int v10; // [rsp+A8h] [rbp-78h] BYREF
  int v11; // [rsp+ACh] [rbp-74h] BYREF
  int v12; // [rsp+B0h] [rbp-70h] BYREF
  int v13; // [rsp+B4h] [rbp-6Ch] BYREF
  int v14; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-60h]
  __int64 v16; // [rsp+C8h] [rbp-58h] BYREF
  void *v17; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-40h] BYREF
  char v20[8]; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v21; // [rsp+F0h] [rbp-30h]
  char v22; // [rsp+F8h] [rbp-28h]
  __int64 v23; // [rsp+130h] [rbp+10h] BYREF
  __int16 v24; // [rsp+138h] [rbp+18h] BYREF
  int v25; // [rsp+140h] [rbp+20h] BYREF
  int IsDebuggerPresent; // [rsp+148h] [rbp+28h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v21 = *a1;
    v22 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v1);
    if ( *(_DWORD *)(v1 + 200) == 1 )
    {
      v15 = *(_QWORD *)(v1 + 404);
      if ( (unsigned int)dword_1C013A918 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000020000LL) )
        {
          LOBYTE(v3) = 1;
          v25 = *(unsigned __int8 *)(v1 + 209);
          v19 = 0x1000000LL;
          IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v3);
          v8 = *(_DWORD *)(v1 + 3016);
          v9 = *(unsigned __int8 *)(v1 + 2870);
          LOWORD(v23) = *(_WORD *)(v1 + 2820);
          v16 = *(_QWORD *)(v1 + 1824);
          v17 = *(void **)(v1 + 1816);
          v10 = *(_DWORD *)(v1 + 428);
          v11 = *(_DWORD *)(v1 + 424);
          v12 = *(_DWORD *)(v1 + 420);
          v13 = *(_DWORD *)(v1 + 416);
          v14 = *(_DWORD *)(v1 + 412);
          v18 = v15;
          v24 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v4,
            byte_1C009F870,
            v5,
            v6,
            (__int64)&v24,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10,
            &v17,
            (__int64)&v16,
            (__int64)&v23,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&IsDebuggerPresent,
            (__int64)&v25);
        }
      }
    }
    if ( v22 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  }
  v23 = 0LL;
  v7 = *a1;
  LOBYTE(v23) = 1;
  DxgCreateLiveDumpWithWdLogs2(0x193u, 2067LL, 1LL, v7, a1[12], 1LL);
}
