/*
 * XREFs of MmMapViewOfSection @ 0x1406128D0
 * Callers:
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     PspMapView @ 0x14058411C (PspMapView.c)
 *     PspMapSiloSharedDataView @ 0x1406120C8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140612100 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x140612F00 (NtInitializeNlsFiles.c)
 *     NtGetNlsSectionPtr @ 0x14069CEC0 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x1406D9900 (AlpcpCreateView.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140771904 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3A0C (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140959B70 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406396D0 (MiMapParametersInitialize.c)
 */

__int64 __fastcall MmMapViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v14[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  result = MiMapParametersInitialize(v14, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (unsigned int)v14, (_DWORD)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C4E7E4;
      else
        ++dword_140C4E7E0;
    }
    else
    {
      *a7 = v14[3];
      return (unsigned int)result;
    }
  }
  return result;
}
