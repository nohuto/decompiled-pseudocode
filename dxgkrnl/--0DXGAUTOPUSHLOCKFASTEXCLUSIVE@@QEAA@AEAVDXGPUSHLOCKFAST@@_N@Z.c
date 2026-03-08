/*
 * XREFs of ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C001C948
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C001A510 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01C5F60 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0219E20 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02BBCB4 (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02BC2EC (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02BC364 (-EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     DxgkWslDestroyNtSharedObject @ 0x1C0324A90 (DxgkWslDestroyNtSharedObject.c)
 *     DxgkWslShareObjects @ 0x1C0324D60 (DxgkWslShareObjects.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C03504A0 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C03505D0 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCKFASTEXCLUSIVE *__fastcall DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
        DXGAUTOPUSHLOCKFASTEXCLUSIVE *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTEXCLUSIVE *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  *((_QWORD *)a2 + 1) = KeGetCurrentThread();
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
