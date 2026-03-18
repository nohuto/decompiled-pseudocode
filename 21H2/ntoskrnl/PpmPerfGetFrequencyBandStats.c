/*
 * XREFs of PpmPerfGetFrequencyBandStats @ 0x1407F9EBC
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfGetFrequencyBandStats(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prcb; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // r9
  unsigned __int16 *v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+32h] [rbp-16h]
  __int16 v15; // [rsp+36h] [rbp-12h]
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( a1 )
  {
    v12[1] = (unsigned __int16 *)qword_140C0B8E8[0];
    v12[0] = (unsigned __int16 *)PpmCheckRegistered;
    v13 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v12) )
    {
      Prcb = KeGetPrcb(v16);
      v4 = *(_QWORD *)(Prcb + 33984);
      if ( v4 )
      {
        v5 = 48LL;
        v6 = 1152LL * (*(_BYTE *)(Prcb + 34056) != 0);
        v7 = v4 - v6 - a1;
        v8 = (_QWORD *)(v6 + a1);
        do
        {
          v9 = v8;
          v10 = 3LL;
          do
          {
            *v9 += *(_QWORD *)((char *)v9 + v7 + 248);
            v9 += 48;
            --v10;
          }
          while ( v10 );
          ++v8;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  else
  {
    v1 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v1;
}
