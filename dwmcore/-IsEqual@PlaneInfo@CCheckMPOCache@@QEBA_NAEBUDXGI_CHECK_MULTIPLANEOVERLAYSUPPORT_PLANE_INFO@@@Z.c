/*
 * XREFs of ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x180116F40
 * Callers:
 *     ?Check@CCheckMPOCache@@UEAA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180116E90 (-Check@CCheckMPOCache@@UEAA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCheckMPOCache::PlaneInfo::IsEqual(
        CCheckMPOCache::PlaneInfo *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v8[12]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_DWORD *)this == *(_DWORD *)a2
    && *((_DWORD *)this + 4) == *((_DWORD *)a2 + 4)
    && *((_DWORD *)this + 7) == *((_DWORD *)a2 + 7)
    && !memcmp_0((char *)this + 32, (char *)a2 + 32, 0x3CuLL)
    && *((_DWORD *)this + 26) == *((_DWORD *)a2 + 26)
    && *((_DWORD *)this + 27) == *((_DWORD *)a2 + 27) )
  {
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 1);
    if ( *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 1) == v4 )
      return 1;
    v6 = *v4;
    v7 = 0LL;
    if ( (*v6)(v4, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v7) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 80LL))(v7, v8);
      if ( *((_DWORD *)this + 36) == v8[0]
        && *((_DWORD *)this + 37) == v8[1]
        && *((_DWORD *)this + 38) == v8[4]
        && *((_DWORD *)this + 39) == v8[10] )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v7);
        return 1;
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v7);
  }
  return 0;
}
