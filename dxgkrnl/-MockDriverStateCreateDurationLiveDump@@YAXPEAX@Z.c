void __fastcall MockDriverStateCreateDurationLiveDump(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+A0h] [rbp-19h] BYREF
  int v7; // [rsp+A4h] [rbp-15h] BYREF
  int v8; // [rsp+A8h] [rbp-11h] BYREF
  int v9; // [rsp+ACh] [rbp-Dh] BYREF
  int v10; // [rsp+B0h] [rbp-9h] BYREF
  int v11; // [rsp+B4h] [rbp-5h] BYREF
  int v12; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+7h]
  __int64 v14; // [rsp+C8h] [rbp+Fh] BYREF
  void *v15; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+E0h] [rbp+27h] BYREF
  _BYTE v18[8]; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+F0h] [rbp+37h]
  char v20; // [rsp+F8h] [rbp+3Fh]
  __int64 v21; // [rsp+120h] [rbp+67h] BYREF
  __int16 v22; // [rsp+128h] [rbp+6Fh] BYREF
  int v23; // [rsp+130h] [rbp+77h] BYREF
  int IsDebuggerPresent; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v19 = *a1;
    v20 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v1);
    if ( *(_DWORD *)(v1 + 200) == 1 )
    {
      v13 = *(_QWORD *)(v1 + 404);
      if ( (unsigned int)dword_1C013A918 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000020000LL) )
        {
          LOBYTE(v2) = 1;
          v23 = *(unsigned __int8 *)(v1 + 209);
          v17 = 0x1000000LL;
          IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v2);
          v6 = *(_DWORD *)(v1 + 3016);
          v7 = *(unsigned __int8 *)(v1 + 2870);
          LOWORD(v21) = *(_WORD *)(v1 + 2820);
          v14 = *(_QWORD *)(v1 + 1824);
          v15 = *(void **)(v1 + 1816);
          v8 = *(_DWORD *)(v1 + 428);
          v9 = *(_DWORD *)(v1 + 424);
          v10 = *(_DWORD *)(v1 + 420);
          v11 = *(_DWORD *)(v1 + 416);
          v12 = *(_DWORD *)(v1 + 412);
          v16 = v13;
          v22 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v3,
            byte_1C009F768,
            v4,
            v5,
            (__int64)&v22,
            (__int64)&v17,
            (__int64)&v16,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            &v15,
            (__int64)&v14,
            (__int64)&v21,
            (__int64)&v7,
            (__int64)&v6,
            (__int64)&IsDebuggerPresent,
            (__int64)&v23);
        }
      }
    }
    if ( v20 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  }
  v21 = 1LL;
  DxgCreateLiveDumpWithWdLogs2(0x193u, 2067LL, 2LL, 0LL, 0LL, 1LL);
}
