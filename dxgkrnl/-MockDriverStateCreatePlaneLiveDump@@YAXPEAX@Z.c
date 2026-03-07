void __fastcall MockDriverStateCreatePlaneLiveDump(int *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  int v8; // [rsp+B0h] [rbp-80h] BYREF
  int v9; // [rsp+B4h] [rbp-7Ch] BYREF
  int v10; // [rsp+B8h] [rbp-78h] BYREF
  int v11; // [rsp+BCh] [rbp-74h] BYREF
  int v12; // [rsp+C0h] [rbp-70h] BYREF
  int v13; // [rsp+C4h] [rbp-6Ch] BYREF
  int v14; // [rsp+C8h] [rbp-68h] BYREF
  int v15; // [rsp+CCh] [rbp-64h] BYREF
  int v16; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-58h]
  __int64 v18; // [rsp+E0h] [rbp-50h] BYREF
  void *v19; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23; // [rsp+108h] [rbp-28h]
  char v24; // [rsp+110h] [rbp-20h]
  __int64 v25; // [rsp+150h] [rbp+20h] BYREF
  __int16 v26; // [rsp+158h] [rbp+28h] BYREF
  int v27; // [rsp+160h] [rbp+30h] BYREF
  int IsDebuggerPresent; // [rsp+168h] [rbp+38h] BYREF

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v23 = *(_QWORD *)a1;
    v24 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v1);
    if ( *(_DWORD *)(v1 + 200) == 1 )
    {
      v17 = *(_QWORD *)(v1 + 404);
      if ( (unsigned int)dword_1C013A918 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000020000LL) )
        {
          LOBYTE(v3) = 1;
          v27 = *(unsigned __int8 *)(v1 + 209);
          v21 = 0x1000000LL;
          IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v3);
          v8 = *(_DWORD *)(v1 + 3016);
          v9 = *(unsigned __int8 *)(v1 + 2870);
          v10 = a1[655];
          v11 = a1[654];
          LOWORD(v25) = *(_WORD *)(v1 + 2820);
          v18 = *(_QWORD *)(v1 + 1824);
          v19 = *(void **)(v1 + 1816);
          v12 = *(_DWORD *)(v1 + 428);
          v13 = *(_DWORD *)(v1 + 424);
          v14 = *(_DWORD *)(v1 + 420);
          v15 = *(_DWORD *)(v1 + 416);
          v16 = *(_DWORD *)(v1 + 412);
          v20 = v17;
          v26 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v4,
            byte_1C009F973,
            v5,
            v6,
            (__int64)&v26,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v16,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            &v19,
            (__int64)&v18,
            (__int64)&v25,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&IsDebuggerPresent,
            (__int64)&v27);
        }
      }
    }
    if ( v24 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  }
  v25 = 0LL;
  v7 = a1[654];
  LOBYTE(v25) = 1;
  DxgCreateLiveDumpWithWdLogs2(0x193u, 2067LL, 0LL, v7, *((_QWORD *)a1 + 328), 1LL);
}
