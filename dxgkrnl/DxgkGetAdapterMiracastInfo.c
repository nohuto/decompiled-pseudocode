void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 128;
  v4 = (*(_DWORD *)(v2 + 3240) != -1) + 128;
  *(_DWORD *)(a2 + 24) = v4;
  if ( (v4 & 1) != 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v5 = *(_DWORD *)(a2 + 24) ^ (*(_DWORD *)(a2 + 24) ^ (2 * *(_DWORD *)(v2 + 3236))) & 2;
    *(_DWORD *)(a2 + 24) = v5;
    v6 = v5 & 0xFFFFFFFB | (*(_QWORD *)(v2 + 3248) != 0LL ? 4 : 0);
    *(_DWORD *)(a2 + 24) = v6;
    if ( (v6 & 4) != 0 )
    {
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3248) + 600LL))) & 8;
      *(_DWORD *)(a2 + 24) = v7;
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3248) + 600LL))) & 0x10;
      *(_DWORD *)(a2 + 24) = v8;
      *(_DWORD *)(a2 + 24) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8
                                                                         * *(_DWORD *)(*(_QWORD *)(v2 + 3248) + 600LL))) & 0x20;
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3248) + 608LL);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(v2 + 3248) + 616LL);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v2 + 3248) + 624LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    *(_DWORD *)(a2 + 24) = v4;
  }
}
