/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000331C
 * Callers:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0003210 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00073A0 (VidSchiUnwaitMonitoredFences.c)
 */

__int64 __fastcall VidSchiRundownMonitoredFenceCpuWaiters(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v9; // rsi
  unsigned int i; // ebp
  _QWORD *v11; // rdi

  v3 = *(_QWORD *)(a3 + 32);
  v6 = a1;
  v7 = *(_QWORD **)(v3 + 840);
  if ( v7 != (_QWORD *)(v3 + 840) )
  {
    do
    {
      v9 = v7;
      v7 = (_QWORD *)*v7;
      if ( v9[3] == a3 )
      {
        for ( i = 0; i < *((_DWORD *)v9 + 26); ++i )
        {
          v11 = (_QWORD *)(v9[4] + 16LL * i);
          if ( *v11 == a2 || !a2 )
          {
            WdLogSingleEntry5(4LL, *v11, a3, **(_QWORD **)(*v11 + 64LL), v11[1], *(unsigned __int8 *)(*v11 + 28LL));
            *v11 = 0LL;
          }
        }
      }
    }
    while ( v7 != (_QWORD *)(v3 + 840) );
    v6 = a1;
  }
  return VidSchiUnwaitMonitoredFences(v6, v3, 0LL);
}
