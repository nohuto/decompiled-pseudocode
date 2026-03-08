/*
 * XREFs of ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0022A58
 * Callers:
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C0022908 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C00561C4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C0184A40 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C01DF048 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02D86D0 (DxgkWslQueryResourceInfoFromNtHandle.c)
 *     NtDxgkEnumProcesses @ 0x1C0343680 (NtDxgkEnumProcesses.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCKFASTSHARED *__fastcall DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
        DXGAUTOPUSHLOCKFASTSHARED *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTSHARED *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a2, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 4);
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
