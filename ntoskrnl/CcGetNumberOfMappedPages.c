/*
 * XREFs of CcGetNumberOfMappedPages @ 0x1403D0CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CcGetNumberOfMappedPages(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    ExAcquirePushLockSharedEx(v3 + 104, 0LL);
    *a2 = (unsigned __int64)*(unsigned int *)(v3 + 548) << 6;
    *a3 = (unsigned __int64)*(unsigned int *)(v3 + 552) << 6;
    return ExReleasePushLockEx((__int64 *)(v3 + 104), 0LL);
  }
  return result;
}
