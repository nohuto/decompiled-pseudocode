/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x1409F8D50
 * Callers:
 *     ExDisableHandleTracing @ 0x1406069E4 (ExDisableHandleTracing.c)
 *     ExpFreeHandleTable @ 0x14068AC1C (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x1409F8DB0 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x1409F9308 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B210 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  struct _KPROCESS *v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(struct _KPROCESS **)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
