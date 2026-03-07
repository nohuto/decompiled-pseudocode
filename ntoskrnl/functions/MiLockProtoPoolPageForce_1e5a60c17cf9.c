__int64 __fastcall MiLockProtoPoolPageForce(signed __int64 BugCheckParameter1, __int64 a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiLockProtoPoolPage(BugCheckParameter1, a2);
    if ( result )
      break;
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  return result;
}
