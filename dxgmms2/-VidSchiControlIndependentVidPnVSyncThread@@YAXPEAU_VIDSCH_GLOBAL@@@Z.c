void __fastcall VidSchiControlIndependentVidPnVSyncThread(struct _VIDSCH_GLOBAL *a1)
{
  struct _ERESOURCE *v1; // r14
  unsigned int v3; // esi
  __int64 i; // rdi
  __int64 MostSignificantBit; // r11
  unsigned int *v6; // rsi
  __int64 v7; // rbp
  char v8; // cl
  signed __int32 v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v11[16]; // [rsp+40h] [rbp-68h] BYREF

  v1 = (struct _ERESOURCE *)((char *)a1 + 1088);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
  v3 = *((_DWORD *)a1 + 567);
  for ( i = 0LL; v3; v3 &= ~(1 << MostSignificantBit) )
  {
    MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(v3);
    if ( *((_BYTE *)a1 + 59) )
    {
      if ( VidSchiVSyncDisabledOnAllPlanes(
             a1,
             *((struct _VIDSCH_PRESENT_INFO **)a1 + MostSignificantBit + 400),
             0xFFFFFFFF) )
      {
        goto LABEL_7;
      }
    }
    else if ( *((_DWORD *)a1 + MostSignificantBit + 584) >= *((_DWORD *)a1 + 601) )
    {
      *((_DWORD *)a1 + MostSignificantBit + 584) = -1;
LABEL_7:
      v11[i] = MostSignificantBit;
      i = (unsigned int)(i + 1);
    }
  }
  *((_QWORD *)a1 + 283) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)i )
  {
    v6 = v11;
    do
    {
      v7 = *v6;
      v8 = *((_BYTE *)a1 + v7 + 1808);
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + v7 + 568, 0, 0);
      if ( v8
        && !v9
        && !*((_DWORD *)a1 + 5 * v7 + 474)
        && !(unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), v7)
        && !*((_DWORD *)a1 + v7 + 185)
        && !*((_DWORD *)a1 + 203)
        && !*((_DWORD *)a1 + 5 * v7 + 475) )
      {
        VidSchiControlVSync(a1, 0LL, 3LL, (unsigned int)v7);
        VidSchiSetVSyncSuspended((__int64)a1, v7, 1);
      }
      ++v6;
      --i;
    }
    while ( i );
  }
  ExReleaseResourceLite(v1);
}
