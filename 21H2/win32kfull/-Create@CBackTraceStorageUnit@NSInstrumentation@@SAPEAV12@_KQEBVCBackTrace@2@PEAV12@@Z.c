/*
 * XREFs of ?Create@CBackTraceStorageUnit@NSInstrumentation@@SAPEAV12@_KQEBVCBackTrace@2@PEAV12@@Z @ 0x1C02DE638
 * Callers:
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1C02DE8DC (-Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceStorageUnit::Create(
        __int64 a1,
        const struct NSInstrumentation::CBackTrace *const a2,
        struct NSInstrumentation::CBackTraceStorageUnit *a3)
{
  struct NSInstrumentation::CBackTraceStorageUnit *result; // rax

  result = (struct NSInstrumentation::CBackTraceStorageUnit *)ExAllocatePoolWithTag(
                                                                PagedPoolSession,
                                                                0xB8uLL,
                                                                0x30497355u);
  if ( result )
  {
    *((_QWORD *)result + 1) = a1;
    *((_OWORD *)result + 1) = *(_OWORD *)a2;
    *((_OWORD *)result + 2) = *((_OWORD *)a2 + 1);
    *((_OWORD *)result + 3) = *((_OWORD *)a2 + 2);
    *((_OWORD *)result + 4) = *((_OWORD *)a2 + 3);
    *((_OWORD *)result + 5) = *((_OWORD *)a2 + 4);
    *((_OWORD *)result + 6) = *((_OWORD *)a2 + 5);
    *((_OWORD *)result + 7) = *((_OWORD *)a2 + 6);
    *((_OWORD *)result + 8) = *((_OWORD *)a2 + 7);
    *((_OWORD *)result + 9) = *((_OWORD *)a2 + 8);
    *((_OWORD *)result + 10) = *((_OWORD *)a2 + 9);
    *(_QWORD *)result = a3;
    *((_DWORD *)result + 44) = 1;
  }
  return result;
}
