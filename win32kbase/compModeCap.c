__int64 __fastcall compModeCap(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return (unsigned int)(a1[1] - a2[1]);
  else
    return (unsigned int)(*a1 - *a2);
}
