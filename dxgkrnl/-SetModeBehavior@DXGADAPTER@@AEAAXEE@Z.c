void __fastcall DXGADAPTER::SetModeBehavior(DXGADAPTER *this, __int64 a2, char a3)
{
  int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v7; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v8; // [rsp+68h] [rbp-98h] BYREF
  _DXGKARG_CONTROLMODEBEHAVIOR v9; // [rsp+78h] [rbp-88h] BYREF
  __int128 v10; // [rsp+88h] [rbp-78h] BYREF
  int v11; // [rsp+98h] [rbp-68h]
  _OWORD v12[6]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v13; // [rsp+100h] [rbp+0h]

  *(_QWORD *)&v9.Request.0 = 0LL;
  v9.NotSatisfied.Value = 0;
  if ( a3 )
  {
    v6 = 0;
    v12[0] = *(_OWORD *)L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v13 = aRegistryMachin[48];
    v12[2] = *(_OWORD *)L"e\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v12[1] = *(_OWORD *)L"y\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v8.Buffer = (wchar_t *)v12;
    v12[4] = *(_OWORD *)L"soft\\Windows\\DWM";
    v11 = *(_DWORD *)L"r";
    v12[3] = *(_OWORD *)L"RE\\Microsoft\\Windows\\DWM";
    v10 = *(_OWORD *)L"HighColor";
    *(_QWORD *)&v8.Length = 6422624LL;
    v12[5] = *(_OWORD *)L"dows\\DWM";
    *(_QWORD *)&v7.Length = 1310738LL;
    v7.Buffer = (wchar_t *)&v10;
    if ( (int)ReadRegistryDwordKeyValue(&v8, &v7, &v6) >= 0 )
      v9.Request.Value = (v6 != 0) | v9.Request.Value & 0xFFFFFFFE;
  }
  else
  {
    v9.Request.Value = 1;
  }
  v4 = DXGADAPTER::DdiControlModeBehavior(this, &v9);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
  {
    v5 = v4;
    WdLogSingleEntry1(2LL, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unexpected error 0x%I64x from DdiControlModeBehavior",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
