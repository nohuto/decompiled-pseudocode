void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET *v2; // rcx

  v2 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v2 && v2 != *(struct _PRIVILEGE_SET **)a1 && v2 != (struct _PRIVILEGE_SET *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, v2);
    else
      CmSiFreeMemory(v2);
  }
}
