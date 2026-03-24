/*
 * XREFs of VidSchiSwitchFromSuspendedDevices @ 0x1C0016990
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000C140 (VidSchIsTDRPending.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0086D2C (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C008B130 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00CF594 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00CF730 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiSwitchFromSuspendedDevices(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r15
  unsigned int i; // esi
  __int64 *v6; // rdi
  __int64 v7; // rdi
  char v8; // r12
  __int64 v9; // rcx
  unsigned int j; // ebp
  unsigned int v11; // edi
  __int64 *v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  if ( !*(_DWORD *)(a1 + 2916) )
  {
    if ( (*(_DWORD *)(a1 + 2448) & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 72);
      v4 = 0LL;
      for ( i = 0; i < v3; ++i )
      {
        v6 = *(__int64 **)(v2 + 624);
        if ( i < *(_DWORD *)(v2 + 696) )
          v6 += i;
        v7 = *v6;
        v8 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1712), &LockHandle);
        for ( j = *(_DWORD *)(v7 + 1552); j != *(_DWORD *)(v7 + 1544); j = ((_BYTE)j + 1) & 0xF )
        {
          v16 = *(_QWORD *)(v7 + 8LL * j + 1560);
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 184) & 0x200) != 0
              || (v9 = *(_QWORD *)(v16 + 104), *(_BYTE *)(v9 + 204))
              || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
            {
              v8 = 1;
              v17 = WdLogNewEntry5_WdEvent(v9, 0LL);
              *(_QWORD *)(v17 + 24) = v7;
              *(_QWORD *)(v17 + 32) = v16;
              WdLogEvent5_WdEvent(v17);
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v2 + 724));
          if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 2888)) == 1 )
          {
            *(_QWORD *)(v7 + 232) = 0LL;
            VidSchiSubmitPreemptionCommand(v7);
            _bittestandset64(&v4, i);
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 2888));
            _bittestandset64(&v4, i);
            _InterlockedDecrement((volatile signed __int32 *)(v2 + 724));
          }
        }
        v3 = *(_DWORD *)(v2 + 72);
      }
      v11 = 0;
      if ( v3 )
      {
        do
        {
          v12 = *(__int64 **)(v2 + 624);
          if ( v11 < *(_DWORD *)(v2 + 696) )
            v12 += v11;
          v13 = *v12;
          if ( _bittest64(&v4, v11) )
          {
            if ( *(_DWORD *)(v13 + 2892) )
              VidSchiWaitForCompletePreemption(v13);
            if ( VidSchIsTDRPending(v2) )
              break;
          }
          if ( *(_BYTE *)(v2 + 52) )
          {
            v14 = *(_QWORD *)(v13 + 224);
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 184) & 0x100) != 0
                || (a1 = *(_QWORD *)(v14 + 104), *(_BYTE *)(a1 + 204))
                || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0) )
              {
                v15 = WdLogNewEntry5_WdEvent(a1, a2);
                *(_QWORD *)(v15 + 24) = v13;
                *(_QWORD *)(v15 + 32) = v14;
                WdLogEvent5_WdEvent(v15);
                VidSchiSwitchNodeFromContext(v14);
                if ( VidSchIsTDRPending(v2) )
                  break;
              }
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v2 + 72) );
      }
    }
    else
    {
      VidSchiWaitForEmptyHwQueue();
    }
  }
}
