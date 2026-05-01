/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@UEAAKXZ @ 0x1801BF290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoHandle<void *>>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  char *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (char *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
