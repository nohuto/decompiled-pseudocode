/*
 * XREFs of ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C017A184
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C017A0A4 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C017AD58 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeAll(NSInstrumentation::CLeakTrackingAllocator *this)
{
  _QWORD *v1; // rbx
  NSInstrumentation::CPointerHashTable *v2; // rcx
  __int64 v3; // rcx

  v1 = gpLeakTrackingAllocator;
  v2 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v2,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      gpLeakTrackingAllocator);
  v3 = v1[7];
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v3,
      (void (__fastcall *)(__int64, _QWORD, __int64))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      (__int64)v1);
}
