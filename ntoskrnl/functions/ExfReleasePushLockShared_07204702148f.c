signed __int64 __fastcall ExfReleasePushLockShared(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // r9
  signed __int64 v3; // rtt
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int64 v6; // r9
  signed __int64 v7; // rtt
  unsigned __int64 v8; // rdx
  __int64 i; // r9

  _m_prefetchw(a1);
  result = *a1;
  if ( (*a1 & 2) != 0 )
  {
LABEL_6:
    if ( (result & 8) != 0 )
    {
      v8 = result & 0xFFFFFFFFFFFFFFF0uLL;
      for ( i = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 0x20); !i; i = *(_QWORD *)(v8 + 32) )
        v8 = *(_QWORD *)(v8 + 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 48), 0xFFFFFFFF) > 1 )
        return result;
      v4 = -9LL;
    }
    else
    {
      v4 = -1LL;
    }
    do
    {
      v5 = v4 + 4;
      v6 = result & 6;
      if ( v6 != 2 )
        v5 = v4;
      v7 = result;
      result = _InterlockedCompareExchange64(a1, result + v5, result);
    }
    while ( v7 != result );
    if ( v6 == 2 )
      return ExpWakePushLock();
    return result;
  }
  while ( 1 )
  {
    v2 = 0LL;
    if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v2 = result - 16;
    v3 = result;
    result = _InterlockedCompareExchange64(a1, v2, result);
    if ( v3 == result )
      return result;
    if ( (result & 2) != 0 )
      goto LABEL_6;
  }
}
