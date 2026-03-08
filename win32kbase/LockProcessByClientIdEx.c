/*
 * XREFs of LockProcessByClientIdEx @ 0x1C0084164
 * Callers:
 *     _DwmCheckProcessSession @ 0x1C0083B60 (_DwmCheckProcessSession.c)
 *     LockProcessByClientId @ 0x1C0084110 (LockProcessByClientId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientIdEx(void *a1, PEPROCESS *a2, _DWORD *a3)
{
  NTSTATUS v5; // edi

  v5 = PsLookupProcessByProcessId(a1, a2);
  if ( v5 >= 0 && a3 )
    *a3 = PsGetProcessSessionId(*a2);
  return (unsigned int)v5;
}
