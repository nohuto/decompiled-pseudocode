PATHOBJ *__fastcall VerifierEngCreatePath(__int64 a1)
{
  if ( (unsigned int)VerifierRandomFailure(a1) )
    return 0LL;
  else
    return EngCreatePath();
}
