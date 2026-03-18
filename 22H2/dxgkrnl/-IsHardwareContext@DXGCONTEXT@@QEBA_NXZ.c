/*
 * XREFs of ?IsHardwareContext@DXGCONTEXT@@QEBA_NXZ @ 0x1C000AF6C
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378030 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGCONTEXT::IsHardwareContext(DXGCONTEXT *this)
{
  return (*((_DWORD *)this + 101) & 0x10) != 0;
}
