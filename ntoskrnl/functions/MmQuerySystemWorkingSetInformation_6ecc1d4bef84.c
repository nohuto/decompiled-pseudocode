_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  int v5; // ecx
  int v6; // edx
  __int64 AnyMultiplexedVm; // rdi
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int8 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 SharedVm; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int StandbyRepurposed; // eax
  __int64 v23; // r8
  _UNKNOWN **v24; // rcx
  int v25; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = 2;
  v6 = a1 - 2;
  if ( v6 )
  {
    v25 = v6 - 1;
    if ( v25 )
    {
      if ( v25 != 1 )
        return result;
      v5 = 1;
    }
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( !AnyMultiplexedVm )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v9 = (unsigned int)(v8 - 2);
  v10 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm, v12, v13, v14);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 128);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 120);
  if ( *(char *)(AnyMultiplexedVm + 184) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (*(_BYTE *)(AnyMultiplexedVm + 184) & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v10 + 8 * v9 + 6984);
  v19 = MiGetSharedVm(AnyMultiplexedVm, v16, v17, v18);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v19 + 64));
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v11);
  StandbyRepurposed = MiGetStandbyRepurposed(v10, 1LL, v20, v21);
  v23 = *a2;
  v24 = (_UNKNOWN **)a2[6];
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (_UNKNOWN **)(v23 + *(_QWORD *)(v10 + 6976));
  if ( result > v24 )
    result = v24;
  a2[1] <<= 12;
  *a2 = v23 << 12;
  a2[5] = result;
  return result;
}
