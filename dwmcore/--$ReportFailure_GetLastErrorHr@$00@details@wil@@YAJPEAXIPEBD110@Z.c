__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v7; // esi
  int v8; // ebp
  int LastErrorFail; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  const char *v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  void *v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF
  int v19; // [rsp+68h] [rbp-10h]

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6, v15);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v16) = v10;
  HIDWORD(v16) = wil::details::HrToNtStatus((wil::details *)v10);
  LOBYTE(v17) = 0;
  v19 = v17;
  v18 = v16;
  wil::details::ReportFailure_Base<1,0>(v8, v7, a3, v11, v14, (__int64)a6, (__int64)&v18);
  return v10;
}
