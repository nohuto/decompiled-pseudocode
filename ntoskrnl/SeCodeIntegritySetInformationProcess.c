/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x1409C5C40
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, unsigned int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  void *Pool2; // rax
  void *v10; // rbx
  unsigned int v11; // edi

  v4 = a4;
  if ( !qword_140C37668 )
    return 3221225659LL;
  Pool2 = (void *)ExAllocatePool2(256LL, a4, 538994003LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memmove(Pool2, a3, v4);
  v11 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD))qword_140C37668)(a1, a2, v10, (unsigned int)v4);
  ExFreePoolWithTag(v10, 0);
  return v11;
}
