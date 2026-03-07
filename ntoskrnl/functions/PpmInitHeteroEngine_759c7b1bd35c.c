__int64 PpmInitHeteroEngine()
{
  _QWORD *v0; // rdi
  ULONG MaximumProcessorCount; // ebx
  ULONG_PTR v2; // r15
  _QWORD *Pool2; // rsi
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx

  v0 = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v2 = 4 * PpmHeteroWorkloadClasses * MaximumProcessorCount + 24;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v2, 0x704D5050u);
  if ( Pool2 )
  {
    v4 = ExAllocatePool2(64LL, MaximumProcessorCount, 0x704D5050u);
    if ( !v4 )
      goto LABEL_12;
    v5 = 2 * PpmHeteroWorkloadClasses;
    v6 = ExAllocatePool2(64LL, (unsigned int)(2 * PpmHeteroWorkloadClasses), 0x704D5050u);
    if ( !v6 )
      goto LABEL_12;
    Pool2[1] = v4;
    Pool2[2] = v6;
    *((_DWORD *)Pool2 + 1) = PpmHeteroWorkloadClasses;
    *(_DWORD *)Pool2 = MaximumProcessorCount;
    v0 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)v2, 0x704D5050u);
    if ( v0
      && (v7 = ExAllocatePool2(64LL, MaximumProcessorCount, 0x704D5050u)) != 0
      && (v8 = ExAllocatePool2(64LL, v5, 0x704D5050u)) != 0 )
    {
      v0[2] = v8;
      v9 = PpmHeteroWorkloadClasses;
      *(_DWORD *)v0 = MaximumProcessorCount;
      v10 = 0;
      *((_DWORD *)v0 + 1) = v9;
      v0[1] = v7;
      PpmHeteroCapability = Pool2;
      PpmHeteroCapabilityTest = v0;
    }
    else
    {
LABEL_12:
      v10 = -1073741670;
      v12 = (void *)Pool2[2];
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0x704D5050u);
        Pool2[2] = 0LL;
      }
      v13 = (void *)Pool2[1];
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x704D5050u);
        Pool2[1] = 0LL;
      }
      ExFreePoolWithTag(Pool2, 0x704D5050u);
      if ( v0 )
      {
        v14 = (void *)v0[2];
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0x704D5050u);
          v0[2] = 0LL;
        }
        v15 = (void *)v0[1];
        if ( v15 )
        {
          ExFreePoolWithTag(v15, 0x704D5050u);
          v0[1] = 0LL;
        }
        ExFreePoolWithTag(v0, 0x704D5050u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
