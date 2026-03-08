/*
 * XREFs of ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x1800D0CE4
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800CF23C (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::CalcMaxTextureSize(CD3DDevice *this)
{
  int v2; // ecx
  int v3; // eax
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v9[12]; // [rsp+38h] [rbp-38h] BYREF

  if ( *((_QWORD *)this + 71) )
  {
    *((_DWORD *)this + 232) = 0x800000;
  }
  else
  {
    v2 = *((_DWORD *)this + 146);
    if ( v2 <= 37376 )
    {
      v4 = (__int64 *)*((_QWORD *)this + 69);
      v9[6] = 0;
      v9[7] = 0;
      v9[9] = 0;
      v9[10] = 0;
      v9[0] = 2100;
      v9[1] = 1;
      v9[2] = 1;
      v9[3] = 1;
      v9[4] = 61;
      v9[5] = 1;
      v9[8] = 8;
      v5 = *v4;
      v8 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64 *))(v5 + 40))(v4, v9, 0LL, &v8);
      v7 = 2048;
      if ( v6 >= 0 )
        v7 = 4096;
      *((_DWORD *)this + 232) = v7;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
    }
    else if ( v2 == 37632 )
    {
      *((_DWORD *)this + 232) = 4096;
    }
    else
    {
      v3 = 0x4000;
      if ( v2 <= 41216 )
        v3 = 0x2000;
      *((_DWORD *)this + 232) = v3;
    }
  }
}
