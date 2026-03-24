/*
 * XREFs of VidSchiAllocateHwQueuePacket @ 0x1C00D209C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007C30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0039FC0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A310 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C003A8E0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CFA50 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D24C8 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007B20 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007BA0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014BAC (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080B60 (VidSchRegisterCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateHwQueuePacket(__int64 a1, char a2)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  size_t v9; // rdi
  _QWORD *PoolWithTag; // rax
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_DWORD *)(v5 + 144) * ((*(_DWORD *)(v5 + 68) << 6) + ((8 * *(_DWORD *)(v5 + 68) + 199) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v5 + 68) + 108);
  if ( v6 <= 0x430 )
    v6 = 1072;
  v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v5 + 1720), (_QWORD **)(a1 + 216), (_DWORD *)(a1 + 232));
  if ( v7 )
  {
    v8 = v7 - 1;
  }
  else
  {
    v9 = v6;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x35616956u);
    v8 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
      {
LABEL_15:
        memset(v8, 0, v9);
        v8[7] = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)v8 + 13) = 1;
        VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v5 + 1720), a1 + 240, v8 + 1, (_DWORD *)(a1 + 256));
        return v8;
      }
      memset(v14, 0, sizeof(v14));
      v11 = *(unsigned __int16 *)(v4 + 4);
      LODWORD(v14[4]) |= 0x40u;
      LODWORD(v14[6]) = v11;
      LODWORD(v14[2]) = 1;
      VidSchRegisterCompletionEvent(v5, (__int64)v14);
      do
      {
        v12 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v5 + 1720),
                (_QWORD **)(a1 + 216),
                (_DWORD *)(a1 + 232));
        if ( v12 )
          v8 = v12 - 1;
        else
          VidSchWaitForCompletionEvent(v5, (__int64)v14, 19LL);
      }
      while ( !v8 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1728), v14, 0LL);
    }
  }
  if ( v8 )
  {
    v9 = v6;
    goto LABEL_15;
  }
  return v8;
}
