char __fastcall OPM::CList<COPMProtectedOutput>::GetNextElementIndex(__int64 *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  __int64 v5; // r10
  unsigned int v6; // ecx

  v3 = a2 + 1;
  if ( (unsigned int)v3 < a2 )
    return 0;
  v4 = *((_DWORD *)a1 + 3);
  if ( (unsigned int)v3 >= v4 )
    return 0;
  v5 = *a1;
  v6 = v3 + 1;
  while ( !*(_QWORD *)(v5 + 8 * v3) )
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v3 = (unsigned int)(v3 + 1);
      ++v6;
      if ( (unsigned int)v3 < v4 )
        continue;
    }
    return 0;
  }
  *a3 = v3;
  return 1;
}
