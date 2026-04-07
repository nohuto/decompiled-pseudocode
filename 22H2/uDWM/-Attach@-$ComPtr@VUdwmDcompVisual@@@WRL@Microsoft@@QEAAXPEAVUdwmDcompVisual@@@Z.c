/*
 * XREFs of ?Attach@?$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z @ 0x180047650
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029820 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180047440 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}
