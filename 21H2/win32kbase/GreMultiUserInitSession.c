/*
 * XREFs of GreMultiUserInitSession @ 0x1C007F590
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C007349C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall GreMultiUserInitSession(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int16 *a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned int v11; // edi
  void *v13; // rdx
  __int64 v14; // rbp
  char *v15; // rax
  void *v16; // rdx
  char *v17; // rax

  v11 = 0;
  *(_DWORD *)(a1 + 4) = a5;
  *(_QWORD *)(a1 + 24) = a2;
  v13 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = a4;
  *(_QWORD *)(a1 + 32) = a3;
  if ( v13 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v13);
  v14 = (unsigned int)(a8 + 1);
  v15 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  260LL,
                  2 * v14,
                  2037609301);
  *(_QWORD *)(a1 + 40) = v15;
  if ( v15 )
  {
    StringCchCopyNW(v15, (unsigned int)(a8 + 1), (char *)a9, (unsigned int)(a8 + 1));
    *(_DWORD *)(a1 + 48) = v14;
    v11 = 1;
  }
  v16 = *(void **)(a1 + 56);
  if ( v16 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v16);
  v17 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  260LL,
                  2LL * (unsigned int)(a10 + 1),
                  2037609301);
  *(_QWORD *)(a1 + 56) = v17;
  if ( v17 )
  {
    StringCchCopyNW(v17, (unsigned int)(a10 + 1), (char *)a11, (unsigned int)(a10 + 1));
    return 1;
  }
  return v11;
}
