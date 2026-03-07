__int64 __fastcall RtlRemoveDynamicEnforcedAddressRange(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v3 = (unsigned __int64 *)*a1;
  v10 = 0LL;
  v11 = a2;
  v12 = a3;
  while ( v3 )
  {
    v7 = RtlpDynamicEnforcedAddressRangesTreeCompare(&v9, v3);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v3 = (unsigned __int64 *)v3[1];
    }
    else
    {
      v3 = (unsigned __int64 *)*v3;
    }
  }
  if ( !v3 )
    return 3221226021LL;
  if ( v3[3] != a2 || v3[4] != a3 )
    return 3221225496LL;
  RtlAvlRemoveNode(a1, v3);
  ExFreePoolWithTag(v3, 0);
  return 0LL;
}
