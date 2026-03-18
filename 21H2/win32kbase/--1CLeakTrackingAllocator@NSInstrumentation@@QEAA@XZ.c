/*
 * XREFs of ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x1C00C46D0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0179FB4 (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C017AD18 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C017BB94 (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Destroy(v2);
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(v4);
    ExFreePoolWithTag(v4, 0);
  }
}
