/*
 * XREFs of ??0PlaneInfo@CCheckMPOCache@@QEAA@AEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x180116CA8
 * Callers:
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180116B94 (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CCheckMPOCache::PlaneInfo *__fastcall CCheckMPOCache::PlaneInfo::PlaneInfo(
        CCheckMPOCache::PlaneInfo *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2)
{
  __int128 v3; // xmm1
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v8[12]; // [rsp+28h] [rbp-40h] BYREF

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  v3 = *((_OWORD *)a2 + 8);
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_OWORD *)this + 8) = v3;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 1);
  v5 = *v4;
  v7 = 0LL;
  if ( (*v5)(v4, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v7) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 80LL))(v7, v8);
    *((_DWORD *)this + 36) = v8[0];
    *((_DWORD *)this + 37) = v8[1];
    *((_DWORD *)this + 38) = v8[4];
    *((_DWORD *)this + 39) = v8[10];
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v7);
  return this;
}
