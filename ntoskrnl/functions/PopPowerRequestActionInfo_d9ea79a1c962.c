__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  void *v2; // rcx
  KPROCESSOR_MODE PreviousMode; // si
  int IsAppContainerOrIdentifyLevelContext; // ebx
  __int64 v5; // rdx
  int v6; // eax
  char v8; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = *(void **)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0;
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
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v8);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          if ( !v8 )
            goto LABEL_6;
          IsAppContainerOrIdentifyLevelContext = -1073741790;
        }
LABEL_10:
        ObfDereferenceObjectWithTag(Object, 0x72506F50u);
        return (unsigned int)IsAppContainerOrIdentifyLevelContext;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
      goto LABEL_10;
    }
LABEL_6:
    v5 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *((_BYTE *)Object + 152) )
        v6 = PopPowerRequestSpecialRequestSet(Object, v5, *(_QWORD *)(a1 + 16));
      else
        v6 = PopPowerRequestReferenceAcquire(Object, v5);
    }
    else if ( *((_BYTE *)Object + 152) )
    {
      v6 = PopPowerRequestSpecialRequestClear(Object, v5);
    }
    else
    {
      v6 = PopPowerRequestReferenceRelease(Object, v5);
    }
    IsAppContainerOrIdentifyLevelContext = v6;
    goto LABEL_10;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
