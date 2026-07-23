/*
 * XREFs of SepRmCleanupRmLsaState @ 0x14091C1E4
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 */

NTSTATUS __fastcall SepRmCleanupRmLsaState(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  void *v4; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    result = ZwClose(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    result = ZwClose(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    result = ZwClose(*(HANDLE *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
