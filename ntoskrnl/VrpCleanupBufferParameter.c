/*
 * XREFs of VrpCleanupBufferParameter @ 0x1406C16C4
 * Callers:
 *     VrpPostQueryKey @ 0x1406C14A4 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCleanupBufferParameter(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
