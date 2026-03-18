/*
 * XREFs of LockProcessByClientIdEx @ 0x1C009DDE8
 * Callers:
 *     _DwmCheckProcessSession @ 0x1C009DB00 (_DwmCheckProcessSession.c)
 *     LockProcessByClientId @ 0x1C009DDA8 (LockProcessByClientId.c)
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
