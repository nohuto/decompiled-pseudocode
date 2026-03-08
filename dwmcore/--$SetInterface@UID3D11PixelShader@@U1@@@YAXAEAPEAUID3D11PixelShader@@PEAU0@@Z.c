/*
 * XREFs of ??$SetInterface@UID3D11PixelShader@@U1@@@YAXAEAPEAUID3D11PixelShader@@PEAU0@@Z @ 0x1800D059C
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800CFFE0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SetInterface<ID3D11PixelShader,ID3D11PixelShader>(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *a1 = a2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
