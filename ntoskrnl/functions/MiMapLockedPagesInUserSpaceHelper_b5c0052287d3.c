__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // r12
  unsigned int v15; // r14d
  char v17; // al
  __int64 v19; // [rsp+68h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  if ( a6 )
    MiInsertVad(a6, Process, 0LL);
  v13 = 0LL;
  v14 = MiLockWorkingSetShared(v12);
  v19 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v15 = v11;
    if ( a3 )
    {
      v15 = (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 16) >> 5) & 7;
      v17 = *(_BYTE *)(48LL * *a3 - 0x220000000000LL + 34) >> 6;
      if ( v17 == 2 )
      {
        v15 |= 0x18u;
      }
      else if ( !v17 )
      {
        v15 |= 8u;
      }
      ++a3;
    }
    if ( v13 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v12, v13);
    }
    v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v10, 0);
LABEL_9:
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v19 + v10), v15);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v12)
       || (unsigned int)MiPageTableLockIsContended(v12, v13)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v12, v13);
      MiUnlockWorkingSetShared(v12, v14);
      v13 = 0LL;
      MiLockWorkingSetShared(v12);
    }
    --a5;
  }
  while ( a5 );
  if ( v13 )
    MiUnlockPageTableInternal(v12, v13);
  return MiUnlockWorkingSetShared(v12, v14);
}
