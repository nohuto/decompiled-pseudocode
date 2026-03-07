bool __fastcall CManipulationContext::CheckForSingleTarget(const struct CInteraction *a1, const struct InputSinks *a2)
{
  const struct CInteraction *v3; // rdi
  bool result; // al

  if ( *((_QWORD *)a1 + 9) != *(_QWORD *)a2
    || *((_QWORD *)a1 + 10) != *((_QWORD *)a2 + 1)
    || *((_QWORD *)a1 + 11) != *((_QWORD *)a2 + 2)
    || *((_QWORD *)a1 + 12) != *((_QWORD *)a2 + 3) )
  {
    return 0;
  }
  v3 = (const struct CInteraction *)*((_QWORD *)a1 + 30);
  result = 1;
  do
  {
    if ( !v3 )
      break;
    result = CManipulationContext::CheckForSingleTarget(v3, a2);
    v3 = (const struct CInteraction *)*((_QWORD *)v3 + 28);
  }
  while ( result );
  return result;
}
