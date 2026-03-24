/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1403059D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402293C0 (KeEnumerateNextProcessor.c)
 *     PpmPerfCompleteMakeup @ 0x140305AF4 (PpmPerfCompleteMakeup.c)
 *     PpmPerfMinimumPerfReached @ 0x140305B14 (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x140305B7C (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14057AA44 (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  __int64 Prcb; // rax
  __int64 v2; // r8
  __int64 *v3; // r10
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned __int16 i; // dx
  __int64 v8; // rax
  unsigned __int16 *v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+32h] [rbp-16h]
  __int16 v12; // [rsp+36h] [rbp-12h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v9[1] = (unsigned __int16 *)qword_140C113D8[0];
      v9[0] = (unsigned __int16 *)&PpmCheckRegistered;
      v10 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v9) )
      {
        Prcb = KeGetPrcb(v13);
        PpmPerfCompleteMakeup(Prcb + 33128);
      }
      v2 = PpmPerfDomainHead;
      v3 = &PpmPerfDomainHead;
      while ( (__int64 *)v2 != v3 )
      {
        if ( *(_DWORD *)(v2 + 200) )
        {
          v4 = 0;
          do
          {
            v5 = *(_QWORD *)(v2 + 216) + 136LL * v4;
            if ( *(_DWORD *)(v5 + 16) == 1 )
              PpmPerfCompleteMakeup(*(_QWORD *)v5);
            ++v4;
          }
          while ( v4 < *(_DWORD *)(v2 + 200) );
        }
        v2 = *(_QWORD *)v2;
      }
      v6 = PpmParkNumNodes;
      for ( i = 0; i < v6; *(_QWORD *)(PpmParkNodes + 272 * v8 + 112) = *(_QWORD *)(PpmParkNodes + 272 * v8 + 104) )
        v8 = i++;
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      PpmCheckPipelineIndex = 4;
    }
  }
  return 1;
}
