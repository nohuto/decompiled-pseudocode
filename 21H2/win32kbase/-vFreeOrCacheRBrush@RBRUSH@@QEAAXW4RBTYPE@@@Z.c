/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00802E0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0062FA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C007FC7C (-vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C007FCA0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C00989A0 (GreSetSolidBrushLight.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00CB9C0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     EngFreeUserMem @ 0x1C00A8740 (EngFreeUserMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(char *a1, int a2)
{
  char *v2; // rbx
  int v3; // esi
  void **v4; // rdi

  v2 = a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = &gpCachedEngbrush;
    }
    else
    {
      v3 = *((_DWORD *)a1 + 2);
      v4 = &gpCachedDbrush;
      if ( v3 && qword_1C029B490 && (int)qword_1C029B490() >= 0 && qword_1C029B498 )
        qword_1C029B498(v2 + 16);
    }
    if ( !*v4 && v3 != 1 )
      v2 = (char *)_InterlockedExchange64((volatile __int64 *)v4, (__int64)v2);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v2);
  }
}
