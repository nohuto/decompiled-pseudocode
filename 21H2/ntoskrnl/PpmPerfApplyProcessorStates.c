/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x14023B5A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x140345110 (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x1405CF458 (PpmPerfApplyHiddenProcessorState.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // rdx
  __int64 Prcb; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h]
  __int16 v13; // [rsp+40h] [rbp-C8h]
  int v14; // [rsp+42h] [rbp-C6h]
  __int16 v15; // [rsp+46h] [rbp-C2h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _BYTE v18[248]; // [rsp+58h] [rbp-B0h] BYREF

  v0 = 0;
  v16 = 2097153LL;
  v14 = 0;
  v15 = 0;
  LODWORD(v10) = 0;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 990) )
    {
      KiOrAffinityEx(i + 24, &v16, &v16, WORD1(v16), v10);
      LODWORD(v10) = 0;
      if ( *(_DWORD *)(i + 296) )
      {
        v6 = 0;
        do
        {
          v7 = *(_QWORD *)(i + 312) + 136LL * v6;
          if ( *(_DWORD *)(v7 + 16) )
          {
            if ( *(_BYTE *)(v7 + 124) )
            {
              LOBYTE(v5) = 1;
              PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 312) + 136LL * v6, v5);
              *(_BYTE *)(v7 + 124) = 0;
            }
            PpmPerfApplyHiddenProcessorState(i, v7, 0LL);
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(i + 296) );
        LODWORD(v10) = v6;
      }
      *(_BYTE *)(i + 990) = 0;
    }
  }
  v12 = v17;
  v11 = &v16;
  v13 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v11) )
  {
    Prcb = KeGetPrcb((unsigned int)v10);
    v4 = *(_QWORD *)(Prcb + 33976);
    if ( *(_BYTE *)(v4 + 124) )
    {
      LOBYTE(v2) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v2) )
      {
        *(_BYTE *)(v4 + 124) = 0;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, 0LL) )
        KeRemoveProcessorAffinityEx(&v16, (unsigned int)v10);
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v16);
  if ( !PpmCheckCount )
    return 1;
  v12 = v17;
  v11 = &v16;
  v13 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v11) )
  {
    v8 = KeGetPrcb((unsigned int)v10);
    PpmPerfQueueAction(v8, 2LL);
  }
  return v0;
}
