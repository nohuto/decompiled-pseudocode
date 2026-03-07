__int64 __fastcall ImInspectChar(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  if ( ImpSessionId == (unsigned int)PsGetCurrentProcessSessionId() )
    return ImpQueueCharacter(a1, a2, a3, a4);
  else
    return 3221226021LL;
}
