/*
 * XREFs of DXGADAPTER_DdiControlInterrupt @ 0x1C0003F50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C017F71C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiControlInterrupt(
        DXGADAPTER *a1,
        enum _DXGK_INTERRUPT_TYPE a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  return DXGADAPTER::DdiControlInterrupt(a1, a2, a3, a4);
}
