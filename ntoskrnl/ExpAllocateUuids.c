/*
 * XREFs of ExpAllocateUuids @ 0x140792ED8
 * Callers:
 *     NtAllocateUuids @ 0x14067EB00 (NtAllocateUuids.c)
 *     ExpUuidGetValues @ 0x1408701E8 (ExpUuidGetValues.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExpUuidLoadSequenceNumber @ 0x14085B194 (ExpUuidLoadSequenceNumber.c)
 */

__int64 __fastcall ExpAllocateUuids(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v12; // ecx
  LARGE_INTEGER v13; // rax
  char v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF
  int SequenceNumber; // [rsp+58h] [rbp+20h] BYREF

  SequenceNumber = 0;
  if ( !ExpUuidSequenceNumberValid )
  {
    SequenceNumber = ExpUuidLoadSequenceNumber();
    if ( SequenceNumber < 0 )
    {
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v12 = (unsigned int)&SequenceNumber ^ v13.LowPart ^ (unsigned int)a3 ^ ExpUuidSequenceNumber ^ v13.HighPart;
    }
    else
    {
      v12 = ExpUuidSequenceNumber + 1;
    }
    ExpUuidSequenceNumber = v12;
    ExpUuidSequenceNumberValid = 1;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated;
  if ( MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated < 0 )
  {
    ++ExpUuidSequenceNumber;
    ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014] - 20000LL;
    v7 = 20000LL;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  if ( v7 )
  {
    if ( ExpUuidTimeSequenceNumber )
      ExpUuidTimeSequenceNumber = 0;
    if ( v7 > 10000000 )
      v7 = 10000000LL;
    v8 = 10000;
    if ( v7 <= 10000 )
    {
      *a2 = v7;
      v8 = v7;
      v9 = 0LL;
    }
    else
    {
      *a2 = 10000;
      v9 = v7 - 10000;
    }
    v10 = v6 - v8 - v9;
    *(_QWORD *)a1 = v10;
    ExpUuidLastTimeAllocated = v10 + (unsigned int)*a2;
LABEL_12:
    *a3 = ExpUuidSequenceNumber;
    return 0LL;
  }
  if ( (unsigned int)ExpUuidTimeSequenceNumber < 0x1F )
  {
    v14 = ++ExpUuidTimeSequenceNumber;
    *a2 = 10000;
    *(_QWORD *)a1 = v6 - 10000;
    v15 = ((v14 & 1) << 27) | 0x4000000;
    if ( (v14 & 2) == 0 )
      v15 = (v14 & 1) << 27;
    v16 = v15 | 0x2000000;
    if ( (v14 & 4) == 0 )
      v16 = v15;
    v17 = v16 | 0x1000000;
    if ( (v14 & 8) == 0 )
      v17 = v16;
    v18 = v17 | 0x800000;
    if ( (v14 & 0x10) == 0 )
      v18 = v17;
    *(_DWORD *)(a1 + 4) |= v18;
    goto LABEL_12;
  }
  return 3221226029LL;
}
