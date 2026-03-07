__int64 __fastcall MiReplaceRotateWithDemandZeroNoCopy(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  int IsProbeActive; // r14d
  __int64 v6; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r12
  unsigned __int64 v16; // rdi
  unsigned __int8 v18; // [rsp+28h] [rbp-E0h]
  unsigned int v19; // [rsp+2Ch] [rbp-DCh]
  __int64 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v22; // [rsp+40h] [rbp-C8h]
  __int64 v23; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B8h]
  _QWORD v25[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v26[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  memset(v25, 0, 0xB8uLL);
  IsProbeActive = 0;
  v19 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v25[0]) = 0;
  v10 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v25[2] = 0LL;
  LODWORD(v25[1]) = 20;
  LODWORD(v25[0]) = 1;
  v25[3] = 0LL;
  v23 = v10;
  v18 = MiLockWorkingSetShared(v10);
  if ( v8 <= v22 )
  {
    v11 = 0LL;
    v24 = 0LL;
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_6;
      if ( (v8 & 0xFFF) == 0 )
        break;
LABEL_7:
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v8, 1LL, 3);
      if ( (unsigned int)MiUnmapFrameBuffer(v8) )
        IsProbeActive = 1;
      if ( v21 != -1 )
      {
        if ( (_DWORD)v6 && (v12 = 2LL * (unsigned int)(v6 - 1), v13 = v26[2 * (unsigned int)(v6 - 1) + 1], v13 == v21) )
        {
          v14 = v13 + 1;
        }
        else
        {
          v14 = v21 + 1;
          v12 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v26[v12] = v21;
        }
        v26[v12 + 1] = v14;
      }
      MiInsertTbFlushEntry((__int64)v25, (__int64)((v8 << 25) - v11) >> 16, 1LL, 0);
      ++v19;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v22
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v4)
                                         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList((int *)v25);
        if ( (_DWORD)v6 )
        {
          v15 = v26;
          do
          {
            MiDereferenceIoPages(1, *v15, v15[1] - *v15);
            v15 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v23;
          v11 = v24;
        }
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        HIDWORD(v20) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)&v20 + 1);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - v19)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10, v4);
        MiUnlockWorkingSetShared(v10, v18);
        if ( v8 > v22 )
          return IsProbeActive != 0 ? 0x40000019 : 0;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v19 = 0;
        v4 = 0LL;
        MiLockWorkingSetShared(v10);
      }
    }
    MiUnlockPageTableInternal(v10, v4);
LABEL_6:
    v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v4, 0);
    goto LABEL_7;
  }
  return 0LL;
}
