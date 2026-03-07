__int64 ACPIDevicePowerProcessBlockedItems()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int64 *v2; // rax
  __int64 **v3; // rcx
  __int64 v4; // rax
  __int64 **v5; // rcx

  v0 = (__int64 *)AcpiPowerBlockedOnDependencyList;
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
  {
    do
    {
      v1 = (__int64 *)*v0;
      if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v0) )
      {
        v2 = (__int64 *)*v0;
        if ( *(__int64 **)(*v0 + 8) != v0
          || (v3 = (__int64 **)v0[1], *v3 != v0)
          || (*v3 = v2, v2[1] = (__int64)v3, v4 = v0[12], v5 = *(__int64 ***)(v4 + 8), *v5 != (__int64 *)v4) )
        {
          __fastfail(3u);
        }
        *v0 = v4;
        v0[1] = (__int64)v5;
        *v5 = v0;
        *(_QWORD *)(v4 + 8) = v0;
        v0[12] = 0LL;
      }
      v0 = v1;
    }
    while ( v1 != &AcpiPowerBlockedOnDependencyList );
  }
  return 0LL;
}
