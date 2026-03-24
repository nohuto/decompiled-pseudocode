/*
 * XREFs of PopPowerRequestActionInfo @ 0x14067C148
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 * Callees:
 *     PoClearPowerRequestInternal @ 0x140281F9C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067C238 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     PopClearSpecialRequest @ 0x1408E17FC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408E1BAC (PopSetSpecialRequest.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  void *v2; // rcx
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  IsAppContainerOrIdentifyLevelContext = ObReferenceObjectByHandleWithTag(
                                           v2,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
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
          if ( v5[136] )
            v7 = PopSetSpecialRequest(v5, v6, *(_QWORD *)(a1 + 16));
          else
            v7 = PoSetPowerRequestInternal((__int64)v5, v6);
        }
        else if ( v5[136] )
        {
          v7 = PopClearSpecialRequest(v5, v6);
        }
        else
        {
          v7 = PoClearPowerRequestInternal((__int64)v5, v6);
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
