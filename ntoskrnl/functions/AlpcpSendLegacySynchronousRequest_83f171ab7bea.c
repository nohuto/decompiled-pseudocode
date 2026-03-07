__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // r12
  int v7; // ecx
  __int64 result; // rax
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // r14d
  signed __int64 *v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // rax
  signed __int64 *v21; // r14
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rax
  ULONG_PTR v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-A8h]
  _DWORD *v34; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD *v35; // [rsp+30h] [rbp-98h]
  _WORD *v36; // [rsp+38h] [rbp-90h]
  _QWORD *v37; // [rsp+40h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-80h]
  __int128 v39; // [rsp+50h] [rbp-78h] BYREF
  __int128 v40; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+70h] [rbp-58h]
  unsigned __int64 v42; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  char v44; // [rsp+E8h] [rbp+20h]

  v44 = a4;
  v5 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v34 = 0LL;
  if ( (_BYTE)a4 )
  {
    AlpcpProbeAndCaptureMessageHeader(a3, &v39, 0LL);
  }
  else
  {
    v39 = *a3;
    v40 = a3[1];
    v41 = *((_QWORD *)a3 + 4);
  }
  if ( DWORD2(v40) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  v7 = *(_DWORD *)(a1 + 416);
  if ( (v7 & 0x2000) == 0 || (v7 & 6) != 4 || (v7 & 0x38) != 0 || WORD3(v39) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v39) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  LOBYTE(a2) = 1;
  result = AlpcpValidateMessage(&v39, a2);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v34 = v9;
    if ( v9 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[66] & 0x7FFFFFFF;
      memset(v9, 0, 0x118uLL);
      v9[66] = v10;
      do
        v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v11 );
      v12 = (ULONG_PTR)v34;
      v34[68] = v11;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v12);
LABEL_15:
      CurrentThread = KeGetCurrentThread();
      v13 = (ULONG_PTR)v34;
      *(_OWORD *)(v34 + 62) = *(_OWORD *)&CurrentThread[1].CycleTime;
      *(_DWORD *)(v13 + 240) = v39;
      *(_WORD *)(v13 + 244) = 8193;
      if ( v44 )
      {
        v14 = (__int16)v39;
        v15 = *(_QWORD *)(v13 + 96);
        if ( v15 )
          v16 = *(_QWORD *)(v15 + 32) - 40LL;
        else
          v16 = 512LL;
        v42 = v16;
        if ( (__int16)v39 <= v16 )
        {
          memmove((void *)(v13 + 280), (char *)a3 + 40, (__int16)v39);
          v17 = 0;
          v33 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        v14 = (__int16)v39;
        v31 = *(_QWORD *)(v13 + 96);
        if ( v31 )
          v32 = *(_QWORD *)(v31 + 32) - 40LL;
        else
          v32 = 512LL;
        if ( (__int16)v39 <= v32 )
        {
          memmove((void *)(v13 + 280), (char *)a3 + 40, (__int16)v39);
          v33 = 0;
          goto LABEL_23;
        }
      }
      v17 = AlpcpCaptureMessageData(v13, v14, (char *)a3 + 40);
      v33 = v17;
LABEL_22:
      if ( v17 < 0 )
      {
LABEL_67:
        if ( v13 )
          AlpcpUnlockMessage(v13);
        return (unsigned int)v17;
      }
LABEL_23:
      v37 = *(_QWORD **)(a1 + 16);
      v18 = v37 - 2;
      BugCheckParameter2 = (ULONG_PTR)(v37 - 2);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v37 - 2), 0LL);
      v19 = *(_QWORD *)(a1 + 424);
      v20 = *(_QWORD **)(a1 + 432);
      v35 = v20;
      if ( v19 && v20 )
      {
        v21 = v20 + 44;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v20 + 44), 0LL);
        if ( (v35[52] & 0x20) != 0 )
          goto LABEL_62;
        *(_QWORD *)(v13 + 120) = v35[7];
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        v21 = (signed __int64 *)(v19 + 352);
        ExAcquirePushLockSharedEx(v19 + 352, 0LL);
        if ( (*(_DWORD *)(v19 + 416) & 0x20) != 0 )
        {
LABEL_62:
          v33 = -1073741769;
        }
        else
        {
          v22 = (__int64)v34;
          v36 = (_WORD *)v34 - 15;
          *v36 += 3;
          v23 = CurrentThread;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v22);
          v24 = (ULONG_PTR)v34;
          *((_QWORD *)v34 + 4) = v23;
          AlpcpSetOwnerPortMessage(v24, a1);
          v25 = v37;
          *(_QWORD *)(v24 + 184) = v37;
          *(_QWORD *)(v24 + 192) = *v25;
          *(_QWORD *)(v5 + 8) = v24;
          if ( AlpcpLogEnabled )
          {
            AlpcpLogSendMessage(v24);
            if ( AlpcpLogEnabled )
              AlpcpLogWaitForReply(v24);
          }
          v26 = 0LL;
          v35 = 0LL;
          if ( *(_QWORD *)(v19 + 232) != v19 + 232 )
          {
            ExAcquirePushLockExclusiveEx(v19 + 224, 0LL);
            v27 = *(_QWORD **)(v19 + 232);
            v37 = v27;
            if ( v27 != (_QWORD *)(v19 + 232) )
            {
              v35 = v27 - 177;
              AlpcpInsertMessagePendingQueue(v19, v24);
              ++*v36;
              *(_DWORD *)(v24 + 40) |= 0x2000u;
              v35[176] = v24;
              v28 = v37;
              v29 = *v37;
              v30 = (_QWORD *)v37[1];
              if ( *(_QWORD **)(*v37 + 8LL) != v37 || (_QWORD *)*v30 != v37 )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              *v28 = 0LL;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 224));
            KeAbPostRelease(v19 + 224);
            v24 = (ULONG_PTR)v34;
            v26 = v35;
          }
          *(_QWORD *)(v5 + 32) = 0LL;
          *(_QWORD *)(v5 + 24) = 0LL;
          *(_QWORD *)(v5 + 40) = 0LL;
          if ( v26 )
          {
            *(_QWORD *)(v5 + 24) = v26;
          }
          else
          {
            AlpcpInsertMessageMainQueue(v19, v24);
            if ( (*(_DWORD *)(v19 + 416) & 0x200) != 0 )
            {
              ObfReferenceObject((PVOID)v19);
              *(_QWORD *)(v5 + 32) = v19;
              *(_BYTE *)(v5 + 58) = 0;
            }
          }
          AlpcpUnlockMessage(v24);
        }
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        v18 = (signed __int64 *)BugCheckParameter2;
      }
      else
      {
        v33 = -1073741769;
      }
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      v13 = (ULONG_PTR)v34;
      v17 = v33;
      if ( v33 >= 0 )
        return (unsigned int)v17;
      goto LABEL_67;
    }
    result = AlpcpAllocateMessage((ULONG_PTR *)&v34, 0LL);
    if ( (int)result >= 0 )
      goto LABEL_15;
  }
  return result;
}
