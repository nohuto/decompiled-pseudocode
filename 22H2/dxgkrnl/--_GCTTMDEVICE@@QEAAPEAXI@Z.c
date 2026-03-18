/*
 * XREFs of ??_GCTTMDEVICE@@QEAAPEAXI@Z @ 0x1C0058C9C
 * Callers:
 *     ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C0354DE0 (-CloseCallback@CTTMDEVICE@@CAX_K@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0355060 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

CTTMDEVICE *__fastcall CTTMDEVICE::`scalar deleting destructor'(CTTMDEVICE *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0);
  return this;
}
