__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 18LL; i < 90; i += 18LL )
  {
    if ( *a1 < dword_140C0B590[i + 16] )
      break;
    if ( a1[1] < dword_140C0B590[i + 17] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
