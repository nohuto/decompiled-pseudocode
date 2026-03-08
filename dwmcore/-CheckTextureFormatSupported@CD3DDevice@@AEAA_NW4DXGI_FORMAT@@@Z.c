/*
 * XREFs of ?CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x1800D0768
 * Callers:
 *     ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x1800D05D0 (-GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CD3DDevice::CheckTextureFormatSupported(CD3DDevice *this, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 69);
  v3 = 0;
  v5 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 232LL))(v2, a2, &v5) >= 0 )
    return (v5 & 0x8220) == 33312;
  return v3;
}
