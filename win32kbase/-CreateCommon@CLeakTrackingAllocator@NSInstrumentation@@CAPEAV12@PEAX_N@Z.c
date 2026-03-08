/*
 * XREFs of ?CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z @ 0x1C00D23DC
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00D4E64 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C019AFB8 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z @ 0x1C019B004 (-CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateCommon(
        void *a1)
{
  struct NSInstrumentation::CLeakTrackingAllocator *result; // rax

  dword_1C02D4F10 = 0;
  qword_1C02D4F18 = 0LL;
  qword_1C02D4F38 = 0LL;
  qword_1C02D4F20 = 0LL;
  dword_1C02D4F30 = 0;
  qword_1C02D4F60 = 0LL;
  qword_1C02D4F68 = 0LL;
  byte_1C02D4FA0 = 0;
  result = (struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C02D4F10;
  xmmword_1C02D4F80 = 0LL;
  xmmword_1C02D4F90 = 0LL;
  xmmword_1C02D4F70 = 0LL;
  return result;
}
