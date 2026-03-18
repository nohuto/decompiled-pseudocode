/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x14020CEDC
 * Callers:
 *     RtlValidateRetpolineRelocation @ 0x14020CA94 (RtlValidateRetpolineRelocation.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14020CB94 (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14020CE30 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  if ( (unsigned __int64)(v1 - 1) < 2 )
    return 2LL;
  return 0xFFFFFFFFLL;
}
