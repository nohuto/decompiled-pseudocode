/*
 * XREFs of ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x1800E62E0
 * Callers:
 *     ?OnVertex0Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x180100070 (-OnVertex0Changed@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x180101560 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180177B9C (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct _GUID *__fastcall BamoDragSourceClientProxy::GetType(BamoDragSourceClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct _GUID *)((char *)this + 40);
}
