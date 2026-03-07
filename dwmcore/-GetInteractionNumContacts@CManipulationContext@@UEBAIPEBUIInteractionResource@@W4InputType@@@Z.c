__int64 __fastcall CManipulationContext::GetInteractionNumContacts(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 120LL))(a2, a3);
  else
    return 0LL;
}
