/*
 * XREFs of ??1CBackTraceBucket@NSInstrumentation@@QEAA@XZ @ 0x1C017B42C
 * Callers:
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C017BB94 (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CBackTraceBucket::~CBackTraceBucket(NSInstrumentation::CBackTraceBucket *this)
{
  _QWORD *v2; // rcx

  while ( *(_QWORD *)this )
  {
    v2 = *(_QWORD **)this;
    *(_QWORD *)this = **(_QWORD **)this;
    ExFreePoolWithTag(v2, 0);
  }
}
