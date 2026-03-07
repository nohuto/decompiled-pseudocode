void __fastcall VidSchiRundownMonitoredFenceCpuWaiters(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  unsigned int i; // ebp
  _QWORD *v10; // rdi

  v3 = *(_QWORD *)(a3 + 32);
  v6 = a1;
  v7 = *(_QWORD **)(v3 + 840);
  if ( v7 != (_QWORD *)(v3 + 840) )
  {
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      if ( v8[3] == a3 )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 26); ++i )
        {
          v10 = (_QWORD *)(v8[4] + 16LL * i);
          if ( *v10 == a2 || !a2 )
          {
            WdLogSingleEntry5(4LL, *v10, a3, **(_QWORD **)(*v10 + 64LL), v10[1], *(unsigned __int8 *)(*v10 + 28LL));
            *v10 = 0LL;
          }
        }
      }
    }
    while ( v7 != (_QWORD *)(v3 + 840) );
    v6 = a1;
  }
  VidSchiUnwaitMonitoredFences(v6, v3, 0LL);
}
