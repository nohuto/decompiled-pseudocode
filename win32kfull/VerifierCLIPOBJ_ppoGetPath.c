struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned int)VerifierRandomFailure((__int64)this) )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this, v2, v3, v4);
}
