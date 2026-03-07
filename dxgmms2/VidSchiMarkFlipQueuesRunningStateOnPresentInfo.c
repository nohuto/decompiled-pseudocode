// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiMarkFlipQueuesRunningStateOnPresentInfo(__int64 a1, __int64 a2, unsigned __int8 a3, bool *a4)
{
  __int64 v4; // rsi
  int v8; // eax
  int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v8 = *(_DWORD *)(a2 + 78792);
  if ( (_BYTE)v4 )
  {
    if ( !v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 4096LL, a1, a2, v4);
      __debugbreak();
      JUMPOUT(0x1C002BD74LL);
    }
    v9 = v8 - 1;
    *(_DWORD *)(a2 + 78792) = v9;
    if ( !v9 )
      *(_BYTE *)(a2 + 78788) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 78788) = 0;
    *(_DWORD *)(a2 + 78792) = v8 + 1;
    if ( a4 )
      *a4 = *(_DWORD *)(a2 + 3092) != 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
