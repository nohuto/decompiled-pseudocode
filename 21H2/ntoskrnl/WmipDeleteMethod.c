/*
 * XREFs of WmipDeleteMethod @ 0x14062E330
 * Callers:
 *     <none>
 * Callees:
 *     WmipCompleteGuidIrpWithError @ 0x140253014 (WmipCompleteGuidIrpWithError.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WmipDisableCollectOrEvent @ 0x140620920 (WmipDisableCollectOrEvent.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

LONG __fastcall WmipDeleteMethod(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  LONG result; // eax
  void *v6; // rcx
  void *v7; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 160) )
      WmipDisableCollectOrEvent(v2, *(_DWORD *)(a1 + 64));
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v3 + 8) != a1 + 40 || (v4 = *(_QWORD **)(a1 + 48), *v4 != a1 + 40) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    KeReleaseMutex(&WmipSMMutex, 0);
    WmipUnreferenceEntry(&WmipGEChunkInfo, *(_QWORD *)(a1 + 56));
  }
  result = *(_DWORD *)(a1 + 164);
  if ( (result & 2) == 0 )
  {
    v6 = *(void **)(a1 + 96);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v7 = *(void **)(a1 + 128);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    WmipCompleteGuidIrpWithError(a1);
    return KeReleaseMutex(&WmipSMMutex, 0);
  }
  return result;
}
