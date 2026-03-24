/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C00525C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012E1AC (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C00B2E88 && !byte_1C00B2E89 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C00B2E98 + 3896), 2LL);
    if ( *(_BYTE *)(qword_1C00B2E98 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C00B2E98 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C00B2E98 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C00B2E90 + 72), 0);
    _InterlockedExchange64(&qword_1C00B2B50, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
