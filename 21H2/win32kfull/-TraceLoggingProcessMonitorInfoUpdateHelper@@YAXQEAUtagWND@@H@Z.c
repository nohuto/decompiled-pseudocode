/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C003DF58
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C003AEB8 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(struct tagWND *const a1, int a2)
{
  __int64 v3; // rbx
  struct tagMONITOR *v4; // rax
  struct tagMONITOR *v5; // r8
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // eax

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v3 )
  {
    v4 = _MonitorFromWindowInternal(a1, 1u, 0);
    v5 = v4;
    if ( v4 )
    {
      *(_OWORD *)(v3 + 960) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 28LL);
      if ( a2 )
      {
        v6 = *(_DWORD *)(v3 + 976);
        v7 = *(_DWORD *)(v3 + 988) | 1;
        *(_DWORD *)(v3 + 988) = v7;
        if ( v6 != *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 64LL) )
        {
          *(_DWORD *)(v3 + 984) = v6;
          *(_DWORD *)(v3 + 988) = v7 | 2;
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 64LL);
        if ( *(_DWORD *)(v3 + 936) )
        {
          v9 = *(_DWORD *)(v3 + 976);
          if ( v9 != v8 )
          {
            *(_DWORD *)(v3 + 988) |= 4u;
            *(_DWORD *)(v3 + 984) = v9;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 980) = v8;
        }
      }
      *(_DWORD *)(v3 + 976) = *(unsigned __int16 *)(*((_QWORD *)v5 + 5) + 64LL);
    }
    else
    {
      *(_DWORD *)(v3 + 976) = 0;
      *(_DWORD *)(v3 + 960) = 0;
      *(_DWORD *)(v3 + 964) = 0;
      *(_DWORD *)(v3 + 968) = 0;
      *(_DWORD *)(v3 + 972) = 0;
    }
  }
}
