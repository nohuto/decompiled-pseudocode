__int64 __fastcall DebugInspectBitmap(__int64 (__fastcall ***a1)(struct ID2D1Bitmap *, GUID *, __int64 **))
{
  __int64 (__fastcall **v1)(struct ID2D1Bitmap *, GUID *, __int64 **); // rax
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+30h] [rbp+10h] BYREF
  struct ID3D11Texture2D *v11; // [rsp+38h] [rbp+18h] BYREF
  __int64 *v12; // [rsp+40h] [rbp+20h] BYREF

  v1 = *a1;
  v12 = 0LL;
  v2 = (*v1)((struct ID2D1Bitmap *)a1, &GUID_a898a84c_3873_4588_b08b_ebbf978df041, &v12);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *v12;
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(v4 + 104))(
           v12,
           &v10);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v11 = 0LL;
      v6 = (**v10)(v10, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v11);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v6 = DebugInspectTexture(v11, 0);
        v3 = v6;
        if ( v6 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
          v3 = 0;
          goto LABEL_12;
        }
        v7 = 189LL;
      }
      else
      {
        v7 = 187LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v5);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_12:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v12);
  return v3;
}
