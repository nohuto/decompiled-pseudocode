/*
 * XREFs of SeRmCleanupSiloState @ 0x14091C090
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409062FC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall SeRmCleanupSiloState(_QWORD *BugCheckParameter1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BugCheckParameter1[1] || BugCheckParameter1[3] || *BugCheckParameter1 )
    KeBugCheckEx(0x29u, (ULONG_PTR)BugCheckParameter1, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D1uLL, 0LL);
  return result;
}
