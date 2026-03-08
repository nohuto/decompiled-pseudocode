/*
 * XREFs of MiMapViewInSystemSpace @ 0x1406A55B8
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmMapViewInSessionSpace @ 0x14078FC80 (MmMapViewInSessionSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x140791CC0 (MmMapViewInSystemSpaceEx.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     CmFcpMapSection @ 0x1408182C4 (CmFcpMapSection.c)
 *     ExInitializeLeapSecondData @ 0x140850BB0 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1408537B4 (EtwpCoverageEnsureContext.c)
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1409A98F8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AA8E8 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409F042C (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140334140 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x14036CC30 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  int v14; // ebx
  ULONG_PTR v16[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v16[0] = 0LL;
  v10 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v10);
  v11 = *a3;
  if ( !*a3 )
  {
    *(_WORD *)a4 = 0;
    v13 = *(_QWORD *)(a1 + 48) - *a4;
    *a3 = v13;
    goto LABEL_5;
  }
  v12 = (unsigned __int16)*(_DWORD *)a4;
  if ( v11 + v12 >= v12 )
  {
    *a3 = v11 + v12;
    *(_WORD *)a4 = 0;
    v13 = *a3;
    if ( *a3 <= *(_QWORD *)(a1 + 48) - *a4 )
    {
LABEL_5:
      v14 = MiInsertInSystemSpace(v13, a1, a4, a5, a6, v16);
      if ( v14 >= 0 )
      {
        *a2 = v16[0];
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v14 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v10);
  return (unsigned int)v14;
}
