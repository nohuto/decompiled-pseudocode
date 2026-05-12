/*
 * XREFs of StorPortGetAdditionalCrashDumpArea @ 0x1C0012420
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0077720 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x1C0072CA0 (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall StorPortGetAdditionalCrashDumpArea(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ecx
  int v7; // edx
  __int64 v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v6 = 0;
  if ( !a1 )
    return 3221225473LL;
  v7 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a2 + 184) )
    goto LABEL_6;
  v8 = *(_QWORD *)(a1 + 4432);
  if ( !v8 )
  {
    if ( *(_DWORD *)(a1 + 752) == 3 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
        v8 = *(_QWORD *)(a1 + 4464);
      else
        LODWORD(v8) = -1;
    }
    else
    {
      LODWORD(v8) = -1;
    }
  }
  result = StorAllocateContiguousMemory(
             (int)a1 + 728,
             a3,
             *(_QWORD *)(a1 + 4440),
             v8,
             *(_QWORD *)(a1 + 4448),
             *(_DWORD *)(a1 + 4424),
             0x80000000,
             (__int64)&v10);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = v11;
LABEL_6:
    *(_OWORD *)(a2 + 168) = v10;
    result = v6;
    *(_DWORD *)(a2 + 184) = v7;
  }
  return result;
}
