/*
 * XREFs of PspLookupSyscallProviderByIdNoLock @ 0x1406599CC
 * Callers:
 *     PspLookupSyscallProviderById @ 0x140419E5C (PspLookupSyscallProviderById.c)
 *     PspInsertSyscallProvider @ 0x14065994C (PspInsertSyscallProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspLookupSyscallProviderByIdNoLock(void **a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // r8
  unsigned int v3; // r9d
  signed __int64 v4; // rax
  unsigned __int64 i; // rcx
  signed __int64 v6; // rtt

  v2 = (volatile signed __int64 *)PspSyscallProviders;
  v3 = -1073741275;
  while ( v2 != (volatile signed __int64 *)&PspSyscallProviders )
  {
    if ( *((void **)v2 + 2) == *a1 && *((void **)v2 + 3) == a1[1] )
    {
      _m_prefetchw((const void *)(v2 + 6));
      v4 = *((_QWORD *)v2 + 6);
      for ( i = v4 + 1; i > 1; i = v4 + 1 )
      {
        v6 = v4;
        v4 = _InterlockedCompareExchange64(v2 + 6, i, v4);
        if ( v6 == v4 )
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
  return v3;
}
