/*
 * XREFs of MmMapViewOfSection @ 0x1407A2850
 * Callers:
 *     AlpcpCreateView @ 0x14071C394 (AlpcpCreateView.c)
 *     NtInitializeNlsFiles @ 0x1407A1630 (NtInitializeNlsFiles.c)
 *     PspMapSiloSharedDataView @ 0x1407A1C6C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1CA4 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 *     NtGetNlsSectionPtr @ 0x1407A23B0 (NtGetNlsSectionPtr.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1408743C4 (EtwpCoverageEnsureUserModeView.c)
 *     NtCreateIoRing @ 0x14094A160 (NtCreateIoRing.c)
 *     NtMapCMFModule @ 0x140A032C0 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     MiMapParametersInitialize @ 0x1407215BC (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1407216D0 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  __int64 v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (__int64)v15, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C6809C;
      else
        ++dword_140C68098;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
