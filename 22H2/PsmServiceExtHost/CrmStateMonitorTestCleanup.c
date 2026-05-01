/*
 * XREFs of CrmStateMonitorTestCleanup @ 0x1800857FC
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180036560 (CrmStateMonitorCleanup.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CrmStateMonitorTestCleanup(__int64 a1)
{
  BOOL result; // eax

  if ( *(_QWORD *)(a1 + 56) )
  {
    SetEvent(*(HANDLE *)(a1 + 64));
    WaitForSingleObject(*(HANDLE *)(a1 + 56), 0xFFFFFFFF);
    CloseHandle(*(HANDLE *)(a1 + 56));
    return CloseHandle(*(HANDLE *)(a1 + 64));
  }
  return result;
}
