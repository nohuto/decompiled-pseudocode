/*
 * XREFs of ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x1802987B4
 * Callers:
 *     ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x180299060 (-ReleaseD3DResources@CD3DSurface@@MEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1802BC370 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID3D11Texture2D>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
