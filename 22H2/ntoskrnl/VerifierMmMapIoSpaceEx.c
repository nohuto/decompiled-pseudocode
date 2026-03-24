/*
 * XREFs of VerifierMmMapIoSpaceEx @ 0x1409E6AC0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E7FA0 (MmMapIoSpaceEx.c)
 *     VfCheckPageProtection @ 0x1409C7CCC (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) != 0 )
    VfCheckPageProtection(a3, retaddr);
  return MmMapIoSpaceEx(a1, a2, a3);
}
