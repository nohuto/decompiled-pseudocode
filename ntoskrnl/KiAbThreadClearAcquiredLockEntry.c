/*
 * XREFs of KiAbThreadClearAcquiredLockEntry @ 0x1402486D0
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1402485C0 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbThreadClearAcquiredLockEntry(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned int i; // r9d

  result = a1 + 1696;
  v4 = a2 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < 6; ++i )
  {
    if ( (*(_QWORD *)result & 0x7FFFFFFFFFFFFFFCLL) == v4
      && *(_BYTE *)(result + 18)
      && (*(_DWORD *)result & 1) == 0
      && *(_DWORD *)(result + 8) == a3 )
    {
      *(_BYTE *)(result + 18) = 0;
      return result;
    }
    result += 96LL;
  }
  return 0LL;
}
