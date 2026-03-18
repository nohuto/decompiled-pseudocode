/*
 * XREFs of ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C00136F8
 * Callers:
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C001358C (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C00524B8 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053CA0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0078090 (-Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::_RequiresRemLock(unsigned __int8 MajorCode, unsigned __int8 MinorCode)
{
  __int64 result; // rax

  if ( MajorCode < 0x16u )
    return 3LL;
  if ( MajorCode <= 0x17u )
    return 1LL;
  if ( MajorCode != 27 )
    return 3LL;
  result = 2LL;
  if ( MinorCode != 2 )
    return 1LL;
  return result;
}
