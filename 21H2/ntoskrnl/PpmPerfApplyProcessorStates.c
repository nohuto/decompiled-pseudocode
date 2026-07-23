/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x140398AA0
 * Callers:
 *     <none>
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140269420 (KeCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeOrAffinityEx @ 0x1402D0100 (KeOrAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x14039921C (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x14056E8EC (PpmPerfApplyHiddenProcessorState.c)
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
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v12; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int16 *v13; // [rsp+30h] [rbp-91h] BYREF
  __int64 v14; // [rsp+38h] [rbp-89h]
  __int16 v15; // [rsp+40h] [rbp-81h]
  int v16; // [rsp+42h] [rbp-7Fh]
  __int16 v17; // [rsp+46h] [rbp-7Bh]
  __int64 v18; // [rsp+48h] [rbp-79h] BYREF
  __int64 v19; // [rsp+50h] [rbp-71h]
  _BYTE v20[152]; // [rsp+58h] [rbp-69h] BYREF

  v0 = 0;
  v18 = 1310721LL;
  v16 = 0;
  v17 = 0;
  LODWORD(v12) = 0;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 766) )
    {
      KeOrAffinityEx((unsigned __int16 *)(i + 24), (unsigned __int16 *)&v18, &v18);
      LODWORD(v12) = 0;
      if ( *(_DWORD *)(i + 200) )
      {
        v9 = 0;
        do
        {
          v10 = *(_QWORD *)(i + 216) + 136LL * v9;
          if ( *(_DWORD *)(v10 + 16) )
          {
            if ( *(_BYTE *)(v10 + 124) )
            {
              LOBYTE(v8) = 1;
              PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 216) + 136LL * v9, v8);
              *(_BYTE *)(v10 + 124) = 0;
            }
            PpmPerfApplyHiddenProcessorState(i, v10, 0LL);
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(i + 200) );
        LODWORD(v12) = v9;
      }
      *(_BYTE *)(i + 766) = 0;
    }
  }
  v14 = v19;
  v13 = (unsigned __int16 *)&v18;
  v15 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    Prcb = KeGetPrcb(v12);
    v6 = *(_QWORD *)(Prcb + 33136);
    if ( *(_BYTE *)(v6 + 124) )
    {
      LOBYTE(v2) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v2, v4, v5) )
      {
        *(_BYTE *)(v6 + 124) = 0;
        goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, 0LL, v4, v5) )
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&v18, v12);
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx((unsigned __int16 *)&v18);
  if ( !PpmCheckCount )
    return 1;
  v14 = v19;
  v13 = (unsigned __int16 *)&v18;
  v15 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v7 = KeGetPrcb(v12);
    PpmPerfQueueAction(v7, 2LL);
  }
  return v0;
}
