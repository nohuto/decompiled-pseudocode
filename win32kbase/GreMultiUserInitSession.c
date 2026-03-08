/*
 * XREFs of GreMultiUserInitSession @ 0x1C000FCA0
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C005D430 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
  unsigned __int16 *v15; // rax
  void *v16; // rdx
  unsigned __int16 *v17; // rax

  v11 = 0;
  *(_DWORD *)(a1 + 4) = a5;
  *(_QWORD *)(a1 + 24) = a2;
  v13 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = a4;
  *(_QWORD *)(a1 + 32) = a3;
  if ( v13 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
  v14 = (unsigned int)(a8 + 1);
  v15 = (unsigned __int16 *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              0x104uLL,
                              2 * v14,
                              0x79737355u);
  *(_QWORD *)(a1 + 40) = v15;
  if ( v15 )
  {
    StringCchCopyNW(v15, (unsigned int)(a8 + 1), a9, (unsigned int)(a8 + 1));
    *(_DWORD *)(a1 + 48) = v14;
    v11 = 1;
  }
  v16 = *(void **)(a1 + 56);
  if ( v16 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
  v17 = (unsigned __int16 *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              0x104uLL,
                              2LL * (unsigned int)(a10 + 1),
                              0x79737355u);
  *(_QWORD *)(a1 + 56) = v17;
  if ( v17 )
  {
    StringCchCopyNW(v17, (unsigned int)(a10 + 1), a11, (unsigned int)(a10 + 1));
    return 1;
  }
  return v11;
}
