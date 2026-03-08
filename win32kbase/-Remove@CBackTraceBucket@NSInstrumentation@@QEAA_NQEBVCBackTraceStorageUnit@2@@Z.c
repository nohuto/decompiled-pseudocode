/*
 * XREFs of ?Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C019D08C
 * Callers:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C019CF8C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CBackTraceBucket::Remove(
        NSInstrumentation::CBackTraceBucket *this,
        NSInstrumentation::CBackTraceBucket *a2)
{
  NSInstrumentation::CBackTraceBucket *v2; // r8
  NSInstrumentation::CBackTraceBucket *i; // r9
  NSInstrumentation::CBackTraceBucket *v6; // rax

  v2 = this;
  for ( i = 0LL; ; i = this )
  {
    this = *(NSInstrumentation::CBackTraceBucket **)this;
    if ( !this )
      return 0;
    if ( this == a2 )
      break;
  }
  if ( (*((_DWORD *)this + 44))-- == 1 )
  {
    v6 = *(NSInstrumentation::CBackTraceBucket **)this;
    if ( this == *(NSInstrumentation::CBackTraceBucket **)v2 )
      *(_QWORD *)v2 = v6;
    else
      *(_QWORD *)i = v6;
    ExFreePoolWithTag(this, 0);
  }
  return 1;
}
