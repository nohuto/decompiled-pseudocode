/*
 * XREFs of ?Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DEC08
 * Callers:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DEB08 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CBackTraceBucket::Remove(
        const struct NSInstrumentation::CBackTraceStorageUnit **this,
        const struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  const struct NSInstrumentation::CBackTraceStorageUnit *v3; // r9
  const struct NSInstrumentation::CBackTraceStorageUnit *v4; // rcx
  const struct NSInstrumentation::CBackTraceStorageUnit *v7; // rax

  v3 = 0LL;
  v4 = *this;
  if ( !v4 )
    return 0;
  do
  {
    if ( v4 == a2 )
      break;
    v3 = v4;
    v4 = *(const struct NSInstrumentation::CBackTraceStorageUnit **)v4;
  }
  while ( v4 );
  if ( !v4 )
    return 0;
  if ( (*((_DWORD *)v4 + 44))-- == 1 )
  {
    v7 = *(const struct NSInstrumentation::CBackTraceStorageUnit **)v4;
    if ( v4 == *this )
      *this = v7;
    else
      *(_QWORD *)v3 = v7;
    ExFreePoolWithTag(v4, 0);
  }
  return 1;
}
