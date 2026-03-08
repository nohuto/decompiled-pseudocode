/*
 * XREFs of FsRtlAreThereWaitingFileLocks @ 0x140456B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlAreThereWaitingFileLocks(__int64 a1)
{
  bool result; // al
  __int64 v2; // rcx

  result = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      return *(_QWORD *)(v2 + 48) != 0LL;
  }
  return result;
}
