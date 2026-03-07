char __fastcall ExpTryAcquireFannedOutPushLockExclusive(unsigned __int64 a1)
{
  char v2; // bl
  ULONG MaximumProcessorCount; // r9d
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  volatile signed __int64 *v10; // rcx
  char v11; // al

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( !MaximumProcessorCount )
    return 1;
  v5 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v6 = (a1 >> 4) & 0x1FF;
  while ( 1 )
  {
    _BitScanReverse(&v7, v5);
    if ( _interlockedbittestandset64(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v4) + 8LL * (v7 - 2))
                                                 + 8LL * (v5 ^ (1 << v7))
                                                 + 8)
                                     + 8LL * v6),
           0LL) )
    {
      break;
    }
    if ( ++v4 >= MaximumProcessorCount )
      return 1;
  }
  while ( v4 )
  {
    _BitScanReverse(&v9, v5);
    v10 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * --v4) + 8LL * (v9 - 2))
                                                + 8LL * (v5 ^ (1 << v9))
                                                + 8)
                                    + 8LL * v6);
    v11 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock(v10);
  }
  return v2;
}
