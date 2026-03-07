__int64 EditionEdgyEnabled()
{
  unsigned int v0; // edx
  __int64 v1; // r8

  v0 = 0;
  v1 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 16) == 1 )
      LOBYTE(v0) = *(_QWORD *)(v1 + 288) == gptiCurrent;
    else
      LOBYTE(v0) = *(_DWORD *)v1 != 0;
  }
  return v0;
}
