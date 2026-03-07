__int64 __fastcall CcUpdateReadHistory(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  _InterlockedExchange64((volatile __int64 *)(v3 + 16), *(_QWORD *)(v3 + 32));
  _InterlockedExchange64((volatile __int64 *)(v3 + 24), *(_QWORD *)(v3 + 40));
  _InterlockedExchange64((volatile __int64 *)(v3 + 32), *a2);
  result = _InterlockedExchange64((volatile __int64 *)(v3 + 40), *a2 + a3);
  if ( (*(_DWORD *)(v4 + 152) & 0x200000) != 0 )
  {
    result = (unsigned int)((*(_DWORD *)(v3 + 32) >> 12) - (*(_DWORD *)(v3 + 24) >> 12));
    if ( (unsigned int)result > 1 )
      return CcUpdateSharedCacheMapFlag(v4, 0x200000LL, 0LL);
  }
  return result;
}
