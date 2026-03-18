/*
 * XREFs of PopPowerRequestActionInfo @ 0x1407EF750
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestReferenceRelease @ 0x140369FDC (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14036A2C8 (PopPowerRequestReferenceAcquire.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407EF848 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestSpecialRequestClear @ 0x14098A060 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14098A13C (PopPowerRequestSpecialRequestSet.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  char PreviousMode; // bp
  ULONG_PTR v3; // rcx
  int IsAppContainerOrIdentifyLevelContext; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = *(_QWORD *)a1;
  Object = 0LL;
  IsAppContainerOrIdentifyLevelContext = ObpReferenceObjectByHandleWithTag(
                                           v3,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
                                           0LL,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v5 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( !PreviousMode )
        goto LABEL_5;
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        goto LABEL_5;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) != 4 || PreviousMode == 1 )
      {
LABEL_5:
        v6 = *(unsigned int *)(a1 + 8);
        if ( *(_BYTE *)(a1 + 12) )
        {
          if ( *((_BYTE *)v5 + 152) )
            v7 = PopPowerRequestSpecialRequestSet(v5, v6, *(_QWORD *)(a1 + 16));
          else
            v7 = PopPowerRequestReferenceAcquire(v5, v6);
        }
        else if ( *((_BYTE *)v5 + 152) )
        {
          v7 = PopPowerRequestSpecialRequestClear(v5, v6);
        }
        else
        {
          v7 = PopPowerRequestReferenceRelease(v5, v6);
        }
        IsAppContainerOrIdentifyLevelContext = v7;
        goto LABEL_9;
      }
      IsAppContainerOrIdentifyLevelContext = -1073741637;
    }
LABEL_9:
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
