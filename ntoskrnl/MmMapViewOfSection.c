/*
 * XREFs of MmMapViewOfSection @ 0x14069EC70
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     PspMapSiloSharedDataView @ 0x14070783C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140707874 (MmMapApiSetView.c)
 *     NtInitializeNlsFiles @ 0x140780A70 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140871504 (EtwpCoverageEnsureUserModeView.c)
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiMapParametersInitialize @ 0x1407D5090 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
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
        ++dword_140C67C1C;
      else
        ++dword_140C67C18;
    }
    else
    {
      *a7 = v14[3];
      return (unsigned int)result;
    }
  }
  return result;
}
