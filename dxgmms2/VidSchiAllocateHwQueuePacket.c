/*
 * XREFs of VidSchiAllocateHwQueuePacket @ 0x1C00C4C32
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0044510 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044980 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0044F60 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0085F20 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C0109884 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003540 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014268 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00AE0A4 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchiAllocateHwQueuePacket(__int64 a1, char a2)
{
  _DWORD *v2; // r12
  __int64 v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  size_t v9; // r14
  __int64 Pool2; // rbx
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = (_DWORD *)(a1 + 232);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = *(_DWORD *)(v6 + 152) * ((*(_DWORD *)(v6 + 76) << 6) + ((8 * *(_DWORD *)(v6 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v6 + 76) + 111);
  if ( v7 <= 0x460 )
    v7 = 1120;
  v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v6 + 1736), (_QWORD **)(a1 + 216), v2);
  v9 = v7;
  if ( v8 )
  {
    Pool2 = (__int64)(v8 - 1);
    if ( v8 != (_QWORD *)8 )
    {
LABEL_14:
      memset((void *)Pool2, 0, v9);
      goto LABEL_15;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v7, 895576406LL);
    if ( Pool2 )
    {
LABEL_15:
      *(_QWORD *)(Pool2 + 56) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(Pool2 + 52) = 1;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v6 + 1736), a1 + 240, (_QWORD *)(Pool2 + 8), (_DWORD *)(a1 + 256));
      return Pool2;
    }
    if ( a2 )
    {
      memset(v14, 0, sizeof(v14));
      v11 = *(unsigned __int16 *)(v5 + 4);
      LODWORD(v14[4]) |= 0x40u;
      LODWORD(v14[6]) = v11;
      LODWORD(v14[2]) = 1;
      VidSchRegisterCompletionEvent(v6, (__int64)v14);
      do
      {
        v12 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v6 + 1736), (_QWORD **)(a1 + 216), v2);
        if ( v12 )
          Pool2 = (__int64)(v12 - 1);
        else
          VidSchWaitForCompletionEvent(v6, (__int64)v14, 19LL);
      }
      while ( !Pool2 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 1744), v14, 0LL);
      goto LABEL_14;
    }
  }
  return Pool2;
}
