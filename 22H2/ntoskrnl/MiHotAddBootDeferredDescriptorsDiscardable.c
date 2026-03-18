/*
 * XREFs of MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B69B38
 * Callers:
 *     MiHotAddBootDeferredDescriptors @ 0x1408515B0 (MiHotAddBootDeferredDescriptors.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     MiHotAddBootDescriptor @ 0x140B9A4C0 (MiHotAddBootDescriptor.c)
 */

int MiHotAddBootDeferredDescriptorsDiscardable()
{
  unsigned __int64 v0; // rax
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx

  LODWORD(v0) = KeWaitForSingleObject(&unk_140C6F568, Executive, 0, 0, 0LL);
  v1 = qword_140D852F8;
  v2 = 64LL;
  do
  {
    if ( v1[2] )
    {
      v0 = *(int *)v1;
      if ( (unsigned int)v0 > 0x2A || (v3 = 0x5C5C0C00048LL, !_bittest64(&v3, v0)) )
        LODWORD(v0) = MiHotAddBootDescriptor(v1 - 3);
    }
    v1 += 6;
    --v2;
  }
  while ( v2 );
  return v0;
}
