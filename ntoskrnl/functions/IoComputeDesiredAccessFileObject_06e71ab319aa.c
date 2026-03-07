__int64 __fastcall IoComputeDesiredAccessFileObject(__int64 a1, int *a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // r9

  v2 = 0;
  v3 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  *a2 = 0;
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v3] == IoFileObjectType )
    *a2 = ~(unsigned __int8)(*(_DWORD *)(a1 + 80) >> 5) & 4 | 2;
  else
    return (unsigned int)-1073741788;
  return v2;
}
