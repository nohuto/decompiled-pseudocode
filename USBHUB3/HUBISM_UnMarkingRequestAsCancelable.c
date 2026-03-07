__int64 __fastcall HUBISM_UnMarkingRequestAsCancelable(__int64 a1)
{
  __int64 result; // rax

  result = 6005LL;
  if ( !_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 168) + 104LL), 0LL) )
    return 6004LL;
  return result;
}
