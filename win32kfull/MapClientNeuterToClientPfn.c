__int64 __fastcall MapClientNeuterToClientPfn(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx

  v3 = a2;
  if ( !a2 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 4LL);
  if ( (unsigned __int16)(v4 - 673) > 9u )
    return v3;
  if ( !a3 )
  {
    if ( *(_QWORD *)(gpsi + 8 * v4 - 4936) == v3 )
      return *(_QWORD *)(gpsi + 8 * v4 - 4744);
    return v3;
  }
  if ( *(_QWORD *)(gpsi + 8 * v4 - 4744) != v3 )
    return v3;
  return *(_QWORD *)(gpsi + 8 * v4 - 4936);
}
