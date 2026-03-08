/*
 * XREFs of ??0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z @ 0x1800A84B4
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1800A840C (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::CWarpLockSubresource(
        CWarpLockSubresource *this,
        struct IWarpPrivateAPI *a2)
{
  CWarpLockSubresource *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IWarpPrivateAPI *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  result = this;
  *(_OWORD *)((char *)this + 40) = 0LL;
  return result;
}
