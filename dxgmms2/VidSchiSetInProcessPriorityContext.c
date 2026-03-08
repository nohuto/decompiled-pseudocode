/*
 * XREFs of VidSchiSetInProcessPriorityContext @ 0x1C0018034
 * Callers:
 *     VidSchSetInProcessPriorityContext @ 0x1C00B4730 (VidSchSetInProcessPriorityContext.c)
 * Callees:
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x1C0037D80 (McTemplateK0pdd_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiSetInProcessPriorityContext(__int64 a1, int a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // r9
  int v9; // eax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  v7 = *(_DWORD *)(a1 + 408);
  if ( v7 != a2 )
  {
    if ( bTracingEnabled )
    {
      v8 = *(_QWORD *)(a1 + 56);
      if ( !v8 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        LODWORD(v8) = a1;
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pdd_EtwWriteTransfer(v7, v5, v6, v8, v7, a2);
    }
    v9 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 408) = a2;
    if ( (v9 & 1) != 0 )
    {
      if ( a2 == 1 )
      {
        v11 = (_QWORD *)(a1 + 416);
        v12 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 32LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 216LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
        {
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) == v12 )
          {
            *v11 = v13;
            *(_QWORD *)(a1 + 424) = v12;
            *(_QWORD *)(v13 + 8) = v11;
            *v12 = v11;
            goto LABEL_8;
          }
        }
        else
        {
          v14 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v14 == v12 )
          {
            *v11 = v12;
            *(_QWORD *)(a1 + 424) = v14;
            *v14 = v11;
            v12[1] = v11;
            goto LABEL_8;
          }
        }
      }
      else
      {
        v15 = (_QWORD *)(a1 + 416);
        v16 = *(_QWORD *)(a1 + 416);
        if ( *(_QWORD *)(v16 + 8) == a1 + 416 )
        {
          v17 = *(_QWORD **)(a1 + 424);
          if ( (_QWORD *)*v17 == v15 )
          {
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
            *(_QWORD *)(a1 + 424) = 0LL;
            *v15 = 0LL;
            goto LABEL_8;
          }
        }
      }
      __fastfail(3u);
    }
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
