/*
 * XREFs of ?Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1C014E368
 * Callers:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C014E220 (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     memcmp @ 0x1C00CE910 (memcmp.c)
 *     ?Create@CBackTraceStorageUnit@NSInstrumentation@@SAPEAV12@_KQEBVCBackTrace@2@PEAV12@@Z @ 0x1C014E068 (-Create@CBackTraceStorageUnit@NSInstrumentation@@SAPEAV12@_KQEBVCBackTrace@2@PEAV12@@Z.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceBucket::Insert(
        NSInstrumentation::CBackTraceBucket *this,
        __int64 a2,
        const struct NSInstrumentation::CBackTrace *const a3)
{
  struct NSInstrumentation::CBackTraceStorageUnit *v3; // rbx
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // r14
  struct NSInstrumentation::CBackTraceStorageUnit *result; // rax
  volatile signed __int32 *v9; // rdx

  v3 = *(struct NSInstrumentation::CBackTraceStorageUnit **)this;
  v5 = *(struct NSInstrumentation::CBackTraceStorageUnit **)this;
  while ( v3 )
  {
    if ( *((_QWORD *)v3 + 1) == a2 && !memcmp((char *)v3 + 16, a3, 0xA0uLL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v3 + 44);
      return v3;
    }
    v3 = *(struct NSInstrumentation::CBackTraceStorageUnit **)v3;
  }
  result = NSInstrumentation::CBackTraceStorageUnit::Create(a2, a3, v5);
  if ( result )
  {
    v9 = (volatile signed __int32 *)*((_QWORD *)this + 1);
    *(_QWORD *)this = result;
    if ( v9 )
      *((_DWORD *)result + 45) = _InterlockedIncrement(v9);
  }
  return result;
}
