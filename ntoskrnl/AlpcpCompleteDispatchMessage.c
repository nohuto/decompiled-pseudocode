/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1407CBD90
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140715F0C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x140717CC0 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x140718414 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1407CB7E0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402925F4 (AlpcpQueueIoCompletionPort.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x140716C08 (AlpcpReadMessageData.c)
 *     AlpcpInsertMessageDirectQueue @ 0x140774758 (AlpcpInsertMessageDirectQueue.c)
 *     PsChargeProcessWakeCounter @ 0x140793DC0 (PsChargeProcessWakeCounter.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1407CC88C (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1407CF440 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1408A05F0 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x1408A0820 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140975F5C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpFreeBitmap @ 0x140976654 (AlpcpFreeBitmap.c)
 *     AlpcpLogReceiveMessage @ 0x14097743C (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1409774AC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140977684 (AlpcpLogWaitForReply.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140977A1C (AlpcpEnterStateChangeEventMessageLog.c)
 */

int __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdi
  __int64 v3; // rbp
  ULONG_PTR v4; // rsi
  int v5; // r13d
  int v6; // r12d
  BOOL v8; // eax
  int v9; // r8d
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // r15d
  void *v13; // rdi
  int result; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD **v17; // r13
  volatile signed __int64 *v18; // r15
  _QWORD *v19; // r12
  _QWORD *v20; // r13
  unsigned int v21; // edx
  ULONG_PTR *v22; // r13
  int v23; // ecx
  bool v24; // zf
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r13
  unsigned int v28; // r8d
  unsigned int v29; // edx
  int v30; // ecx
  int v31; // edx
  unsigned int v32; // r10d
  int v33; // r8d
  __int64 v34; // rdx
  unsigned int v35; // r9d
  unsigned int v36; // eax
  unsigned int CompletionBuffer; // r12d
  __int64 v38; // r15
  int v39; // eax
  __int16 v40; // dx
  __int16 v41; // ax
  __int16 v42; // ax
  char *v43; // rdx
  int v44; // edx
  int inserted; // eax
  int v46; // eax
  char v47; // r15
  char v48; // r12
  __int16 v49; // r8
  unsigned int v50; // edx
  int v51; // ecx
  void *v52; // rsi
  _DWORD *v53; // [rsp+20h] [rbp-88h]
  int v54; // [rsp+30h] [rbp-78h]
  int v55; // [rsp+34h] [rbp-74h]
  int v56; // [rsp+38h] [rbp-70h]
  unsigned int v57; // [rsp+40h] [rbp-68h]
  int v58; // [rsp+44h] [rbp-64h]
  __int64 v59; // [rsp+48h] [rbp-60h]
  unsigned int v60; // [rsp+B0h] [rbp+8h]
  char v61; // [rsp+B8h] [rbp+10h]
  int v62; // [rsp+C0h] [rbp+18h]
  unsigned int v63; // [rsp+C8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v1 & 4;
  v59 = v2;
  v6 = v1 & 0x20000;
  v62 = (unsigned __int8)v5;
  v55 = v1 & 0x20000;
  v8 = (v1 & 0x400000) != 0;
  v9 = v1 & 0x800000;
  v58 = v8;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  v11 = (v10 >> 21) & 1;
  if ( (v10 & 0x400000) != 0 )
    v11 = 2;
  if ( v6 || (v12 = 0, v9) )
    v12 = 1;
  if ( (*(_DWORD *)(v4 + 40) & 0x200) == 0 )
  {
    v13 = 0LL;
    if ( (*(_QWORD *)(v3 + 24) & 1) == 0 )
      v13 = *(void **)(v3 + 24);
    if ( v13 )
    {
      if ( v12 || v11 || (AlpcpWakePolicyDefault & 1) == 0 )
        *(_QWORD *)(v4 + 208) = PsChargeProcessWakeCounter(v13);
      if ( KeHeteroSystem
        && v12
        && (!LOBYTE(KeGetCurrentThread()->ThreadFlags2)
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x780) == 0x180
         || (KeGetCurrentThread()->ThreadFlags3 & 0x700) == 0x300) )
      {
        *(_QWORD *)(v4 + 216) = PsChargeProcessWakeCounter(v13);
      }
    }
    v2 = v59;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v4 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v4);
      *(_QWORD *)(v4 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v3, v4);
    ++*(_WORD *)(v4 - 30);
    AlpcpInsertMessageDirectQueue(v3, v4);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v4 + 160);
    *(_DWORD *)(v4 + 40) &= ~0x10000u;
    *(_QWORD *)(v4 + 160) = 0LL;
    AlpcpUnlockMessage(v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v2 - 16));
    KeAbPostRelease(v2 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v3 + 352));
    KeAbPostRelease(v3 + 352);
    result = ObfDereferenceObject((PVOID)v3);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v6 && !v5 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( v15 >= 4 )
      {
        result = KeSetEvent((PRKEVENT)(v15 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
        v16 = *(_QWORD *)(a1 + 40);
        if ( (v16 & 2) != 0 )
          result = ObfDereferenceObject((PVOID)(v16 & 0xFFFFFFFFFFFFFFFCuLL));
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    return result;
  }
  v17 = (_QWORD **)(v3 + 232);
  if ( *v17 != v17 )
  {
    v18 = (volatile signed __int64 *)(v3 + 224);
    ExAcquirePushLockExclusiveEx(v3 + 224, 0LL);
    v19 = *v17;
    if ( *v17 != v17 )
    {
      v20 = v19 - 177;
      if ( *(_QWORD *)(v4 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v4);
        *(_QWORD *)(v4 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v4 + 144) )
        AlpcpExposeViewAttributeInSenderContext((PVOID)v3, v4);
      if ( (*(_DWORD *)(v4 + 40) & 0x200) != 0 )
      {
        v21 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v4 + 144) )
          v21 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
        v22 = v20 + 176;
        v23 = v21 | 0x10000000;
        if ( !*(_QWORD *)(v4 + 152) )
          v23 = v21;
        if ( (v23 & *(_DWORD *)v22) == 0 )
        {
          *(_WORD *)(v4 + 244) &= ~0x2000u;
LABEL_51:
          ++*(_WORD *)(v4 - 30);
          *(_DWORD *)(v4 + 40) |= 0x2000u;
          v24 = AlpcpLogEnabled == 0;
          *v22 = v4;
          if ( !v24 )
            AlpcpLogSendMessage(v4);
          v25 = *v19;
          if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v26 = (_QWORD *)v19[1], (_QWORD *)*v26 != v19) )
            __fastfail(3u);
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          *v19 = 0LL;
          *(_DWORD *)(v4 + 40) &= ~0x10000u;
          AlpcpUnlockMessage(v4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v59 - 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v59 - 16));
          KeAbPostRelease(v59 - 16);
          if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 224));
          KeAbPostRelease(v3 + 224);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 352), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v3 + 352));
          KeAbPostRelease(v3 + 352);
          result = ObfDereferenceObject((PVOID)v3);
          *(_QWORD *)(a1 + 32) = 0LL;
          if ( !v55 && !v62 )
            return KeReleaseSemaphoreEx((__int64)(v19 - 22), 1u, 1);
          *(_QWORD *)(a1 + 24) = v19 - 177;
          return result;
        }
      }
      else
      {
        v22 = v20 + 176;
      }
      *(_WORD *)(v4 + 244) |= 0x2000u;
      ++*(_WORD *)(v4 - 30);
      AlpcpInsertMessagePendingQueue(v3, v4);
      goto LABEL_51;
    }
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 224));
    KeAbPostRelease(v3 + 224);
  }
  if ( *(_QWORD *)(v3 + 32) )
  {
    v56 = 0;
    v61 = 1;
  }
  else
  {
    v61 = 0;
    v56 = (*(_DWORD *)(v3 + 416) >> 9) & 1;
  }
  v27 = *(_QWORD *)(v3 + 360);
  if ( v27 )
  {
    v28 = *(_DWORD *)(v3 + 416);
    if ( (v28 & 0x10000) != 0 )
    {
      v29 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
      if ( !*(_QWORD *)(v4 + 144) )
        v29 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
      v30 = v29 | 0x10000000;
      if ( !*(_QWORD *)(v4 + 152) )
        v30 = v29;
      if ( *(_QWORD *)(v4 + 168) )
        v30 |= 0x2000000u;
      v31 = *(_DWORD *)(v27 + 148);
      if ( (~v31 & v30) == 0 && ((*(unsigned __int16 *)(v4 + 244) & 0xFFFF00FF) != 5 || (v31 & 0x20000000) != 0) )
      {
        v32 = *(unsigned __int16 *)(v4 + 242);
        v33 = (v28 >> 11) & 1;
        if ( v31 )
        {
          v34 = (4 * (v33 ^ 1u) + 3) & (v4 + 240 + *(unsigned __int16 *)(v4 + 242));
          if ( v34 )
            v35 = 4 * (v33 ^ 1) + 4 - v34;
          else
            v35 = 0;
          v60 = v35;
          v32 += v35 + *(_DWORD *)(v27 + 152);
        }
        else
        {
          v60 = 0;
        }
        v54 = v33 << 31;
        v36 = v32 - 16;
        if ( !v33 )
          v36 = v32;
        v57 = v36;
        CompletionBuffer = AlpcpAllocateCompletionBuffer(v3, v36);
        if ( CompletionBuffer != -1 )
        {
          v38 = *(_QWORD *)(v27 + 120) + CompletionBuffer;
          if ( v54 == 0x80000000 )
          {
            *(_WORD *)v38 = *(_WORD *)(v4 + 240);
            v39 = *(unsigned __int16 *)(v4 + 240) + 24;
            *(_WORD *)(v38 + 2) = v39;
            v40 = *(_WORD *)(v4 + 246);
            v63 = v39;
            v41 = 0;
            if ( v40 )
              v41 = v40 - 16;
            *(_WORD *)(v38 + 6) = v41;
            v42 = *(_WORD *)(v4 + 244) | 0x1000;
            *(_WORD *)(v38 + 4) = v42;
            *(_DWORD *)(v38 + 8) = *(_DWORD *)(v4 + 248);
            *(_DWORD *)(v38 + 12) = *(_DWORD *)(v4 + 256);
            *(_DWORD *)(v38 + 16) = *(_DWORD *)(v4 + 264);
            *(_DWORD *)(v38 + 20) = *(_DWORD *)(v4 + 272);
            *(_DWORD *)(v38 + 20) = *(_DWORD *)(v4 + 272);
            if ( (*(_DWORD *)(v3 + 256) & 0x1000) != 0 )
              *(_WORD *)(v38 + 4) = v42 & 0xC00F;
            v43 = (char *)(v38 + 24);
          }
          else
          {
            *(_OWORD *)v38 = *(_OWORD *)(v4 + 240);
            *(_OWORD *)(v38 + 16) = *(_OWORD *)(v4 + 256);
            *(_QWORD *)(v38 + 32) = *(_QWORD *)(v4 + 272);
            if ( (*(_DWORD *)(v3 + 256) & 0x1000) != 0 )
              *(_WORD *)(v38 + 4) = *(_WORD *)(v4 + 244) & 0xC00F;
            v43 = (char *)(v38 + 40);
            v63 = *(unsigned __int16 *)(v4 + 242);
          }
          if ( *(_QWORD *)(v4 + 176) )
            AlpcpGetDataFromUserVaSafe(v4, v43);
          else
            AlpcpReadMessageData(v4, v43);
          v44 = *(_DWORD *)(v27 + 148);
          if ( v44 )
          {
            v53 = (_DWORD *)(v38 + v63 + v60);
            *v53 = v44;
            v53[1] = 0;
            AlpcpExposeAttributes(v3, v54, v4, *(_DWORD *)(v27 + 148), (__int64)v53);
          }
          inserted = AlpcpInsertCompletionListEntry(v3, CompletionBuffer);
          if ( inserted )
          {
            v48 = 1;
            v47 = v61;
            *(_DWORD *)(*(_QWORD *)(v27 + 80) + 72LL) = *(_DWORD *)(v4 + 264);
            *(_DWORD *)(*(_QWORD *)(v27 + 80) + 76LL) = *(_DWORD *)(v4 + 272);
            if ( v61
              && (inserted & 2) == 0
              && HIWORD(*(_QWORD *)(*(_QWORD *)(v27 + 80) + 64LL))
               + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v3 + 48) + 12LL) >= *(unsigned int *)(v27 + 144) )
            {
              v47 = 0;
            }
            if ( (*(_DWORD *)(v4 + 40) & 0x200) != 0 )
            {
              v49 = *(_WORD *)(v4 + 244);
              v50 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
              if ( !*(_QWORD *)(v4 + 144) )
                v50 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
              v51 = v50 | 0x10000000;
              if ( !*(_QWORD *)(v4 + 152) )
                v51 = v50;
              if ( v51 )
              {
                *(_WORD *)(v4 + 244) = v49 | 0x2000;
                ++*(_WORD *)(v4 - 30);
                AlpcpInsertMessagePendingQueue(v3, v4);
              }
              else
              {
                *(_WORD *)(v4 + 244) = v49 & 0xDFFF;
              }
            }
            else
            {
              ++*(_WORD *)(v4 - 30);
              *(_WORD *)(v4 + 244) |= 0x2000u;
              AlpcpInsertMessagePendingQueue(v3, v4);
            }
            goto LABEL_115;
          }
          AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v3 + 360) + 104LL), 0LL, CompletionBuffer >> 6, (v57 + 63) >> 6);
        }
      }
    }
  }
  if ( *(_QWORD *)(v4 + 176) )
  {
    AlpcpCaptureMessageDataSafe(v4);
    *(_QWORD *)(v4 + 176) = 0LL;
  }
  if ( *(_QWORD *)(v4 + 144) )
    AlpcpExposeViewAttributeInSenderContext((PVOID)v3, v4);
  ++*(_WORD *)(v4 - 30);
  ExAcquirePushLockExclusiveEx(v3 + 136, 0LL);
  v46 = *(_DWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v3;
  *(_DWORD *)(v4 + 40) = v46 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v3 + 416) & 6)) | 1;
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v3 + 152);
  *(_QWORD *)v4 = v3 + 144;
  **(_QWORD **)(v3 + 152) = v4;
  ++*(_DWORD *)(v3 + 448);
  *(_QWORD *)(v3 + 152) = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 136));
  KeAbPostRelease(v3 + 136);
  v47 = v61;
  v48 = 0;
LABEL_115:
  if ( AlpcpLogEnabled )
    AlpcpLogSendMessage(v4);
  if ( v48 && AlpcpLogEnabled )
    AlpcpLogReceiveMessage(v4);
  if ( v55 && AlpcpLogEnabled )
    AlpcpLogWaitForReply(v4);
  *(_DWORD *)(v4 + 40) &= ~0x10000u;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(v4);
  AlpcpUnlockBlob(v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v59 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v59 - 16));
  result = KeAbPostRelease(v59 - 16);
  if ( v56 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v3 + 352));
    result = KeAbPostRelease(v3 + 352);
    if ( v55 || v62 )
    {
      *(_BYTE *)(a1 + 58) = 0;
      return result;
    }
    KeReleaseSemaphoreEx(*(_QWORD *)(v3 + 248), 1u, 1);
  }
  else if ( v47 )
  {
    if ( v55 || v62 )
    {
      *(_BYTE *)(a1 + 58) = 1;
      *(_BYTE *)(a1 + 59) = v48;
      return result;
    }
    AlpcpQueueIoCompletionPort((_QWORD *)v3, v48, 1, 0, v58);
  }
  else
  {
    v52 = *(void **)(v3 + 368);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v3 + 352));
    KeAbPostRelease(v3 + 352);
    if ( v52 )
      ExNotifyCallback(v52, *(PVOID *)(v3 + 376), (PVOID)*(unsigned int *)(a1 + 48));
  }
  result = ObfDereferenceObject((PVOID)v3);
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
