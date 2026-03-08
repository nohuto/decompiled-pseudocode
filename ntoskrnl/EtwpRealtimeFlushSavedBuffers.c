/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x1406917BC
 * Callers:
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 * Callees:
 *     EtwpRealtimeDeliverBuffer @ 0x1406A1F30 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpSendSessionNotification @ 0x1407489B8 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407FCBFC (EtwpRealtimeResetReferenceTime.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14083F64C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1408540C0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  __int64 Pool2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  bool v6; // sf

  if ( !*(_DWORD *)(a1 + 424) || !*(_DWORD *)(a1 + 344) )
    return 0LL;
  Pool2 = ExAllocatePool2(256LL, *(unsigned int *)(a1 + 4), 1350005829LL);
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a1 + 424) )
    {
      while ( *(_DWORD *)(a1 + 344) )
      {
        v4 = *(_QWORD *)(a1 + 392);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, Pool2) < 0 )
        {
          *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
          *(_DWORD *)(a1 + 424) = 0;
          *(_QWORD *)(a1 + 408) = 0LL;
          *(_DWORD *)(a1 + 448) = 3;
          EtwpSendSessionNotification(a1, 4LL, 3221225730LL);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag((PVOID)Pool2, 0);
          if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, Pool2) < 0 )
        {
          *(_QWORD *)(a1 + 392) = v4;
          break;
        }
        if ( (*(_DWORD *)(a1 + 816) & 1) != 0 && *(_WORD *)(Pool2 + 54) == 3 )
          *(_OWORD *)(a1 + 432) = *(_OWORD *)(Pool2 + 56);
        --*(_DWORD *)(a1 + 424);
        v5 = *(_QWORD *)(a1 + 408) - *(unsigned int *)(Pool2 + 48);
        v6 = *(int *)(a1 + 16) < 0;
        *(_QWORD *)(a1 + 408) = v5;
        if ( v6
          && *(_QWORD *)(a1 + 416) - v5 > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 236)) )
        {
          _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
        }
        if ( !*(_DWORD *)(a1 + 424) )
          break;
      }
      if ( *(_DWORD *)(a1 + 424) )
        goto LABEL_16;
    }
    EtwpRealtimeZeroTruncateLogfile(a1);
LABEL_16:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  return 3221225495LL;
}
