void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  _BYTE *v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD v15[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = MiProbeAndLockPrepare(
         (unsigned int)v15,
         (_DWORD)MemoryDescriptorList,
         LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         AccessMode != 0,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket(v15);
  v8 = MiProbeAndLockComplete(v15, v7, 3LL);
  v9 = (_BYTE *)v15[16];
  v10 = v8;
  if ( v15[16] )
  {
    v11 = *(unsigned int *)(v15[16] + 52LL);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v12 = v15[14] + (v11 | ((unsigned __int64)*(unsigned __int8 *)(v15[16] + 34LL) << 31));
    v13 = v15[15];
    *(_DWORD *)(v15[16] + 52LL) ^= (v12 ^ *(_DWORD *)(v15[16] + 52LL)) & 0x7FFFFFFF;
    v9[34] = v12 >> 31;
    v14 = v13 - v15[14];
    if ( v14 )
      MiReturnFullProcessCommitment(v15[11], v14);
    MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
}
