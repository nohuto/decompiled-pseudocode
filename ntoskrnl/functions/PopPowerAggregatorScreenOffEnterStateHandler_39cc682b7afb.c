__int64 __fastcall PopPowerAggregatorScreenOffEnterStateHandler(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h]
  _DWORD v9[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 64) )
  {
    PopPowerAggregatorEnterScreenOff(a1);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 88) && *(_BYTE *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      PopPowerAggregatorEngageModernStandby();
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 52) )
      return 0LL;
    v2 = *(_DWORD *)(a1 + 44);
    v7 = 0LL;
    v8 = 0;
    if ( v2 == 2 || v2 == 3 || v2 == 4 )
    {
      LODWORD(v7) = 2;
    }
    else if ( v2 == 5 )
    {
      v7 = 0x8000000400000003uLL;
LABEL_17:
      *(_BYTE *)(a1 + 52) = 1;
      v9[0] = 7;
      v10 = 0LL;
      v9[1] = 128;
      PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
      PopAcquirePolicyLock(v3);
      PopExecutePowerAction((unsigned int)v9, 0, (unsigned int)&v7, v2, 1);
      PopReleasePolicyLock(v5, v4, v6);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      return 0LL;
    }
    HIDWORD(v7) = -2147483644;
    goto LABEL_17;
  }
  return 0LL;
}
