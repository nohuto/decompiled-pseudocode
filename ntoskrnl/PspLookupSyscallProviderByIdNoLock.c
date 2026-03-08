/*
 * XREFs of PspLookupSyscallProviderByIdNoLock @ 0x1409B1E1C
 * Callers:
 *     PspLookupSyscallProviderById @ 0x1405A2870 (PspLookupSyscallProviderById.c)
 *     PspInsertSyscallProvider @ 0x1409B1D44 (PspInsertSyscallProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspLookupSyscallProviderByIdNoLock(_QWORD *a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // r8
  unsigned int v4; // r9d
  char *v5; // rcx
  signed __int64 v6; // rax
  unsigned __int64 i; // rcx
  signed __int64 v8; // rtt

  v2 = (volatile signed __int64 *)PspSyscallProviders;
  v4 = -1073741275;
  while ( v2 != (volatile signed __int64 *)&PspSyscallProviders )
  {
    v5 = (char *)(*((_QWORD *)v2 + 2) - *a1);
    if ( !v5 )
      v5 = (char *)(*((_QWORD *)v2 + 3) - a1[1]);
    if ( !v5 )
    {
      _m_prefetchw((const void *)(v2 + 6));
      v6 = *((_QWORD *)v2 + 6);
      for ( i = v6 + 1; i > 1; i = v6 + 1 )
      {
        v8 = v6;
        v6 = _InterlockedCompareExchange64(v2 + 6, i, v6);
        if ( v8 == v6 )
        {
          *a2 = v2;
          return 0;
        }
      }
      if ( i != 1 )
        __fastfail(0xEu);
      return (unsigned int)-1073741738;
    }
    v2 = (volatile signed __int64 *)*v2;
  }
  return v4;
}
