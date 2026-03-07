signed __int64 *__fastcall ExpAcquireFannedOutPushLockShared(unsigned int a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r11
  unsigned int v6; // ecx
  signed __int64 *v7; // rbx

  v4 = (a1 >> 13) & 0x3FFFF;
  v5 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v6, v4);
  v7 = (signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v6 - 2)
                                    + 8LL * (v4 ^ (1 << v6))
                                    + 8)
                        + 8 * (v5 & 0x1FF));
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, a2, a3, a4);
  return v7;
}
