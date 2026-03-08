/*
 * XREFs of ExBlockPushLock @ 0x1402BF980
 * Callers:
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExBlockPushLock(signed __int64 *a1, signed __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  *(_DWORD *)(a2 + 52) = 2;
  _m_prefetchw(a1);
  result = *a1;
  do
  {
    *(_QWORD *)(a2 + 24) = result;
    v3 = result;
    result = _InterlockedCompareExchange64(a1, a2, result);
  }
  while ( v3 != result );
  return result;
}
