__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v6; // edi
  int v7; // esi
  int LastErrorFail; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r9d
  const char *v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  void *v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF
  int v19; // [rsp+68h] [rbp-10h]

  v6 = (int)a2;
  v7 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, (unsigned int)"wil", a4, v13, a6, v15);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v16) = v10;
  HIDWORD(v16) = wil::details::HrToNtStatus((wil::details *)v10, v9);
  LOBYTE(v17) = 0;
  v19 = v17;
  v18 = v16;
  wil::details::ReportFailure_Base<1,0>(v7, v6, (int)"wil", v11, v14, (__int64)a6, (__int64)&v18);
  return v10;
}
