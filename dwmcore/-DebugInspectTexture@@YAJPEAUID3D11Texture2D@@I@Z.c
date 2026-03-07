__int64 __fastcall DebugInspectTexture(struct ID3D11Texture2D *a1, unsigned int a2)
{
  int StagingTexture; // eax
  unsigned int v4; // ebx
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  int v9; // edi
  __int64 v11; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-9h] BYREF
  void *v14; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+7h]
  unsigned int v16[12]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v13 = 0LL;
  StagingTexture = GetStagingTexture(a1, &v13);
  v4 = StagingTexture;
  if ( StagingTexture >= 0 )
  {
    v5 = v13;
    (*(void (__fastcall **)(__int64 *, unsigned int *))(*v13 + 80))(v13, v16);
    v6 = *v5;
    v12 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 **))(v6 + 24))(v5, &v12);
    v7 = *v12;
    v11 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 320))(v12, &v11);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v11 + 112LL))(
           v11,
           v5,
           a2,
           1LL,
           0,
           &v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
      DebugInspectSysMemSurface(v14, v16[0], v16[1], (enum DXGI_FORMAT)v16[4], v15);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 120LL))(v11, v5, a2);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      v4 = v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)StagingTexture);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v4;
}
