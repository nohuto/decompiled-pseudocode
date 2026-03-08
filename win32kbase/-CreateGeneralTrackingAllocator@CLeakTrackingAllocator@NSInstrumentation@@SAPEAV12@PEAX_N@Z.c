/*
 * XREFs of ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C019AFB8
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00D4E64 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z @ 0x1C00D23DC (-CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D4B54 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C019BEDC (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(
        void *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::CreateCommon(a1);
  dword_1C02D4F10 = 1;
  qword_1C02D4F18 = (__int64)NSInstrumentation::CPointerHashTable::Create(0);
  if ( qword_1C02D4F18 )
    return (struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C02D4F10;
  NSInstrumentation::CLeakTrackingAllocator::Destroy((struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C02D4F10);
  return 0LL;
}
