__int64 __fastcall MmChargeResources(void **a1, unsigned __int64 a2, char a3)
{
  void *v3; // r14
  unsigned int v4; // ebx
  unsigned int v8; // edi

  v3 = *a1;
  v4 = 0;
  v8 = 0;
  if ( (a3 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(*a1, a2, 0LL) )
      return v4;
    v8 = 2;
  }
  if ( (a3 & 1) != 0 && !(unsigned int)MiChargeCommit((unsigned __int64)v3, a2, 1uLL) )
  {
    if ( v8 )
      MmReleaseResourceCharge((__int64 *)a1, a2, v8, 0);
  }
  else
  {
    return 1;
  }
  return v4;
}
