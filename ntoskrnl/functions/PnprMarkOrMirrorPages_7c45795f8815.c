__int64 __fastcall PnprMarkOrMirrorPages(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  RTL_BITMAP *v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = PnprContext;
  v5 = a1 >> 12;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = PnprContext + 152;
  v8 = *(RTL_BITMAP **)(PnprContext + 152);
  v9 = (a2 >> 12) + v5;
  v10 = v9 - 1;
  while ( v8 != (RTL_BITMAP *)v7 )
  {
    v11 = *(_QWORD *)&v8[1].SizeOfBitMap;
    if ( v10 < v11 )
      break;
    v12 = v5;
    v13 = v9;
    if ( v5 <= v11 )
      v12 = *(_QWORD *)&v8[1].SizeOfBitMap;
    if ( (unsigned int *)v10 >= (unsigned int *)((char *)v8[1].Buffer + v11 - 1) )
      v13 = (unsigned __int64)v8[1].Buffer + v11;
    v14 = v13 - 1;
    if ( v12 <= v14 )
    {
      if ( a3 )
      {
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v4 + 33216))(
               *(_QWORD *)(v4 + 33168),
               v12 << 12,
               (v14 << 12) - (v12 << 12) + 4096) < 0 )
        {
          v15 = PnprContext;
          v16 = *(_DWORD *)(PnprContext + 33272);
          if ( !v16 )
            v16 = 3432;
          *(_DWORD *)(PnprContext + 33272) = v16;
          v17 = *(_DWORD *)(v15 + 33276);
          if ( !v17 )
            v17 = 8;
          *(_DWORD *)(v15 + 33276) = v17;
        }
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 168), &LockHandle);
        RtlClearBits(v8 + 2, v12 - v11, v14 - v12 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v4 = PnprContext;
    v8 = *(RTL_BITMAP **)&v8->SizeOfBitMap;
    v7 = PnprContext + 152;
  }
  return 0LL;
}
