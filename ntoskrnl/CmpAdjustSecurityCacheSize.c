/*
 * XREFs of CmpAdjustSecurityCacheSize @ 0x14079179C
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

char __fastcall CmpAdjustSecurityCacheSize(__int64 a1)
{
  unsigned int v2; // ecx
  void *v3; // rax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 1872);
  if ( v2 >= *(_DWORD *)(a1 + 1876) )
    goto LABEL_4;
  v3 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(16 * v2, 0LL, 1666403651LL);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, *(const void **)(a1 + 1888), 16LL * *(unsigned int *)(a1 + 1872));
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(
      *(_QWORD *)(a1 + 1888),
      (unsigned int)(16 * *(_DWORD *)(a1 + 1876)));
    *(_DWORD *)(a1 + 1876) = *(_DWORD *)(a1 + 1872);
    *(_QWORD *)(a1 + 1888) = v4;
LABEL_4:
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
