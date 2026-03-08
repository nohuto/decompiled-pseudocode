/*
 * XREFs of ExpAllocateFannedOutPushLock @ 0x1403CF30C
 * Callers:
 *     ExpTryExpandAutoExpandPushLock @ 0x1403CF2A8 (ExpTryExpandAutoExpandPushLock.c)
 * Callees:
 *     ExSaAllocate @ 0x1402962FC (ExSaAllocate.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 */

__int64 __fastcall ExpAllocateFannedOutPushLock(__int64 a1, char a2)
{
  __int64 v3; // rbx
  ULONG MaximumProcessorCount; // eax
  __int64 *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = ExSaAllocate(0x10u, (a2 & 1) == 0);
  if ( v3 != -1 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      v5 = (__int64 *)ExSaPageArrays;
      v6 = ((unsigned int)v3 >> 13) & 0x3FFFF;
      v7 = ((unsigned int)v3 >> 4) & 0x1FF;
      v8 = MaximumProcessorCount;
      do
      {
        _BitScanReverse(&v9, v6);
        v10 = *v5++;
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * (v9 - 2)) + 8 * (v6 ^ (unsigned __int64)(unsigned int)(1 << v9)) + 8);
        *(_QWORD *)(v11 + 8 * v7) = 0LL;
        *(_QWORD *)(v11 + 8 * v7 + 8) = a1;
        --v8;
      }
      while ( v8 );
    }
  }
  return v3;
}
