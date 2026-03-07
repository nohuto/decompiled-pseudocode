signed __int32 __fastcall CmpDereferenceNameControlBlockWithLock(_WORD *a1)
{
  char *v1; // r14
  __int64 v3; // rbx
  unsigned __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt

  v1 = (char *)(a1 + 4);
  v3 = 16LL
     * (((unsigned __int16)(-30045 * (a1[4] ^ (*((_DWORD *)a1 + 2) >> 9))) ^ (unsigned __int16)((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)a1 + 2) ^ (*((_DWORD *)a1 + 2) >> 9))) >> 9)) & 0x7FF);
  v4 = (unsigned __int64 *)((char *)CmpNameCacheTable + v3);
  v5 = KeAbPreAcquire((__int64)CmpNameCacheTable + v3, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = *(_DWORD *)a1 & 1 | (2 * (*(_DWORD *)a1 >> 1) - 2);
  *(_DWORD *)a1 = v7;
  if ( v7 < 2 )
  {
    v8 = (__int64 *)((char *)CmpNameCacheTable + v3 + 8);
    if ( v8 )
    {
      do
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        if ( (char *)v9 == v1 )
        {
          *v8 = *(_QWORD *)(v9 + 8);
          break;
        }
        v8 = (__int64 *)(v9 + 8);
      }
      while ( v9 != -8 );
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  v10 = (signed __int64 *)((char *)CmpNameCacheTable + v3);
  _m_prefetchw(v10);
  v11 = *v10;
  if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v12 = v11 - 16;
  else
    v12 = 0LL;
  if ( (v11 & 2) != 0 || (v13 = *v10, v13 != _InterlockedCompareExchange64(v10, v12, v11)) )
    ExfReleasePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
