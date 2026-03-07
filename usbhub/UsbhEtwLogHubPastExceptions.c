void __fastcall UsbhEtwLogHubPastExceptions(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  __int64 v4; // rcx
  char *ExceptionDispatch; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-70h] BYREF
  int v11; // [rsp+C8h] [rbp-58h] BYREF
  __int16 v12; // [rsp+CCh] [rbp-54h]
  __int16 v13; // [rsp+CEh] [rbp-52h]
  __int16 v14; // [rsp+D0h] [rbp-50h]
  __int16 v15; // [rsp+D2h] [rbp-4Eh]
  _OWORD v16[2]; // [rsp+D8h] [rbp-48h] BYREF
  int v17; // [rsp+F8h] [rbp-28h]

  v8 = 0;
  v9 = 0LL;
  v17 = 0;
  v11 = *(_DWORD *)(a1 + 5192);
  v12 = *(_WORD *)(a1 + 5196);
  v13 = *(_DWORD *)(a1 + 5200);
  v14 = *(_WORD *)(a1 + 5228);
  v15 = *(_WORD *)(a1 + 5230);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v16, 0, sizeof(v16));
  UsbhEtwGetHubInfo(a1, (__int64)v16);
  v2 = MEMORY[0xFFFFF78000000014];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4872), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 4856); i != (_QWORD *)(a1 + 4856); i = (_QWORD *)*i )
  {
    v4 = *(_QWORD *)(a1 + 1200);
    v9 = v2 - i[2];
    ExceptionDispatch = UsbhGetExceptionDispatch(v4, *((_DWORD *)i - 8));
    v6 = -1LL;
    v8 = *((unsigned __int16 *)i - 14);
    v7 = *((_QWORD *)ExceptionDispatch + 1);
    do
      ++v6;
    while ( *(_BYTE *)(v7 + v6) );
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_PAST_EXCEPTION,
      0LL,
      &v9,
      8LL,
      &v11,
      12LL,
      v16,
      36LL,
      &v8,
      4LL,
      i - 4,
      4LL,
      (char *)i - 20,
      4LL,
      i - 3,
      4LL,
      v7,
      v6 + 1,
      0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
