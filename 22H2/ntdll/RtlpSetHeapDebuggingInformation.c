/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800F4980
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800F2B38 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800F34E4 (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180108058 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x18010B740 (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 6LL;
  if ( HeapHandle[4] != -571548178 )
    v2 = 36LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = HeapHandle[v2];
    if ( v5 )
      RtlpCallInterceptRoutine(v5, (__int64)HeapHandle, 0LL, 7u, 0LL);
    v6 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  HeapHandle[v2] = (unsigned __int16)RtlpGetHeapInterceptorIndex(v6);
LABEL_9:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *((_BYTE *)HeapHandle + 418) == 2 ? *((_QWORD *)HeapHandle + 51) : 0LL;
    if ( v7
      || ((RtlpActivateLowFragmentationHeap((__int64)HeapHandle), *((_BYTE *)HeapHandle + 418) != 2)
        ? (v7 = 0LL)
        : (v7 = *((_QWORD *)HeapHandle + 51)),
          v7) )
    {
      RtlSetLFHDebuggingInformation(v7, a2);
    }
  }
  return 0LL;
}
