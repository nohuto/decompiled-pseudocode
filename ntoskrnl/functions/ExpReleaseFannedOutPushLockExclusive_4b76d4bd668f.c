unsigned int __fastcall ExpReleaseFannedOutPushLockExclusive(unsigned __int64 a1)
{
  unsigned int result; // eax
  __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  volatile signed __int64 *v8; // rcx

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v3 = result;
    v4 = ((unsigned int)a1 >> 13) & 0x3FFFF;
    v5 = (a1 >> 4) & 0x1FF;
    v6 = 0LL;
    do
    {
      _BitScanReverse(&v7, v4);
      v8 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + ExSaPageArrays) + 8LL * (v7 - 2))
                                                 + 8 * (v4 ^ (unsigned __int64)(unsigned int)(1 << v7))
                                                 + 8)
                                     + 8 * v5);
      result = _InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (result & 2) != 0 && (result & 4) == 0 )
        result = ExfTryToWakePushLock(v8);
      v6 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
