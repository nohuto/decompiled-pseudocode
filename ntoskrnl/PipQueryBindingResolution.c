/*
 * XREFs of PipQueryBindingResolution @ 0x14083888C
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PipSetDependency @ 0x1408387E4 (PipSetDependency.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall PipQueryBindingResolution(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  __int64 *v5; // rbp
  const UNICODE_STRING *v6; // r14
  const UNICODE_STRING *v7; // rcx
  __int64 v8; // rax

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v3 = (__int64 *)PiDependencyNodeListHead;
      while ( v3 != &PiDependencyNodeListHead )
      {
        v5 = v3;
        v3 = (__int64 *)*v3;
        v6 = (const UNICODE_STRING *)v5[7];
        while ( v6 != (const UNICODE_STRING *)(v5 + 7) )
        {
          v7 = v6;
          v6 = *(const UNICODE_STRING **)&v6->Length;
          if ( RtlEqualUnicodeString(v7 + 1, *(PCUNICODE_STRING *)(a1 + 8), 1u) )
            return v5;
        }
      }
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
      return *(__int64 **)(*(_QWORD *)(v8 + 312) + 80LL);
  }
  return (__int64 *)v1;
}
