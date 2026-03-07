signed __int64 ObpPushStackInfoQueue()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rcx
  signed __int64 result; // rax

  while ( 1 )
  {
    v0 = _InterlockedExchange64(&ObpPushStackInfoList, 1LL);
    do
    {
      ObpPushRefDerefInfo(
        *(_QWORD *)(v0 + 8),
        *(_BYTE *)(v0 + 16),
        *(_WORD *)(v0 + 18),
        *(_DWORD *)(v0 + 24),
        (unsigned __int16 *)(v0 + 32),
        *(_DWORD *)(v0 + 20));
      v1 = v0;
      v0 = *(_QWORD *)v0;
      ObpFreeWorkItemBlock((struct _SLIST_ENTRY *)(v1 - 16));
    }
    while ( v0 > 1 );
    if ( ObpPushStackInfoList == 1 )
    {
      result = _InterlockedCompareExchange64(&ObpPushStackInfoList, 0LL, 1LL);
      if ( result == 1 )
        break;
    }
  }
  return result;
}
