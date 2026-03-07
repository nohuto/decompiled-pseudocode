char __fastcall DispConfigTypes::RequiresUserCritShared(__int64 a1)
{
  if ( (_DWORD)a1 == -21 || (_DWORD)a1 == -2 || (_DWORD)a1 == -20 || (_DWORD)a1 == -11 )
    return 1;
  else
    return DispConfigTypes::AllowInAnySession(a1) ^ 1;
}
