/*
 * XREFs of ?Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1C019CD5C
 * Callers:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C019CC18 (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 *     ?Create@CBackTraceStorageUnit@NSInstrumentation@@SAPEAV12@_KQEBVCBackTrace@2@PEAV12@@Z @ 0x1C019CA5C (-Create@CBackTraceStorageUnit@NSInstrumentation@@SAPEAV12@_KQEBVCBackTrace@2@PEAV12@@Z.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceBucket::Insert(
        NSInstrumentation::CBackTraceBucket *this,
        __int64 a2,
        const struct NSInstrumentation::CBackTrace *const a3)
{
  struct NSInstrumentation::CBackTraceStorageUnit *v3; // rbp
  struct NSInstrumentation::CBackTraceStorageUnit *v7; // rbx
  struct NSInstrumentation::CBackTraceStorageUnit *result; // rax
  volatile signed __int32 *v9; // rdx

  v3 = *(struct NSInstrumentation::CBackTraceStorageUnit **)this;
  v7 = *(struct NSInstrumentation::CBackTraceStorageUnit **)this;
  if ( *(_QWORD *)this )
  {
    while ( *((_QWORD *)v7 + 1) != a2 || memcmp((char *)v7 + 16, a3, 0xA0uLL) )
    {
      v7 = *(struct NSInstrumentation::CBackTraceStorageUnit **)v7;
      if ( !v7 )
        goto LABEL_5;
    }
    _InterlockedIncrement((volatile signed __int32 *)v7 + 44);
    return v7;
  }
  else
  {
LABEL_5:
    result = NSInstrumentation::CBackTraceStorageUnit::Create(a2, a3, v3);
    if ( result )
    {
      v9 = (volatile signed __int32 *)*((_QWORD *)this + 1);
      *(_QWORD *)this = result;
      if ( v9 )
        *((_DWORD *)result + 45) = _InterlockedIncrement(v9);
    }
  }
  return result;
}
