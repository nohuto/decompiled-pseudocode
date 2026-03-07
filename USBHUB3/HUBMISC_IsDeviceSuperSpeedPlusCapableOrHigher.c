char __fastcall HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher(__int64 a1)
{
  char v1; // dl
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1632) & 0x1000) != 0 )
  {
    v2 = *(unsigned int *)(a1 + 2576);
    v3 = *(_QWORD *)(a1 + 2568);
    v4 = 0LL;
    if ( v2 )
    {
      while ( (*(_DWORD *)(v3 + 4 * v4) & 0xC000) == 0 )
      {
        if ( ++v4 >= v2 )
          return v1;
      }
      return 1;
    }
  }
  return v1;
}
