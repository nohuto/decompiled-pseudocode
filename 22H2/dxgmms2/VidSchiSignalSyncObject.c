/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C0008710
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007C30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A310 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+38h] [rbp-30h] BYREF

  v6 = 8LL * a1;
  v7 = *(_QWORD *)(v6 + a2);
  if ( !a5 )
    goto LABEL_13;
  v8 = *(unsigned int *)(v7 + 44);
  if ( (_DWORD)v8 != 4 )
  {
    if ( !(_DWORD)v8 )
    {
      if ( !*(_QWORD *)(v7 + 64) )
      {
        v21 = WdLogNewEntry5_WdWarning(v8, (unsigned int)v8);
        *(_QWORD *)(v21 + 24) = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdWarning(v21);
      }
      *(_QWORD *)(v7 + 64) = 0LL;
      goto LABEL_13;
    }
    if ( (_DWORD)v8 == 1 )
    {
      v19 = *(_DWORD *)(v7 + 64);
      if ( v19 >= *(_DWORD *)(v7 + 60) )
      {
        v20 = ((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
        *(_QWORD *)(v20 + 24) = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdWarning(v20);
      }
      else
      {
        *(_DWORD *)(v7 + 64) = v19 + 1;
      }
      goto LABEL_13;
    }
    a2 = (unsigned int)(v8 - 2);
    if ( (_DWORD)v8 == 2 )
    {
      if ( *(_BYTE *)(v7 + 27) )
      {
        v14 = *(_QWORD *)(v7 + 208);
        v15 = *(_QWORD *)(v6 + a4);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 8), &LockHandle);
        if ( *(_QWORD *)(v14 + 40) >= v15 )
        {
          v16 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
          v16[3] = *(_QWORD *)(v7 + 16);
          v16[4] = *(_QWORD *)(v14 + 40);
          v16[5] = v15;
          WdLogEvent5_WdWarning(v16);
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v15;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else
      {
        v17 = *(_QWORD *)(v6 + a4);
        if ( *(_QWORD *)(v7 + 64) >= v17 )
        {
          v18 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
          v18[3] = *(_QWORD *)(v7 + 16);
          v18[4] = *(_QWORD *)(v7 + 64);
          v18[5] = *(_QWORD *)(v6 + a4);
          WdLogEvent5_WdWarning(v18);
        }
        else
        {
          *(_QWORD *)(v7 + 64) = v17;
        }
      }
      goto LABEL_13;
    }
    if ( (_DWORD)v8 != 5 )
      goto LABEL_13;
  }
  if ( !*(_BYTE *)(v7 + 28) )
  {
    if ( !*(_BYTE *)(v7 + 27) )
    {
      if ( (a3 & 4) != 0 )
        goto LABEL_11;
      v9 = *(_QWORD *)(v6 + a4);
      v10 = (_QWORD *)(v6 + a4);
      v13 = *(_QWORD *)(v7 + 88);
      if ( *(_BYTE *)(v7 + 29) )
      {
        if ( v9 >= v13 )
        {
          if ( v9 == v13 )
          {
            v11 = WdLogNewEntry5_WdWarning(v8, a2);
            *(_QWORD *)(v11 + 24) = v9;
LABEL_10:
            WdLogEvent5_WdWarning(v11);
          }
LABEL_11:
          v10 = (_QWORD *)(v6 + a4);
          *(_QWORD *)(v7 + 88) = *(_QWORD *)(v6 + a4);
LABEL_12:
          v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v12[3] = v7;
          v12[4] = **(_QWORD **)(v7 + 64);
          v12[5] = *v10;
          v12[6] = *(unsigned __int8 *)(v7 + 28);
          WdLogEvent5_WdEvent(v12);
          goto LABEL_13;
        }
        v27 = WdLogNewEntry5_WdWarning(v8, a2);
        *(_QWORD *)(v27 + 24) = v9;
        *(_QWORD *)(v27 + 32) = v13;
      }
      else
      {
        if ( (int)v13 - (int)v9 <= 0 )
        {
          if ( (_DWORD)v13 != (_DWORD)v9 )
            goto LABEL_11;
          v11 = WdLogNewEntry5_WdWarning(v8, a2);
          *(_QWORD *)(v11 + 24) = (unsigned int)v9;
          goto LABEL_10;
        }
        v27 = WdLogNewEntry5_WdWarning(v8, a2);
        *(_QWORD *)(v27 + 24) = (unsigned int)v9;
        *(_QWORD *)(v27 + 32) = (unsigned int)v13;
      }
      WdLogEvent5_WdWarning(v27);
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28);
      v30[3] = *(_QWORD *)(v7 + 16);
      v30[4] = *(_QWORD *)(v7 + 88);
      v30[5] = *v10;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_12;
    }
    v22 = *(_QWORD *)(v7 + 208);
    v23 = *(_QWORD *)(v6 + a4);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v22 + 8), &v32);
    if ( *(_QWORD *)(v22 + 40) >= v23 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24);
      v26[3] = *(_QWORD *)(v7 + 16);
      v26[4] = *(_QWORD *)(v22 + 40);
      v26[5] = v23;
      WdLogEvent5_WdWarning(v26);
    }
    else
    {
      *(_QWORD *)(v22 + 40) = v23;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
  }
LABEL_13:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
}
