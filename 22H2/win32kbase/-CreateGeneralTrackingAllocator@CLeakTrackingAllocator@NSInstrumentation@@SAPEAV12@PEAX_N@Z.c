/*
 * XREFs of ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C016E108
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00C5B60 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z @ 0x1C00C2BB0 (-CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C5850 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C016F02C (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(
        void *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::CreateCommon(a1);
  dword_1C0293EA0 = 1;
  qword_1C0293EA8 = (__int64)NSInstrumentation::CPointerHashTable::Create(0);
  if ( qword_1C0293EA8 )
    return (struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C0293EA0;
  NSInstrumentation::CLeakTrackingAllocator::Destroy((struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C0293EA0);
  return 0LL;
}
