/*
 * XREFs of ExWaitForRundownProtectionReleaseCacheAware @ 0x14028E0C0
 * Callers:
 *     RawVerifyVolume @ 0x1405A483C (RawVerifyVolume.c)
 *     MiDrainCrossPartitionUsage @ 0x14065745C (MiDrainCrossPartitionUsage.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     RawUserFsCtrl @ 0x14087D8B4 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

void __stdcall ExWaitForRundownProtectionReleaseCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRef)
{
  unsigned __int64 v1; // r9
  unsigned int Number; // r8d
  unsigned int v3; // r11d
  int v4; // edx
  __int64 v5; // rax
  signed __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+48h] [rbp-18h]

  v6 = 0LL;
  v1 = 0LL;
  Number = RunRef->Number;
  v3 = 0;
  Object = 0LL;
  v8 = 0LL;
  if ( Number )
  {
    do
    {
      v4 = v3 % Number;
      ++v3;
      v5 = _InterlockedExchange64(
             (volatile __int64 *)((char *)RunRef->RunRefs + RunRef->RunRefSize * v4),
             (__int64)&v6 + 1);
      Number = RunRef->Number;
      v1 += v5;
    }
    while ( v3 < Number );
    if ( v1 )
    {
      DWORD1(Object) = 0;
      *(_QWORD *)&v8 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      if ( _InterlockedExchangeAdd64(&v6, v1 >> 1) != -(__int64)(v1 >> 1) )
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
  }
}
