/*
 * XREFs of PpmInitHeteroEngine @ 0x140B2E208
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PpmInitHeteroEngine()
{
  ULONG MaximumProcessorCount; // ebx
  unsigned int v1; // r14d
  __int64 Pool2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rdx
  ULONG *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  PVOID *v13; // rcx
  PVOID v14; // rcx
  PVOID *v15; // rcx
  PVOID v16; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = 3 * (MaximumProcessorCount * PpmHeteroWorkloadClasses + 8);
  PpmHeteroCapability = (PVOID)ExAllocatePool2(64LL, v1, 0x704D5050u);
  if ( PpmHeteroCapability )
  {
    Pool2 = ExAllocatePool2(64LL, MaximumProcessorCount, 0x704D5050u);
    if ( Pool2 )
    {
      v3 = 2 * PpmHeteroWorkloadClasses;
      v4 = ExAllocatePool2(64LL, (unsigned int)(2 * PpmHeteroWorkloadClasses), 0x704D5050u);
      if ( v4 )
      {
        v5 = PpmHeteroCapability;
        *((_QWORD *)PpmHeteroCapability + 1) = Pool2;
        v5[2] = v4;
        PpmHeteroCapabilityTest = (PVOID)ExAllocatePool2(64LL, v1, 0x704D5050u);
        if ( PpmHeteroCapabilityTest )
        {
          v6 = ExAllocatePool2(64LL, MaximumProcessorCount, 0x704D5050u);
          if ( v6 )
          {
            v7 = ExAllocatePool2(64LL, v3, 0x704D5050u);
            if ( v7 )
            {
              v8 = PpmHeteroCapabilityTest;
              v9 = (ULONG *)PpmHeteroCapability;
              *((_QWORD *)PpmHeteroCapabilityTest + 2) = v7;
              v10 = PpmHeteroWorkloadClasses;
              v8[1] = v6;
              *v9 = MaximumProcessorCount;
              *(_DWORD *)v8 = MaximumProcessorCount;
              v11 = 0;
              v9[1] = v10;
              *((_DWORD *)v8 + 1) = v10;
              return v11;
            }
          }
        }
      }
    }
    if ( PpmHeteroCapability )
    {
      ExFreePoolWithTag(*((PVOID *)PpmHeteroCapability + 2), 0x704D5050u);
      v13 = (PVOID *)PpmHeteroCapability;
      *((_QWORD *)PpmHeteroCapability + 2) = 0LL;
      ExFreePoolWithTag(v13[1], 0x704D5050u);
      v14 = PpmHeteroCapability;
      *((_QWORD *)PpmHeteroCapability + 1) = 0LL;
      ExFreePoolWithTag(v14, 0x704D5050u);
      PpmHeteroCapability = 0LL;
    }
  }
  v11 = -1073741670;
  if ( PpmHeteroCapabilityTest )
  {
    ExFreePoolWithTag(*((PVOID *)PpmHeteroCapabilityTest + 1), 0x704D5050u);
    v15 = (PVOID *)PpmHeteroCapabilityTest;
    *((_QWORD *)PpmHeteroCapabilityTest + 1) = 0LL;
    ExFreePoolWithTag(v15[2], 0x704D5050u);
    v16 = PpmHeteroCapabilityTest;
    *((_QWORD *)PpmHeteroCapabilityTest + 2) = 0LL;
    ExFreePoolWithTag(v16, 0x704D5050u);
    PpmHeteroCapabilityTest = 0LL;
  }
  return v11;
}
