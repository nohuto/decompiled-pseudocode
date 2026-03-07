void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rcx

  for ( i = gppiList; i; i = *(_QWORD *)(i + 368) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 912)) )
    {
      *(_DWORD *)(v1 + 40) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 912) + 32LL));
    }
  }
}
