char __fastcall SeAuditingAnyFileEventsWithContextEx(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rdi
  char result; // al

  v3 = a3;
  if ( a3 )
  {
    LOBYTE(a3) = 1;
    *v3 = SepAdtAuditThisEventWithContext(129LL, 1LL, a3, a2);
  }
  LOBYTE(a3) = 1;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(116LL, 1LL, a3, a2) )
    return 1;
  result = SepAdtAuditThisEventByCategoryWithContext(3LL, 51LL, a2);
  if ( result )
    return 1;
  return result;
}
