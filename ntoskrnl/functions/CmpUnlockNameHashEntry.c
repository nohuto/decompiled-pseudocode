signed __int32 __fastcall CmpUnlockNameHashEntry(unsigned int a1)
{
  __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  __int64 v4; // rtt

  v1 = (__int64 *)((char *)CmpNameCacheTable
                 + 16
                 * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF));
  _m_prefetchw(v1);
  v2 = *v1;
  v3 = *v1 - 16;
  if ( (*v1 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || (v4 = *v1, v4 != _InterlockedCompareExchange64(v1, v3, v2)) )
    ExfReleasePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
