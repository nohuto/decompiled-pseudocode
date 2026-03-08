/*
 * XREFs of ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C0187DD4
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C01892B0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetOPMInformation @ 0x1C0189770 (NtGdiGetOPMInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer(
        __int64 a1)
{
  PLOOKASIDE_LIST_EX *v1; // rax

  v1 = *(PLOOKASIDE_LIST_EX **)(a1 + 8);
  if ( v1 )
  {
    if ( *(_QWORD *)a1 )
      ExFreeToLookasideListEx(*v1, *(PVOID *)a1);
  }
}
