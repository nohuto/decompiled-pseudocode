void __fastcall VidSchQueryLastCompletedPresentIdDWMInternal(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_STATS_DWM2 *a5)
{
  __int64 v5; // rbp
  __int64 v8; // r13
  int v9; // edi
  int *v10; // rsi
  _QWORD *v11; // r14
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *((_QWORD *)a1 + a3 + 400);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 217, &LockHandle);
  v9 = 0;
  v10 = (int *)(v8 + 44192);
  v11 = (_QWORD *)(v8 + 44208);
  if ( a2 )
  {
    v12 = *((_DWORD *)a2 + v5 + 127);
    *((_QWORD *)a5 + 2) = *((_QWORD *)a2 + v5 + 88);
    v13 = *((_DWORD *)a2 + 2 * v5 + 144);
  }
  else
  {
    v12 = *(_DWORD *)(v8 + 44240);
    *((_QWORD *)a5 + 2) = *v11;
    v13 = *v10;
  }
  *((_DWORD *)a5 + 1) = v12;
  *((_DWORD *)a5 + 2) = v13;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *((_DWORD *)a5 + 6) = *v10;
  *((_QWORD *)a5 + 4) = *v11;
  *((_DWORD *)a5 + 11) = *(_DWORD *)(v8 + 44200);
  *((_QWORD *)a5 + 6) = *(_QWORD *)(v8 + 44216);
  v14 = *(int *)(288LL * a4 + *((_QWORD *)a1 + v5 + 400) + 188);
  if ( (int)v14 > -1 )
  {
    v15 = *((_QWORD *)a1 + 416) + 160 * v14;
    if ( v15 )
      v9 = *(_DWORD *)(v15 + 100);
  }
  *((_DWORD *)a5 + 10) = v9;
}
