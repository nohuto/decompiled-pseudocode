/*
 * XREFs of FreeSystemRelativePath @ 0x1C0199F18
 * Callers:
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00B1D40 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall FreeSystemRelativePath(__int64 a1)
{
  char *v1; // rdx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
