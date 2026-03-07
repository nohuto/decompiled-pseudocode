__int64 __fastcall MiDeleteAweInfoPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v2; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // r13
  __int64 Process; // rbx
  __int64 AweInfoPartition; // r12
  __int64 AwePageSize; // rax
  int v9; // ecx
  unsigned __int64 *v10; // r15
  unsigned __int64 SetBits; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // ecx
  unsigned __int64 v19; // r15
  ULONG_PTR v20; // rbx
  __int64 v21; // r14
  int v22; // edx
  __int64 v23; // r13
  __int64 v24; // r9
  __int64 v26; // [rsp+20h] [rbp-68h]
  unsigned __int64 v27; // [rsp+28h] [rbp-60h]
  struct _KTHREAD *v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h]
  __int64 ProcessPartition; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v28 = CurrentThread;
  v5 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  ProcessPartition = MiGetProcessPartition(Process);
  AweInfoPartition = MiGetAweInfoPartition(a1);
  MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
  AwePageSize = MiGetAwePageSize(a1);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = (unsigned __int64 *)(a1 + 24);
  v30 = AwePageSize;
  if ( (v9 & 1) == 0 || *(_QWORD *)(Process + 2032) )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v10, 1uLL, v4);
      v12 = SetBits;
      if ( SetBits < v4 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx(v10, SetBits, &v29);
      v14 = v29;
      v15 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        v14 = *v10;
      v16 = v14 - v12;
      RtlClearBitsEx((__int64)v10, v12, v16);
      v17 = v30;
      v18 = *(_DWORD *)(a1 + 8);
      v27 = v12 + v16 + v15;
      v19 = 0LL;
      v20 = v30 * v12;
      v5 += v30 * v16;
      v26 = v5;
      if ( (v18 & 8) != 0 )
      {
        v21 = 0LL;
        v22 = 1;
      }
      else
      {
        v21 = 48 * v20 - 0x220000000000LL;
        v22 = *(unsigned __int8 *)(v21 + 34) >> 6;
      }
      if ( v16 )
      {
        v23 = ProcessPartition;
        v24 = 48 * v30;
        v32 = 48 * v30;
        do
        {
          if ( (v18 & 8) == 0 && *(unsigned __int8 *)(v21 + 34) >> 6 != v22 )
          {
            if ( v17 == 1 )
            {
              MiFreeMdlPageRun(v20, v19, 0, 0LL);
              if ( AweInfoPartition != v23 )
                MiReturnCrossPartitionCharges(AweInfoPartition, 4, 1, v19);
            }
            else
            {
              MiFreeContiguousLargePageRun(a1, v20, v19);
            }
            v22 = *(unsigned __int8 *)(v21 + 34) >> 6;
            v18 = *(_DWORD *)(a1 + 8);
            v17 = v30;
            v24 = v32;
            v19 = 0LL;
            v20 = 0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4);
          }
          v19 += v17;
          v21 += v24;
          --v16;
        }
        while ( v16 );
        v5 = v26;
      }
      if ( v17 == 1 )
      {
        MiFreeMdlPageRun(v20, v19, 0, 0LL);
        if ( AweInfoPartition != ProcessPartition )
          MiReturnCrossPartitionCharges(AweInfoPartition, 4, 1, v19);
      }
      else
      {
        MiFreeContiguousLargePageRun(a1, v20, v19);
      }
      v4 = v27;
      v10 = (unsigned __int64 *)(a1 + 24);
    }
    while ( v27 < *(_QWORD *)(a1 + 24) );
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 17832), -v5);
        if ( (unsigned __int16 *)AweInfoPartition == MiSystemPartition )
          _InterlockedExchangeAdd64(&qword_140C69630, -v5);
      }
    }
    CurrentThread = v28;
    v2 = v5;
  }
  MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
  return v2;
}
