/*
 * XREFs of ?Attach@?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAXPEAVCVisual@@@Z @ 0x1800BAC7C
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BAD30 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVisual>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}
