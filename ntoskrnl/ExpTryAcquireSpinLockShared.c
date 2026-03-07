char __fastcall ExpTryAcquireSpinLockShared(_DWORD *a1)
{
  signed __int32 v2; // [rsp+8h] [rbp+8h]
  signed __int32 v3; // [rsp+8h] [rbp+8h]
  signed __int32 v4; // [rsp+10h] [rbp+10h]

  _m_prefetchw(a1);
  v2 = *a1 & 0x7FFFFFFF;
  v4 = _InterlockedCompareExchange(a1, v2 + 1, v2);
  if ( v4 == v2 )
    return 1;
  while ( v4 >= 0 )
  {
    v3 = v4;
    v4 = _InterlockedCompareExchange(a1, v4 + 1, v4);
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}
