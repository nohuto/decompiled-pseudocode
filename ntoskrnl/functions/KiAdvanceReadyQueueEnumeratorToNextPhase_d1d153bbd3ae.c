__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextPhase(__int64 a1)
{
  unsigned __int8 i; // bl
  char v3; // dl
  int ready; // eax
  __int64 result; // rax

  for ( i = *(_BYTE *)(a1 + 13) + 1; i < 4u; ++i )
  {
    if ( i == 1 )
    {
      v3 = 0;
LABEL_7:
      ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(a1, v3);
      goto LABEL_8;
    }
    if ( i != 2 )
    {
      if ( i != 3 )
        continue;
      v3 = 1;
      goto LABEL_7;
    }
    ready = KiReadyQueueEnumeratorStartScbQueuesPhase(a1);
LABEL_8:
    if ( ready >= 0 )
      break;
  }
  *(_BYTE *)(a1 + 13) = i;
  result = 2147483674LL;
  if ( i != 4 )
    return 0LL;
  return result;
}
