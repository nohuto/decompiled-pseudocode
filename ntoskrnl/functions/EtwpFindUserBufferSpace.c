__int64 __fastcall EtwpFindUserBufferSpace(__int64 a1, __int64 a2, int a3, PVOID *a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned int NextAlignedForwardRunClear; // eax
  unsigned int v9; // r14d
  NTSTATUS v11; // eax
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  *a4 = 0LL;
  RegionSize = (a3 + 4095) & 0xFFFFF000;
  v7 = (unsigned int)RegionSize >> 12;
  NextAlignedForwardRunClear = RtlFindNextAlignedForwardRunClear((int *)(a2 + 96), a2, (unsigned int)RegionSize >> 12);
  v9 = NextAlignedForwardRunClear;
  if ( NextAlignedForwardRunClear != -1
    && (unsigned int)RtlInterlockedSetClearRun(a2 + 96, NextAlignedForwardRunClear, v7) )
  {
    *a4 = (PVOID)(*(_QWORD *)(a2 + 112) + (v9 << 12));
  }
  *(_DWORD *)(a2 + 128) += v7;
  if ( !*a4 )
  {
    v11 = ZwAllocateVirtualMemory(*(HANDLE *)(a2 + 16), a4, 0LL, &RegionSize, 0x1000u, 4u);
    v6 = v11;
    if ( v11 < 0 )
    {
      if ( v11 == -1073741670 || v11 == -1073741523 )
        return (unsigned int)-1073741764;
    }
    else
    {
      *(_DWORD *)(a2 + 124) += v7;
    }
  }
  return v6;
}
