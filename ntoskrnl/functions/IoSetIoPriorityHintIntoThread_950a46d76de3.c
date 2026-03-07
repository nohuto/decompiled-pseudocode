__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, __int64 a2)
{
  if ( (unsigned int)a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread(a1, a2);
  return 0LL;
}
