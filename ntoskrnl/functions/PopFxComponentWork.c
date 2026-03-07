LONG __fastcall PopFxComponentWork(__int64 a1)
{
  __int64 v2; // rcx
  LONG result; // eax

  do
    PopFxIdleWorker(*(_QWORD *)(a1 + 80));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  v2 = *(_QWORD *)(a1 + 80);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 248), 0, 0);
  return result;
}
