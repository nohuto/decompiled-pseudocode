/*
 * XREFs of IopIsNotifyInBroadcast @ 0x140A9B8F4
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIsNotifyInBroadcast(char a1, __int64 a2)
{
  char v2; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  v2 = 1;
  if ( (a1 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a2 + 136));
    v3 = *(_DWORD *)(a2 + 136);
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 136), v3, v3);
    }
    while ( v4 != v3 );
    return BYTE1(v3) & 1;
  }
  return v2;
}
