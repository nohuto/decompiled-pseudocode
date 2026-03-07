__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v15[28]; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 80LL))(a1, v15);
  if ( v16 == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v13 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 **))(v5 + 24))(a1, &v13);
    v6 = *v13;
    v14 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 320))(v13, &v14);
    v17 = 0;
    v19 = 0;
    v16 = 3;
    v18 = 0x20000;
    v7 = *v13;
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, _QWORD, __int64 *))(v7 + 40))(v13, v15, 0LL, &v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v12 + 40LL))(
              v12,
              &WKPDID_D3DDebugObjectName,
              25LL,
              "DWM Temp Readback (debug)");
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          135LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v10);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 376LL))(v14, v12, a1);
      v11 = v12;
      v12 = 0LL;
      v9 = 0;
      *a2 = v11;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v8);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    return v9;
  }
}
