void __fastcall MincryptFreePolicyInfo(__int64 a1)
{
  void *v2; // rcx

  if ( a1 && *(_DWORD *)a1 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x72634943u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
