__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // r10d

  v4 = *(__int64 **)(a1 + 1936);
  v5 = a2 >> 12;
  v6 = 1;
  v7 = a3 & 1 | 2;
  if ( (a3 & 2) == 0 )
    v7 = a3 & 1;
  if ( a4 )
    MmReleaseResourceCharge(v4, v5, v7, 0);
  else
    return (unsigned int)MmChargeResources(v4, v5, v7);
  return v6;
}
