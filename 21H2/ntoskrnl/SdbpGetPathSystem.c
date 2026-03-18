/*
 * XREFs of SdbpGetPathSystem @ 0x140A14210
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A142D0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A17D10 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  _WORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v10; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  v9[0] = 0;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v10, v9, a4);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(pszDest, cchDest, a3, (__int64)v9),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
