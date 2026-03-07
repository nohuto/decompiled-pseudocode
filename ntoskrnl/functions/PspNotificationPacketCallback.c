void __fastcall PspNotificationPacketCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v4; // r9d
  int v5; // r8d
  unsigned int v6; // edx
  signed __int32 v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edi

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(a2, (__int64)CurrentThread);
  v4 = *(_DWORD *)(a2 + 1536);
  do
  {
    v5 = 0;
    v6 = v4;
    if ( (v4 & 0x4000) != 0 && (v6 = v4 & 0xFFFFBFFF, (*(_DWORD *)(a2 + 1088) & 0x800) != 0) )
    {
      v5 = 11;
    }
    else if ( (v6 & 0x10000) != 0 && (v6 &= ~0x10000u, (*(_DWORD *)(a2 + 1088) & 0x1000) != 0) )
    {
      v5 = 12;
    }
    else if ( (v6 & 0x8000) != 0 )
    {
      v6 &= ~0x8000u;
      if ( (*(_BYTE *)(a2 + 1088) & 0x10) != 0 )
        v5 = 4;
    }
    v7 = v4;
    v8 = v6 & 0xFFFFFFF7;
    if ( v5 )
      v8 = v6;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1536), v8, v4);
  }
  while ( v7 != v4 );
  v9 = *(_QWORD *)(a2 + 552);
  v10 = v9 != 0 ? v5 : 0;
  if ( v10 )
  {
    IoSetIoCompletionEx(v9, *(_QWORD *)(a2 + 560), 0, 0, v10, 0, *(_QWORD *)(a2 + 1216));
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 568));
  }
  PspUnlockJob(a2, (__int64)CurrentThread);
  if ( !v10 )
    ObfDereferenceObjectWithTag((PVOID)a2, 0x624A7350u);
}
