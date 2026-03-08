/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1402EB350
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14045AE3C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmPerfCompleteMakeup @ 0x14058AC04 (PpmPerfCompleteMakeup.c)
 *     PpmPerfMinimumPerfReached @ 0x14058AEFC (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x14059ABE4 (PpmParkMaximumCoresParked.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  __int64 Prcb; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 *v6; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int16 i; // dx
  __int64 v14; // rax
  unsigned __int16 *v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)((char *)&v17 + 2) = 0;
  HIWORD(v17) = 0;
  v18 = 0;
  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v16 = qword_140C0BD78;
      v15 = (unsigned __int16 *)&PpmCheckRegistered;
      LOWORD(v17) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v18, &v15) )
      {
        Prcb = KeGetPrcb(v18);
        PpmPerfCompleteMakeup(Prcb + 33968, v2, v3, v4, v15, v16, v17);
      }
      v5 = PpmPerfDomainHead;
      v6 = &PpmPerfDomainHead;
      while ( (__int64 *)v5 != v6 )
      {
        if ( *(_DWORD *)(v5 + 296) )
        {
          v7 = 0LL;
          v8 = 0LL;
          v9 = 0LL;
          do
          {
            v10 = *(_QWORD *)(v5 + 312) + 144 * v7;
            if ( *(_DWORD *)(v10 + 16) == 1 )
            {
              PpmPerfCompleteMakeup(*(_QWORD *)v10, v8, v5, v9, v15, v16, v17);
              LODWORD(v8) = v11;
            }
            v7 = (unsigned int)(v8 + 1);
            v8 = (unsigned int)v7;
            v9 = (unsigned int)v7;
          }
          while ( (unsigned int)v7 < *(_DWORD *)(v5 + 296) );
        }
        v5 = *(_QWORD *)v5;
      }
      v12 = PpmParkNumNodes;
      for ( i = 0; i < v12; *(_QWORD *)(PpmParkNodes + 192 * v14 + 88) = *(_QWORD *)(PpmParkNodes + 192 * v14 + 80) )
        v14 = i++;
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
