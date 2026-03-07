__int64 __fastcall anonymous_namespace_::AppStarting_Clear(__int64 a1)
{
  __int64 *i; // rdx
  __int64 result; // rax

  for ( i = (__int64 *)gppiStarting; ; i = (__int64 *)(result + 360) )
  {
    result = *i;
    if ( !*i )
      break;
    if ( result == a1 )
    {
      result = *(_QWORD *)(a1 + 360);
      *i = result;
      break;
    }
  }
  *(_DWORD *)(a1 + 12) &= ~0x40u;
  return result;
}
