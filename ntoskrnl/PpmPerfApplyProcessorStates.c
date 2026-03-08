/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x1402ED3A0
 * Callers:
 *     <none>
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x1402363D4 (PpmPerfQueueAction.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x14058AB3C (PpmPerfApplyHiddenProcessorState.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // rdx
  __int64 Prcb; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v14; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-D0h]
  __int16 v16; // [rsp+40h] [rbp-C8h]
  int v17; // [rsp+42h] [rbp-C6h]
  __int16 v18; // [rsp+46h] [rbp-C2h]
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h]
  _BYTE v21[248]; // [rsp+58h] [rbp-B0h] BYREF

  v0 = 0;
  v19 = 2097153LL;
  v17 = 0;
  v18 = 0;
  LODWORD(v13) = 0;
  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 1062) )
    {
      KiOrAffinityEx((char *)(i + 24), &v19, &v19, WORD1(v19));
      v8 = 0;
      LODWORD(v13) = 0;
      if ( *(_DWORD *)(i + 296) )
      {
        v9 = 0LL;
        do
        {
          v10 = *(_QWORD *)(i + 312) + 144 * v9;
          if ( *(_DWORD *)(v10 + 16) )
          {
            if ( *(_BYTE *)(v10 + 124) )
            {
              LOBYTE(v7) = 1;
              PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 312) + 144 * v9, v7);
              *(_BYTE *)(v10 + 124) = 0;
            }
            PpmPerfApplyHiddenProcessorState(i, v10, 0LL);
          }
          v9 = ++v8;
        }
        while ( v8 < *(_DWORD *)(i + 296) );
        LODWORD(v13) = v8;
      }
      *(_BYTE *)(i + 1062) = 0;
    }
  }
  v15 = v20;
  v14 = (unsigned __int16 *)&v19;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    Prcb = KeGetPrcb(v13);
    v6 = *(_QWORD *)(Prcb + 33976);
    if ( *(_BYTE *)(v6 + 124) )
    {
      LOBYTE(v2) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v2, v4, v5) )
      {
        *(_BYTE *)(v6 + 124) = 0;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, 0LL, v4, v5) )
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&v19, v13);
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx((unsigned __int16 *)&v19);
  if ( !PpmCheckCount )
    return 1;
  v15 = v20;
  v14 = (unsigned __int16 *)&v19;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v11 = KeGetPrcb(v13);
    PpmPerfQueueAction(v11, 2);
  }
  return v0;
}
