void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rcx
  int v5; // [rsp+B8h] [rbp-80h] BYREF
  int v6; // [rsp+BCh] [rbp-7Ch] BYREF
  int v7; // [rsp+C0h] [rbp-78h] BYREF
  int v8; // [rsp+C4h] [rbp-74h] BYREF
  int v9; // [rsp+C8h] [rbp-70h] BYREF
  const char *v10; // [rsp+D0h] [rbp-68h] BYREF
  wchar_t *v11; // [rsp+D8h] [rbp-60h] BYREF
  const char *v12; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v14; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+100h] [rbp-38h] BYREF
  __int64 v17; // [rsp+108h] [rbp-30h] BYREF
  __int64 v18; // [rsp+110h] [rbp-28h] BYREF
  __int64 v19; // [rsp+118h] [rbp-20h] BYREF
  int v20; // [rsp+138h] [rbp+0h] BYREF
  int v21; // [rsp+148h] [rbp+10h] BYREF
  int v22; // [rsp+150h] [rbp+18h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 1);
  if ( *v4 > 2u )
  {
    v10 = (const char *)*((_QWORD *)a2 + 6);
    v20 = *((_DWORD *)a2 + 17);
    v21 = *((_DWORD *)a2 + 4);
    v11 = (wchar_t *)*((_QWORD *)a2 + 15);
    v12 = (const char *)*((_QWORD *)a2 + 14);
    v22 = *((_DWORD *)a2 + 26);
    v13 = *((_QWORD *)a2 + 12);
    v14 = *((_QWORD *)a2 + 11);
    v5 = *((_DWORD *)a2 + 20);
    v15 = *((_QWORD *)a2 + 9);
    v6 = *((_DWORD *)a2 + 8);
    v16 = *((_QWORD *)a2 + 3);
    v7 = *(_DWORD *)a2;
    v17 = *((_QWORD *)a2 + 16);
    v8 = *((_DWORD *)a2 + 16);
    v18 = *((_QWORD *)a2 + 7);
    v9 = *((_DWORD *)a2 + 2);
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v4,
      (unsigned __int8 *)dword_18037A705,
      a3,
      a4,
      (__int64)&v19,
      (__int64)&v9,
      (const char **)&v18,
      (__int64)&v8,
      (const char **)&v17,
      (__int64)&v7,
      (wchar_t **)&v16,
      (__int64)&v6,
      (const char **)&v15,
      (__int64)&v5,
      (const char **)&v14,
      (wchar_t **)&v13,
      (__int64)&v22,
      &v12,
      &v11,
      (__int64)&v21,
      (__int64)&v20,
      &v10);
  }
}
