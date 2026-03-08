/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x1403CA3BC
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerStreamContext @ 0x1402C99C0 (FsRtlInsertPerStreamContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 */

unsigned int __fastcall ExpAcquireFannedOutPushLockExclusive(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rbp
  unsigned int v5; // ecx
  unsigned __int64 v8; // rbp
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ebx
  unsigned int result; // eax
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 *v15; // rcx

  v3 = (a1 >> 13) & 0x3FFFF;
  v4 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v5, v3);
  v8 = v4 & 0x1FF;
  v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v5 - 2))
                                      + 8LL * (v3 ^ (1 << v5))
                                      + 8)
                          + 8 * v8);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, a2, a3);
  v10 = 1;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v12) = result;
  if ( result > 1 )
  {
    do
    {
      _BitScanReverse(&v13, v3);
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v10)
                                                               + 8LL * (v13 - 2))
                                                   + 8LL * (v3 ^ (1 << v13))
                                                   + 8)
                                       + 8 * v8),
             0LL) )
      {
        result = ExSaPageArrays;
        v12 = (unsigned int)(v12 - 1);
        _BitScanReverse(&v14, v3);
        v15 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v12) + 8LL * (v14 - 2))
                                             + 8LL * (v3 ^ (1 << v14))
                                             + 8)
                                 + 8 * v8);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
          result = ExfAcquirePushLockExclusiveEx(v15, a2, a3);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v12 );
  }
  return result;
}
